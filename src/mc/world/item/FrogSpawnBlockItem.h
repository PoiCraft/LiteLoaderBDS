#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/BlockItem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class InteractionResult;
class ItemStack;
class ItemStackBase;
class Vec3;
// clang-format on

class FrogSpawnBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    FrogSpawnBlockItem& operator=(FrogSpawnBlockItem const&);
    FrogSpawnBlockItem(FrogSpawnBlockItem const&);
    FrogSpawnBlockItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 120
    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

    // vIndex: 118
    virtual bool _calculatePlacePos(::ItemStackBase&, ::Actor&, uchar& face, ::BlockPos& pos) const /*override*/;

    // vIndex: 48
    virtual bool isLiquidClipItem() const /*override*/;

    // vIndex: 0
    virtual ~FrogSpawnBlockItem() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FrogSpawnBlockItem(::std::string const& name, int blockId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int blockId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;

    MCAPI bool $_calculatePlacePos(::ItemStackBase&, ::Actor&, uchar& face, ::BlockPos& pos) const;

    MCAPI bool $isLiquidClipItem() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
