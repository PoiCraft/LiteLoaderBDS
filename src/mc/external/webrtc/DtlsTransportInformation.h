#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/DtlsTransportState.h"
#include "mc/external/webrtc/DtlsTransportTlsRole.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SSLCertChain; }
// clang-format on

namespace webrtc {

class DtlsTransportInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk9b1045;
    ::ll::UntypedStorage<4, 8> mUnk3fd5dd;
    ::ll::UntypedStorage<4, 8> mUnk3886b9;
    ::ll::UntypedStorage<4, 8> mUnkfde0ae;
    ::ll::UntypedStorage<4, 8> mUnkfcfe9e;
    ::ll::UntypedStorage<8, 8> mUnk3bb6b1;
    // NOLINTEND

public:
    // prevent constructor by default
    DtlsTransportInformation& operator=(DtlsTransportInformation const&);
    DtlsTransportInformation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DtlsTransportInformation(::webrtc::DtlsTransportInformation const&);

    MCAPI explicit DtlsTransportInformation(::webrtc::DtlsTransportState);

    MCAPI
    DtlsTransportInformation(::webrtc::DtlsTransportState, ::std::optional<::webrtc::DtlsTransportTlsRole>, ::std::optional<int>, ::std::optional<int>, ::std::optional<int>, ::std::unique_ptr<::rtc::SSLCertChain>);

    MCAPI ~DtlsTransportInformation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::DtlsTransportInformation const&);

    MCAPI void* $ctor(::webrtc::DtlsTransportState);

    MCAPI void*
        $ctor(::webrtc::DtlsTransportState, ::std::optional<::webrtc::DtlsTransportTlsRole>, ::std::optional<int>, ::std::optional<int>, ::std::optional<int>, ::std::unique_ptr<::rtc::SSLCertChain>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc