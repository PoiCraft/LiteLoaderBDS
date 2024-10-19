#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SpawnChanceSubcomponent : public ::OnHitSubcomponent {
public:
    // prevent constructor by default
    SpawnChanceSubcomponent& operator=(SpawnChanceSubcomponent const&);
    SpawnChanceSubcomponent(SpawnChanceSubcomponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SpawnChanceSubcomponent() = default;

    // vIndex: 1
    virtual void readfromJSON(class Json::Value& component, class SemVersion const&);

    // vIndex: 2
    virtual void writetoJSON(class Json::Value& component) const;

    // vIndex: 3
    virtual void doOnHitEffect(class Actor& owner, class ProjectileComponent&);

    // vIndex: 4
    virtual char const* getName();

    MCAPI SpawnChanceSubcomponent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void doOnHitEffect$(class Actor& owner, class ProjectileComponent&);

    MCAPI char const* getName$();

    MCAPI void readfromJSON$(class Json::Value& component, class SemVersion const&);

    MCAPI void writetoJSON$(class Json::Value& component) const;

    // NOLINTEND
};