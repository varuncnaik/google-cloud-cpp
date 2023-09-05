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
// source: google/cloud/dialogflow/cx/v3/agent.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_AGENTS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_AGENTS_CONNECTION_IMPL_H

#include "google/cloud/dialogflow_cx/agents_connection.h"
#include "google/cloud/dialogflow_cx/agents_connection_idempotency_policy.h"
#include "google/cloud/dialogflow_cx/agents_options.h"
#include "google/cloud/dialogflow_cx/internal/agents_retry_traits.h"
#include "google/cloud/dialogflow_cx/internal/agents_stub.h"
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
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AgentsConnectionImpl : public dialogflow_cx::AgentsConnection {
 public:
  ~AgentsConnectionImpl() override = default;

  AgentsConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<dialogflow_cx_internal::AgentsStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::dialogflow::cx::v3::Agent> ListAgents(
      google::cloud::dialogflow::cx::v3::ListAgentsRequest request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::Agent> GetAgent(
      google::cloud::dialogflow::cx::v3::GetAgentRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Agent> CreateAgent(
      google::cloud::dialogflow::cx::v3::CreateAgentRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Agent> UpdateAgent(
      google::cloud::dialogflow::cx::v3::UpdateAgentRequest const& request)
      override;

  Status DeleteAgent(
      google::cloud::dialogflow::cx::v3::DeleteAgentRequest const& request)
      override;

  future<StatusOr<google::cloud::dialogflow::cx::v3::ExportAgentResponse>>
  ExportAgent(google::cloud::dialogflow::cx::v3::ExportAgentRequest const&
                  request) override;

  future<StatusOr<google::protobuf::Struct>> RestoreAgent(
      google::cloud::dialogflow::cx::v3::RestoreAgentRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::AgentValidationResult>
  ValidateAgent(google::cloud::dialogflow::cx::v3::ValidateAgentRequest const&
                    request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::AgentValidationResult>
  GetAgentValidationResult(
      google::cloud::dialogflow::cx::v3::GetAgentValidationResultRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::GenerativeSettings>
  GetGenerativeSettings(
      google::cloud::dialogflow::cx::v3::GetGenerativeSettingsRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::GenerativeSettings>
  UpdateGenerativeSettings(
      google::cloud::dialogflow::cx::v3::UpdateGenerativeSettingsRequest const&
          request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<dialogflow_cx_internal::AgentsStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_AGENTS_CONNECTION_IMPL_H
