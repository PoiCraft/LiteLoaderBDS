#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemActor;
class ItemStack;
class ShareableDefinition;
// clang-format on

class ShareableComponent {
public:
    // prevent constructor by default
    ShareableComponent& operator=(ShareableComponent const&);
    ShareableComponent(ShareableComponent const&);
    ShareableComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _shouldReplaceItem(
        ::ItemStack const&           itemToReplace,
        ::ItemStack const&           newItem,
        ::ShareableDefinition const& shareable,
        bool                         canPickupAnyItem
    ) const;

    MCAPI int getCountToPickUp(::Actor const& owner, ::ItemStack const& item) const;

    MCAPI int getCountToPickUp(::Actor const& owner, ::ItemActor const& itemActor) const;

    MCAPI int getSlotToSwap(::Actor& owner, ::ItemActor const& itemActor) const;

    MCAPI int hasSurplus(::Actor& owner, ::ItemStack const& item, bool includeStackSizeofItem) const;

    MCAPI int
    hasSurplus(::Actor& owner, ::ItemStack const& item, ::ItemStack& resultStack, bool includeStackSizeofItem) const;

    MCAPI bool itemBelongsInInventory(::Actor& owner, ::ItemStack const& item, bool canPickupToHandOrEquipment) const;

    MCAPI int wantsMore(::Actor const& owner, ::ItemStack const& item) const;

    MCAPI bool
    willPickup(::Actor& owner, ::ItemStack const& item, bool canPickupAnyItem, bool canPickupToHandOrEquipment) const;
    // NOLINTEND
};
