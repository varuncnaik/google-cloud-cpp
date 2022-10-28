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
// source: google/cloud/datastream/v1/datastream.proto

#include "google/cloud/datastream/datastream_client.h"
#include "google/cloud/common_options.h"
#include "google/cloud/testing_util/example_driver.h"
#include <iostream>
#include <string>
#include <vector>

namespace {

void SetClientEndpoint(std::vector<std::string> const& argv) {
  if (!argv.empty()) {
    throw google::cloud::testing_util::Usage{"set-client-endpoint"};
  }
  //! [set-client-endpoint]
  // This configuration is common with Private Google Access:
  //     https://cloud.google.com/vpc/docs/private-google-access
  auto options = google::cloud::Options{}.set<google::cloud::EndpointOption>(
      "private.googleapis.com");
  auto client = google::cloud::datastream::DatastreamClient(
      google::cloud::datastream::MakeDatastreamConnection(options));
  // Use the `client` object as usual
  //! [set-client-endpoint]
}

// main-dox-marker: DatastreamClient
void AutoRun(std::vector<std::string> const& argv) {
  if (!argv.empty()) throw google::cloud::testing_util::Usage{"auto"};

  std::cout << "\nRunning SetClientEndpoint() example" << std::endl;
  SetClientEndpoint({});
}

}  // namespace

int main(int argc, char* argv[]) {  // NOLINT(bugprone-exception-escape)
  google::cloud::testing_util::Example example({
      {"set-client-endpoint", SetClientEndpoint},
      {"auto", AutoRun},
  });
  return example.Run(argc, argv);
}
