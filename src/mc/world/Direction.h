#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

class Direction {
public:
    // Direction inner types define
    enum class Type : uchar {
        South     = 0,
        West      = 1,
        North     = 2,
        East      = 3,
        Undefined = 255,
    };

public:
    // prevent constructor by default
    Direction& operator=(Direction const&);
    Direction(Direction const&);
    Direction();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Direction::Type convertFacingDirectionToDirection(uchar facingDirection);

    MCAPI static ::Direction::Type getDirection(float xd, float zd);

    MCAPI static ::Direction::Type mirrorDirection(::Mirror mirror, ::Direction::Type direction);

    MCAPI static ::Direction::Type rotateDirection(::Direction::Type direction, ::Rotation rotation);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<::Direction::Type const[]> DIRECTION_CLOCKWISE();

    MCAPI static ::std::add_lvalue_reference_t<::Direction::Type const[]> DIRECTION_COUNTER_CLOCKWISE();

    MCAPI static ::std::array<uchar, 4> const& DIRECTION_FACING();

    MCAPI static ::std::add_lvalue_reference_t<::Direction::Type const[]> DIRECTION_OPPOSITE();

    MCAPI static ::std::add_lvalue_reference_t<::Direction::Type const[]> FACING_DIRECTION();

    MCAPI static ::std::unordered_map<::std::string, ::Direction::Type> const& FROM_STRING_MAP();

    MCAPI static ::std::add_lvalue_reference_t<uchar[][6]> RELATIVE_DIRECTION_FACING();

    MCAPI static ::std::add_lvalue_reference_t<int const[]> STEP_X();

    MCAPI static ::std::add_lvalue_reference_t<int const[]> STEP_Z();

    MCAPI static ::std::unordered_map<uint, ::std::string> const& TO_STRING_MAP();
    // NOLINTEND
};
