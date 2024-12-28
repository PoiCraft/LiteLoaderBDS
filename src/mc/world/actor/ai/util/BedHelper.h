#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

class BedHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk90ce77;
    ::ll::UntypedStorage<4, 4> mUnk4603a8;
    ::ll::UntypedStorage<4, 4> mUnk9a4ae9;
    ::ll::UntypedStorage<4, 4> mUnk818d72;
    ::ll::UntypedStorage<4, 4> mUnk9715e4;
    ::ll::UntypedStorage<4, 4> mUnke2c7e7;
    ::ll::UntypedStorage<4, 4> mUnke6f0ae;
    ::ll::UntypedStorage<4, 4> mUnk9c5d4d;
    ::ll::UntypedStorage<4, 4> mUnk541c50;
    ::ll::UntypedStorage<4, 4> mUnk63983f;
    // NOLINTEND

public:
    // prevent constructor by default
    BedHelper& operator=(BedHelper const&);
    BedHelper(BedHelper const&);
    BedHelper();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI float getBedRotation(int direction) const;

    MCAPI void setBedPositionOffsets(int direction, float& mobOffsetX, float& mobOffsetZ, ::Vec3& bedOffset);
    // NOLINTEND
};
