#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerType.h"

class ContainerScreenContext {
public:
    // prevent constructor by default
    ContainerScreenContext& operator=(ContainerScreenContext const&);
    ContainerScreenContext(ContainerScreenContext const&);

public:
    // NOLINTBEGIN
    MCAPI ContainerScreenContext();

    MCAPI
    ContainerScreenContext(class Player& player, ::ContainerType screenContainerType, class BlockPos const& blockPos);

    MCAPI ContainerScreenContext(
        class Player&               player,
        ::ContainerType             screenContainerType,
        struct ActorUniqueID const& actorId
    );

    MCAPI class Player& getPlayer() const;

    MCAPI ::ContainerType getScreenContainerType() const;

    MCAPI class Actor* tryGetActor() const;

    MCAPI class BlockActor* tryGetBlockActor() const;

    MCAPI class BlockPos const* tryGetBlockActorPos() const;

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
