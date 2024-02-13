#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class ProjectileSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    ProjectileSystem& operator=(ProjectileSystem const&);
    ProjectileSystem(ProjectileSystem const&);
    ProjectileSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ProjectileSystem@@UEAA@XZ
    virtual ~ProjectileSystem() = default;

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: ?tick@ProjectileSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVStrictEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    // symbol: ?_tickProjectileComponent@ProjectileSystem@@SAXPEAVActor@@AEAVProjectileComponent@@@Z
    MCAPI static void _tickProjectileComponent(class Actor* actor, class ProjectileComponent&);

    // NOLINTEND
};
