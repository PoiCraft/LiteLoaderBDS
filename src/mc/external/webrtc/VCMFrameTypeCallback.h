#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class VCMFrameTypeCallback {
public:
    // prevent constructor by default
    VCMFrameTypeCallback& operator=(VCMFrameTypeCallback const&);
    VCMFrameTypeCallback(VCMFrameTypeCallback const&);
    VCMFrameTypeCallback();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual int RequestKeyFrame() = 0;

    // vIndex: 1
    virtual ~VCMFrameTypeCallback();
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
