#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SetItemLoreFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    SetItemLoreFunction& operator=(SetItemLoreFunction const&);
    SetItemLoreFunction(SetItemLoreFunction const&);
    SetItemLoreFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetItemLoreFunction() = default;

    // vIndex: 1
    virtual void apply(class ItemStack& item, class Random&, class LootTableContext&);

    // vIndex: 3
    virtual void apply(class ItemInstance& itemInstance, class Random&, class LootTableContext&);

    MCAPI static std::unique_ptr<class LootItemFunction>
    deserialize(class Json::Value object, std::vector<std::unique_ptr<class LootItemCondition>>& predicates);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void apply$(class ItemStack& item, class Random&, class LootTableContext&);

    MCAPI void apply$(class ItemInstance& itemInstance, class Random&, class LootTableContext&);

    // NOLINTEND
};
