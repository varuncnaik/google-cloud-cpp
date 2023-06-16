// Copyright 2023 Google LLC
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
// source: google/cloud/compute/snapshots/v1/snapshots.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SNAPSHOTS_V1_SNAPSHOTS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SNAPSHOTS_V1_SNAPSHOTS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/snapshots/v1/snapshots.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_snapshots_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SnapshotsConnectionIdempotencyPolicy {
 public:
  virtual ~SnapshotsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<SnapshotsConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency DeleteSnapshots(
      google::cloud::cpp::compute::snapshots::v1::DeleteSnapshotsRequest const&
          request);

  virtual google::cloud::Idempotency GetSnapshots(
      google::cloud::cpp::compute::snapshots::v1::GetSnapshotsRequest const&
          request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::cloud::cpp::compute::snapshots::v1::GetIamPolicyRequest const&
          request);

  virtual google::cloud::Idempotency InsertSnapshots(
      google::cloud::cpp::compute::snapshots::v1::InsertSnapshotsRequest const&
          request);

  virtual google::cloud::Idempotency ListSnapshots(
      google::cloud::cpp::compute::snapshots::v1::ListSnapshotsRequest request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::cloud::cpp::compute::snapshots::v1::SetIamPolicyRequest const&
          request);

  virtual google::cloud::Idempotency SetLabels(
      google::cloud::cpp::compute::snapshots::v1::SetLabelsRequest const&
          request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::cloud::cpp::compute::snapshots::v1::
          TestIamPermissionsRequest const& request);
};

std::unique_ptr<SnapshotsConnectionIdempotencyPolicy>
MakeDefaultSnapshotsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_snapshots_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SNAPSHOTS_V1_SNAPSHOTS_CONNECTION_IDEMPOTENCY_POLICY_H
