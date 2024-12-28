#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcEventLogOutput {
public:
    // prevent constructor by default
    RtcEventLogOutput& operator=(RtcEventLogOutput const&);
    RtcEventLogOutput(RtcEventLogOutput const&);
    RtcEventLogOutput();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtcEventLogOutput();

    // vIndex: 1
    virtual bool IsActive() const = 0;

    // vIndex: 2
    virtual bool Write(::std::string_view) = 0;

    // vIndex: 3
    virtual void Flush();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $Flush();
    // NOLINTEND
};

} // namespace webrtc
