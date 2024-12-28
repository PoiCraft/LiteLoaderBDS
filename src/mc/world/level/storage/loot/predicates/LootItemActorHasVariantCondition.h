#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

// auto generated forward declare list
// clang-format off
class LootTableContext;
class Random;
// clang-format on

class LootItemActorHasVariantCondition : public ::LootItemCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc4f662;
    // NOLINTEND

public:
    // prevent constructor by default
    LootItemActorHasVariantCondition& operator=(LootItemActorHasVariantCondition const&);
    LootItemActorHasVariantCondition(LootItemActorHasVariantCondition const&);
    LootItemActorHasVariantCondition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LootItemActorHasVariantCondition() /*override*/;

    // vIndex: 1
    virtual bool applies(::Random& random, ::LootTableContext& context) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $applies(::Random& random, ::LootTableContext& context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
