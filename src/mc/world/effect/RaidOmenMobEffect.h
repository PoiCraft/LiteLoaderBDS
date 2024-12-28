#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct EffectDuration;
// clang-format on

class RaidOmenMobEffect : public ::MobEffect {
public:
    // prevent constructor by default
    RaidOmenMobEffect& operator=(RaidOmenMobEffect const&);
    RaidOmenMobEffect(RaidOmenMobEffect const&);
    RaidOmenMobEffect();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void applyEffects(::Actor& target, ::EffectDuration durationTicks, int amplification) const /*override*/;

    // vIndex: 3
    virtual void onEffectExpired(::Actor& target) const /*override*/;

    // vIndex: 0
    virtual ~RaidOmenMobEffect() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $applyEffects(::Actor& target, ::EffectDuration durationTicks, int amplification) const;

    MCAPI void $onEffectExpired(::Actor& target) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
