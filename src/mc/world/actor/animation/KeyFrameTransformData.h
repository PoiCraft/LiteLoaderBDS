#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
// clang-format on

class KeyFrameTransformData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb258dc;
    ::ll::UntypedStorage<8, 24> mUnka584b9;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyFrameTransformData& operator=(KeyFrameTransformData const&);
    KeyFrameTransformData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI KeyFrameTransformData(::KeyFrameTransformData const&);

    MCAPI void addChannelTransform(::ExpressionNode const& expression, int axisIndex);

    MCAPI bool operator==(::KeyFrameTransformData const& rhs) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::KeyFrameTransformData const&);
    // NOLINTEND
};
