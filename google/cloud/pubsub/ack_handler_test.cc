// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/pubsub/ack_handler.h"
#include "google/cloud/pubsub/mocks/mock_ack_handler.h"
#include "absl/memory/memory.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace pubsub {
inline namespace GOOGLE_CLOUD_CPP_PUBSUB_NS {
namespace {

using ::testing::Return;

TEST(AckHandlerTest, AckId) {
  auto mock = absl::make_unique<pubsub_mocks::MockAckHandler>();
  EXPECT_CALL(*mock, ack_id()).WillOnce(Return("test-id"));
  AckHandler handler(std::move(mock));
  EXPECT_EQ("test-id", handler.ack_id());
}

TEST(AckHandlerTest, Ack) {
  auto mock = absl::make_unique<pubsub_mocks::MockAckHandler>();
  auto const expected = Status(StatusCode::kPermissionDenied, "uh-oh");
  EXPECT_CALL(*mock, ack()).WillOnce(Return(expected));
  AckHandler handler(std::move(mock));
  EXPECT_EQ(expected, std::move(handler).ack());
}

TEST(AckHandlerTest, Nack) {
  auto mock = absl::make_unique<pubsub_mocks::MockAckHandler>();
  auto const expected = Status(StatusCode::kPermissionDenied, "uh-oh");
  EXPECT_CALL(*mock, nack()).WillOnce(Return(expected));
  AckHandler handler(std::move(mock));
  EXPECT_EQ(expected, std::move(handler).nack());
}

}  // namespace
}  // namespace GOOGLE_CLOUD_CPP_PUBSUB_NS
}  // namespace pubsub
}  // namespace cloud
}  // namespace google
