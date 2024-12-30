#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class LocalPlayer;
class Vec2;
// clang-format on

class ICameraClientInstance {
public:
    // prevent constructor by default
    ICameraClientInstance& operator=(ICameraClientInstance const&);
    ICameraClientInstance(ICameraClientInstance const&);
    ICameraClientInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ICameraClientInstance();

    // vIndex: 1
    virtual float getFrameAlpha() = 0;

    // vIndex: 2
    virtual ::Actor* getCameraActor() = 0;

    // vIndex: 3
    virtual ::std::optional<bool> isUnderLiquid() = 0;

    // vIndex: 4
    virtual ::LocalPlayer* getLocalPlayer() = 0;

    // vIndex: 5
    virtual ::Vec2 getLookDelta() = 0;

    // vIndex: 6
    virtual float getSecondsSinceProgramStart() = 0;

    // vIndex: 7
    virtual bool isRealityFullVRMode() = 0;
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