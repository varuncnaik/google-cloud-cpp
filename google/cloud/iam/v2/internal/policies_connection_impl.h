// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/iam/v2/policy.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_V2_INTERNAL_POLICIES_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_V2_INTERNAL_POLICIES_CONNECTION_IMPL_H

#include "google/cloud/iam/v2/internal/policies_retry_traits.h"
#include "google/cloud/iam/v2/internal/policies_stub.h"
#include "google/cloud/iam/v2/policies_connection.h"
#include "google/cloud/iam/v2/policies_connection_idempotency_policy.h"
#include "google/cloud/iam/v2/policies_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace iam_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PoliciesConnectionImpl : public iam_v2::PoliciesConnection {
 public:
  ~PoliciesConnectionImpl() override = default;

  PoliciesConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<iam_v2_internal::PoliciesStub> stub, Options options);

  Options options() override { return options_; }

  StreamRange<google::iam::v2::Policy> ListPolicies(
      google::iam::v2::ListPoliciesRequest request) override;

  StatusOr<google::iam::v2::Policy> GetPolicy(
      google::iam::v2::GetPolicyRequest const& request) override;

  future<StatusOr<google::iam::v2::Policy>> CreatePolicy(
      google::iam::v2::CreatePolicyRequest const& request) override;

  future<StatusOr<google::iam::v2::Policy>> UpdatePolicy(
      google::iam::v2::UpdatePolicyRequest const& request) override;

  future<StatusOr<google::iam::v2::Policy>> DeletePolicy(
      google::iam::v2::DeletePolicyRequest const& request) override;

 private:
  std::unique_ptr<iam_v2::PoliciesRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<iam_v2::PoliciesRetryPolicyOption>()) {
      return options.get<iam_v2::PoliciesRetryPolicyOption>()->clone();
    }
    return options_.get<iam_v2::PoliciesRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<iam_v2::PoliciesBackoffPolicyOption>()) {
      return options.get<iam_v2::PoliciesBackoffPolicyOption>()->clone();
    }
    return options_.get<iam_v2::PoliciesBackoffPolicyOption>()->clone();
  }

  std::unique_ptr<iam_v2::PoliciesConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<iam_v2::PoliciesConnectionIdempotencyPolicyOption>()) {
      return options.get<iam_v2::PoliciesConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_.get<iam_v2::PoliciesConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<iam_v2::PoliciesPollingPolicyOption>()) {
      return options.get<iam_v2::PoliciesPollingPolicyOption>()->clone();
    }
    return options_.get<iam_v2::PoliciesPollingPolicyOption>()->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<iam_v2_internal::PoliciesStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_V2_INTERNAL_POLICIES_CONNECTION_IMPL_H
