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
// source: google/cloud/datafusion/v1/datafusion.proto

#include "google/cloud/datafusion/v1/internal/data_fusion_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace datafusion_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DataFusionTracingStub::DataFusionTracingStub(
    std::shared_ptr<DataFusionStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::datafusion::v1::ListAvailableVersionsResponse>
DataFusionTracingStub::ListAvailableVersions(
    grpc::ClientContext& context,
    google::cloud::datafusion::v1::ListAvailableVersionsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datafusion.v1.DataFusion",
                                     "ListAvailableVersions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListAvailableVersions(context, request));
}

StatusOr<google::cloud::datafusion::v1::ListInstancesResponse>
DataFusionTracingStub::ListInstances(
    grpc::ClientContext& context,
    google::cloud::datafusion::v1::ListInstancesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datafusion.v1.DataFusion",
                                     "ListInstances");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListInstances(context, request));
}

StatusOr<google::cloud::datafusion::v1::Instance>
DataFusionTracingStub::GetInstance(
    grpc::ClientContext& context,
    google::cloud::datafusion::v1::GetInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datafusion.v1.DataFusion",
                                     "GetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetInstance(context, request));
}

future<StatusOr<google::longrunning::Operation>>
DataFusionTracingStub::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::datafusion::v1::CreateInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datafusion.v1.DataFusion",
                                     "CreateInstance");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncCreateInstance(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataFusionTracingStub::AsyncDeleteInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::datafusion::v1::DeleteInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datafusion.v1.DataFusion",
                                     "DeleteInstance");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncDeleteInstance(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataFusionTracingStub::AsyncUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::datafusion::v1::UpdateInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datafusion.v1.DataFusion",
                                     "UpdateInstance");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncUpdateInstance(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataFusionTracingStub::AsyncRestartInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::datafusion::v1::RestartInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datafusion.v1.DataFusion",
                                     "RestartInstance");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncRestartInstance(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataFusionTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncGetOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> DataFusionTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncCancelOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<DataFusionStub> MakeDataFusionTracingStub(
    std::shared_ptr<DataFusionStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<DataFusionTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datafusion_v1_internal
}  // namespace cloud
}  // namespace google
