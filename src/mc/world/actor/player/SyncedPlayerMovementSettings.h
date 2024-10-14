#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/components/ServerAuthMovementMode.h"

struct SyncedPlayerMovementSettings {
public:
    ServerAuthMovementMode AuthorityMode;
    int                    mRewindHistorySize;
    bool                   ServerAuthBlockBreaking;

    // prevent constructor by default
    SyncedPlayerMovementSettings& operator=(SyncedPlayerMovementSettings const&);
    SyncedPlayerMovementSettings(SyncedPlayerMovementSettings const&);

public:
    // NOLINTBEGIN
    MCAPI SyncedPlayerMovementSettings();

    MCAPI explicit SyncedPlayerMovementSettings(struct PlayerMovementSettings const& settings);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
