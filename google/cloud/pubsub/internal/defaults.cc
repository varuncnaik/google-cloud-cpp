// Copyright 2021 Google LLC
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

#include "google/cloud/pubsub/internal/defaults.h"
#include "google/cloud/pubsub/options.h"
#include "google/cloud/options.h"
#include <chrono>
#include <limits>

namespace google {
namespace cloud {
namespace pubsub_internal {
inline namespace GOOGLE_CLOUD_CPP_PUBSUB_NS {

Options DefaultPublisherOptions(Options opts) {
  if (!opts.has<pubsub::MaxHoldTimeOption>()) {
    opts.set<pubsub::MaxHoldTimeOption>(std::chrono::milliseconds(10));
  }
  if (!opts.has<pubsub::MaxBatchMessagesOption>()) {
    opts.set<pubsub::MaxBatchMessagesOption>(100);
  }
  if (!opts.has<pubsub::MaxBatchBytesOption>()) {
    opts.set<pubsub::MaxBatchBytesOption>(1024 * 1024L);
  }
  if (!opts.has<pubsub::MaxPendingBytesOption>()) {
    opts.set<pubsub::MaxPendingBytesOption>(
        (std::numeric_limits<std::size_t>::max)());
  }
  if (!opts.has<pubsub::MaxPendingMessagesOption>()) {
    opts.set<pubsub::MaxPendingMessagesOption>(
        (std::numeric_limits<std::size_t>::max)());
  }
  if (!opts.has<pubsub::MessageOrderingOption>()) {
    opts.set<pubsub::MessageOrderingOption>(false);
  }
  if (!opts.has<pubsub::FullPublisherActionOption>()) {
    opts.set<pubsub::FullPublisherActionOption>(
        pubsub::FullPublisherAction::kBlocks);
  }

  return opts;
}

}  // namespace GOOGLE_CLOUD_CPP_PUBSUB_NS
}  // namespace pubsub_internal
}  // namespace cloud
}  // namespace google
