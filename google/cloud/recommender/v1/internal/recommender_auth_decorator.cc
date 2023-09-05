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
// source: google/cloud/recommender/v1/recommender_service.proto

#include "google/cloud/recommender/v1/internal/recommender_auth_decorator.h"
#include <google/cloud/recommender/v1/recommender_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace recommender_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RecommenderAuth::RecommenderAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<RecommenderStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::recommender::v1::ListInsightsResponse>
RecommenderAuth::ListInsights(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::ListInsightsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListInsights(context, request);
}

StatusOr<google::cloud::recommender::v1::Insight> RecommenderAuth::GetInsight(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::GetInsightRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetInsight(context, request);
}

StatusOr<google::cloud::recommender::v1::Insight>
RecommenderAuth::MarkInsightAccepted(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::MarkInsightAcceptedRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->MarkInsightAccepted(context, request);
}

StatusOr<google::cloud::recommender::v1::ListRecommendationsResponse>
RecommenderAuth::ListRecommendations(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::ListRecommendationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListRecommendations(context, request);
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderAuth::GetRecommendation(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::GetRecommendationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetRecommendation(context, request);
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderAuth::MarkRecommendationDismissed(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::MarkRecommendationDismissedRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->MarkRecommendationDismissed(context, request);
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderAuth::MarkRecommendationClaimed(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::MarkRecommendationClaimedRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->MarkRecommendationClaimed(context, request);
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderAuth::MarkRecommendationSucceeded(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::MarkRecommendationSucceededRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->MarkRecommendationSucceeded(context, request);
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderAuth::MarkRecommendationFailed(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::MarkRecommendationFailedRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->MarkRecommendationFailed(context, request);
}

StatusOr<google::cloud::recommender::v1::RecommenderConfig>
RecommenderAuth::GetRecommenderConfig(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::GetRecommenderConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetRecommenderConfig(context, request);
}

StatusOr<google::cloud::recommender::v1::RecommenderConfig>
RecommenderAuth::UpdateRecommenderConfig(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::UpdateRecommenderConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateRecommenderConfig(context, request);
}

StatusOr<google::cloud::recommender::v1::InsightTypeConfig>
RecommenderAuth::GetInsightTypeConfig(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::GetInsightTypeConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetInsightTypeConfig(context, request);
}

StatusOr<google::cloud::recommender::v1::InsightTypeConfig>
RecommenderAuth::UpdateInsightTypeConfig(
    grpc::ClientContext& context,
    google::cloud::recommender::v1::UpdateInsightTypeConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateInsightTypeConfig(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recommender_v1_internal
}  // namespace cloud
}  // namespace google
