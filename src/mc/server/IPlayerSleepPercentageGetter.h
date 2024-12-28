#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPlayerSleepPercentageGetter {
public:
    // prevent constructor by default
    IPlayerSleepPercentageGetter& operator=(IPlayerSleepPercentageGetter const&);
    IPlayerSleepPercentageGetter(IPlayerSleepPercentageGetter const&);
    IPlayerSleepPercentageGetter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPlayerSleepPercentageGetter();

    // vIndex: 1
    virtual float getPlayerSleepPercentageGoal() const = 0;
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
