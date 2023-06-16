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
// source: google/cloud/compute/packet_mirrorings/v1/packet_mirrorings.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PACKET_MIRRORINGS_V1_PACKET_MIRRORINGS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PACKET_MIRRORINGS_V1_PACKET_MIRRORINGS_CLIENT_H

#include "google/cloud/compute/packet_mirrorings/v1/packet_mirrorings_rest_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace compute_packet_mirrorings_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the packetMirrorings resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/packetMirrorings
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class PacketMirroringsClient {
 public:
  explicit PacketMirroringsClient(
      ExperimentalTag, std::shared_ptr<PacketMirroringsConnection> connection,
      Options opts = {});
  ~PacketMirroringsClient();

  ///@{
  /// @name Copy and move support
  PacketMirroringsClient(PacketMirroringsClient const&) = default;
  PacketMirroringsClient& operator=(PacketMirroringsClient const&) = default;
  PacketMirroringsClient(PacketMirroringsClient&&) = default;
  PacketMirroringsClient& operator=(PacketMirroringsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(PacketMirroringsClient const& a,
                         PacketMirroringsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(PacketMirroringsClient const& a,
                         PacketMirroringsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Retrieves an aggregated list of packetMirrorings.
  ///
  /// @param project  Project ID for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.PacketMirroringAggregatedList])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.packet_mirrorings.v1.AggregatedListPacketMirroringsRequest]: @googleapis_reference_link{google/cloud/compute/packet_mirrorings/v1/packet_mirrorings.proto#L117}
  /// [google.cloud.cpp.compute.v1.PacketMirroringAggregatedList]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L18133}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::PacketMirroringAggregatedList>
  AggregatedListPacketMirrorings(std::string const& project, Options opts = {});

  // clang-format off
  ///
  /// Retrieves an aggregated list of packetMirrorings.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.packet_mirrorings.v1.AggregatedListPacketMirroringsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.PacketMirroringAggregatedList])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.packet_mirrorings.v1.AggregatedListPacketMirroringsRequest]: @googleapis_reference_link{google/cloud/compute/packet_mirrorings/v1/packet_mirrorings.proto#L117}
  /// [google.cloud.cpp.compute.v1.PacketMirroringAggregatedList]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L18133}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::PacketMirroringAggregatedList>
  AggregatedListPacketMirrorings(
      google::cloud::cpp::compute::packet_mirrorings::v1::
          AggregatedListPacketMirroringsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified PacketMirroring resource.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param packet_mirroring  Name of the PacketMirroring resource to delete.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.packet_mirrorings.v1.DeletePacketMirroringsRequest]: @googleapis_reference_link{google/cloud/compute/packet_mirrorings/v1/packet_mirrorings.proto#L191}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeletePacketMirrorings(std::string const& project, std::string const& region,
                         std::string const& packet_mirroring,
                         Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified PacketMirroring resource.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.packet_mirrorings.v1.DeletePacketMirroringsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.packet_mirrorings.v1.DeletePacketMirroringsRequest]: @googleapis_reference_link{google/cloud/compute/packet_mirrorings/v1/packet_mirrorings.proto#L191}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeletePacketMirrorings(google::cloud::cpp::compute::packet_mirrorings::v1::
                             DeletePacketMirroringsRequest const& request,
                         Options opts = {});

  // clang-format off
  ///
  /// Returns the specified PacketMirroring resource.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param packet_mirroring  Name of the PacketMirroring resource to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.PacketMirroring])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.packet_mirrorings.v1.GetPacketMirroringsRequest]: @googleapis_reference_link{google/cloud/compute/packet_mirrorings/v1/packet_mirrorings.proto#L221}
  /// [google.cloud.cpp.compute.v1.PacketMirroring]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L18069}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::PacketMirroring>
  GetPacketMirrorings(std::string const& project, std::string const& region,
                      std::string const& packet_mirroring, Options opts = {});

  // clang-format off
  ///
  /// Returns the specified PacketMirroring resource.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.packet_mirrorings.v1.GetPacketMirroringsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.PacketMirroring])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.packet_mirrorings.v1.GetPacketMirroringsRequest]: @googleapis_reference_link{google/cloud/compute/packet_mirrorings/v1/packet_mirrorings.proto#L221}
  /// [google.cloud.cpp.compute.v1.PacketMirroring]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L18069}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::PacketMirroring>
  GetPacketMirrorings(google::cloud::cpp::compute::packet_mirrorings::v1::
                          GetPacketMirroringsRequest const& request,
                      Options opts = {});

  // clang-format off
  ///
  /// Creates a PacketMirroring resource in the specified project and region
  /// using the data included in the request.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param packet_mirroring_resource  The PacketMirroring for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.packet_mirrorings.v1.InsertPacketMirroringsRequest]: @googleapis_reference_link{google/cloud/compute/packet_mirrorings/v1/packet_mirrorings.proto#L233}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertPacketMirrorings(std::string const& project, std::string const& region,
                         google::cloud::cpp::compute::v1::PacketMirroring const&
                             packet_mirroring_resource,
                         Options opts = {});

  // clang-format off
  ///
  /// Creates a PacketMirroring resource in the specified project and region
  /// using the data included in the request.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.packet_mirrorings.v1.InsertPacketMirroringsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.packet_mirrorings.v1.InsertPacketMirroringsRequest]: @googleapis_reference_link{google/cloud/compute/packet_mirrorings/v1/packet_mirrorings.proto#L233}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertPacketMirrorings(google::cloud::cpp::compute::packet_mirrorings::v1::
                             InsertPacketMirroringsRequest const& request,
                         Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of PacketMirroring resources available to the specified
  /// project and region.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.cpp.compute.v1.PacketMirroring], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.packet_mirrorings.v1.ListPacketMirroringsRequest]: @googleapis_reference_link{google/cloud/compute/packet_mirrorings/v1/packet_mirrorings.proto#L264}
  /// [google.cloud.cpp.compute.v1.PacketMirroring]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L18069}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::PacketMirroring>
  ListPacketMirrorings(std::string const& project, std::string const& region,
                       Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of PacketMirroring resources available to the specified
  /// project and region.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.packet_mirrorings.v1.ListPacketMirroringsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.cpp.compute.v1.PacketMirroring], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.packet_mirrorings.v1.ListPacketMirroringsRequest]: @googleapis_reference_link{google/cloud/compute/packet_mirrorings/v1/packet_mirrorings.proto#L264}
  /// [google.cloud.cpp.compute.v1.PacketMirroring]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L18069}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::PacketMirroring>
  ListPacketMirrorings(google::cloud::cpp::compute::packet_mirrorings::v1::
                           ListPacketMirroringsRequest request,
                       Options opts = {});

  // clang-format off
  ///
  /// Patches the specified PacketMirroring resource with the data included in
  /// the request. This method supports PATCH semantics and uses JSON merge patch
  /// format and processing rules.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param packet_mirroring  Name of the PacketMirroring resource to patch.
  /// @param packet_mirroring_resource  The PacketMirroring for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.packet_mirrorings.v1.PatchPacketMirroringsRequest]: @googleapis_reference_link{google/cloud/compute/packet_mirrorings/v1/packet_mirrorings.proto#L332}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchPacketMirrorings(std::string const& project, std::string const& region,
                        std::string const& packet_mirroring,
                        google::cloud::cpp::compute::v1::PacketMirroring const&
                            packet_mirroring_resource,
                        Options opts = {});

  // clang-format off
  ///
  /// Patches the specified PacketMirroring resource with the data included in
  /// the request. This method supports PATCH semantics and uses JSON merge patch
  /// format and processing rules.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.packet_mirrorings.v1.PatchPacketMirroringsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.packet_mirrorings.v1.PatchPacketMirroringsRequest]: @googleapis_reference_link{google/cloud/compute/packet_mirrorings/v1/packet_mirrorings.proto#L332}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchPacketMirrorings(google::cloud::cpp::compute::packet_mirrorings::v1::
                            PatchPacketMirroringsRequest const& request,
                        Options opts = {});

  // clang-format off
  ///
  /// Returns permissions that a caller has on the specified resource.
  ///
  /// @param project  Project ID for this request.
  /// @param region  The name of the region for this request.
  /// @param resource  Name or id of the resource for this request.
  /// @param test_permissions_request_resource  The TestPermissionsRequest for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TestPermissionsResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.packet_mirrorings.v1.TestIamPermissionsRequest]: @googleapis_reference_link{google/cloud/compute/packet_mirrorings/v1/packet_mirrorings.proto#L366}
  /// [google.cloud.cpp.compute.v1.TestPermissionsResponse]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L28944}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(
      std::string const& project, std::string const& region,
      std::string const& resource,
      google::cloud::cpp::compute::v1::TestPermissionsRequest const&
          test_permissions_request_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Returns permissions that a caller has on the specified resource.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.packet_mirrorings.v1.TestIamPermissionsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TestPermissionsResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.packet_mirrorings.v1.TestIamPermissionsRequest]: @googleapis_reference_link{google/cloud/compute/packet_mirrorings/v1/packet_mirrorings.proto#L366}
  /// [google.cloud.cpp.compute.v1.TestPermissionsResponse]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L28944}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::packet_mirrorings::v1::
                         TestIamPermissionsRequest const& request,
                     Options opts = {});

 private:
  std::shared_ptr<PacketMirroringsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_packet_mirrorings_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PACKET_MIRRORINGS_V1_PACKET_MIRRORINGS_CLIENT_H
