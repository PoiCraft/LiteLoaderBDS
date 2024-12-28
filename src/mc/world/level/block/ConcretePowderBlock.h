#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/FallingBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class HashedString;
class ItemInstance;
namespace BlockEvents { class BlockPlaceEvent; }
namespace mce { class Color; }
// clang-format on

class ConcretePowderBlock : public ::FallingBlock {
public:
    // prevent constructor by default
    ConcretePowderBlock& operator=(ConcretePowderBlock const&);
    ConcretePowderBlock(ConcretePowderBlock const&);
    ConcretePowderBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 151
    virtual ::mce::Color getDustColor(::Block const& block) const /*override*/;

    // vIndex: 152
    virtual ::std::string getDustParticleName(::Block const& block) const /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 102
    virtual bool shouldStopFalling(::Actor& entity) const /*override*/;

    // vIndex: 90
    virtual ::ItemInstance asItemInstance(::Block const& block, ::BlockActor const*) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~ConcretePowderBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ConcretePowderBlock(::std::string const& nameId, int id);

    MCAPI bool _tryTouchWater(::BlockSource& region, ::BlockPos const& pos, ::std::optional<::HashedString> name) const;

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::mce::Color $getDustColor(::Block const& block) const;

    MCAPI ::std::string $getDustParticleName(::Block const& block) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI bool $shouldStopFalling(::Actor& entity) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const& block, ::BlockActor const*) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
