#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/NetEq.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioDecoderFactory; }
namespace webrtc { class Clock; }
namespace webrtc { class NetEq; }
// clang-format on

namespace webrtc {

class NetEqFactory {
public:
    // prevent constructor by default
    NetEqFactory& operator=(NetEqFactory const&);
    NetEqFactory(NetEqFactory const&);
    NetEqFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetEqFactory();

    // vIndex: 1
    virtual ::std::unique_ptr<::webrtc::NetEq>
    CreateNetEq(::webrtc::NetEq::Config const&, ::webrtc::scoped_refptr<::webrtc::AudioDecoderFactory> const&, ::webrtc::Clock*)
        const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
