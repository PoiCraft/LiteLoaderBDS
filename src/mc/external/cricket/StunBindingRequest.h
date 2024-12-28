#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class UDPPort; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace cricket {

class StunBindingRequest {
public:
    // prevent constructor by default
    StunBindingRequest& operator=(StunBindingRequest const&);
    StunBindingRequest(StunBindingRequest const&);
    StunBindingRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StunBindingRequest(::cricket::UDPPort*, ::rtc::SocketAddress const&, int64);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cricket::UDPPort*, ::rtc::SocketAddress const&, int64);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
