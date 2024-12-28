#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/SdpType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class SessionDescription; }
namespace webrtc { class IceCandidateCollection; }
namespace webrtc { class IceCandidateInterface; }
// clang-format on

namespace webrtc {

class SessionDescriptionInterface {
public:
    // prevent constructor by default
    SessionDescriptionInterface& operator=(SessionDescriptionInterface const&);
    SessionDescriptionInterface(SessionDescriptionInterface const&);
    SessionDescriptionInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SessionDescriptionInterface();

    // vIndex: 1
    virtual ::std::unique_ptr<::webrtc::SessionDescriptionInterface> Clone() const;

    // vIndex: 3
    virtual ::cricket::SessionDescription* description() = 0;

    // vIndex: 2
    virtual ::cricket::SessionDescription const* description() const = 0;

    // vIndex: 4
    virtual ::std::string session_id() const = 0;

    // vIndex: 5
    virtual ::std::string session_version() const = 0;

    // vIndex: 6
    virtual ::webrtc::SdpType GetType() const;

    // vIndex: 7
    virtual ::std::string type() const = 0;

    // vIndex: 8
    virtual bool AddCandidate(::webrtc::IceCandidateInterface const*) = 0;

    // vIndex: 9
    virtual uint64 RemoveCandidates(::std::vector<::cricket::Candidate> const&);

    // vIndex: 10
    virtual uint64 number_of_mediasections() const = 0;

    // vIndex: 11
    virtual ::webrtc::IceCandidateCollection const* candidates(uint64) const = 0;

    // vIndex: 12
    virtual bool ToString(::std::string*) const = 0;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> kAnswer();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> kOffer();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> kPrAnswer();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> kRollback();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::webrtc::SessionDescriptionInterface> $Clone() const;

    MCAPI ::webrtc::SdpType $GetType() const;

    MCAPI uint64 $RemoveCandidates(::std::vector<::cricket::Candidate> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
