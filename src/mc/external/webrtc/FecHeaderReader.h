#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FecHeaderReader {
public:
    // prevent constructor by default
    FecHeaderReader& operator=(FecHeaderReader const&);
    FecHeaderReader(FecHeaderReader const&);
    FecHeaderReader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FecHeaderReader(uint64, uint64);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint64, uint64);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc