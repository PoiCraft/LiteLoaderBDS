#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class TimeoutTag; }
namespace dcsctp { class Timer; }
namespace dcsctp { struct TimerOptions; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace dcsctp {

class TimerManager {
public:
    // prevent constructor by default
    TimerManager& operator=(TimerManager const&);
    TimerManager(TimerManager const&);
    TimerManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::dcsctp::Timer>
    CreateTimer(::std::string_view, ::std::function<::webrtc::TimeDelta()>, ::dcsctp::TimerOptions const&);

    MCAPI void HandleTimeout(::webrtc::StrongAlias<::dcsctp::TimeoutTag, uint64>);

    MCAPI ~TimerManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
