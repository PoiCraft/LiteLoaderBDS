#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockActor;
class BlockLegacy;
class BlockPos;
class BlockSource;
class Experiments;
class Level;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class SkullBlock : public ::ActorBlockBase<::BlockLegacy> {
public:
    // SkullBlock inner types define
    enum class SkullType : int {
        Unset    = 4294967295,
        Skeleton = 0,
        Wither   = 1,
        Zombie   = 2,
        Char     = 3,
        Creeper  = 4,
        Dragon   = 5,
        Piglin   = 6,
        Count    = 7,
    };

public:
    // prevent constructor by default
    SkullBlock& operator=(SkullBlock const&);
    SkullBlock(SkullBlock const&);
    SkullBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 112
    virtual ::std::string buildDescriptionId(::Block const& block) const /*override*/;

    // vIndex: 11
    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    // vIndex: 79
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 92
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    // vIndex: 67
    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 23
    virtual bool canProvideSupport(::Block const& block, uchar face, ::BlockSupportType type) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~SkullBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SkullBlock(::std::string const& nameId, int id);

    MCAPI void _updatedDragonCircuit(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool checkMobSpawn(::Level& level, ::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Block const& getFlattenedBlock(::Block const& block, ::BlockActor const& actor);
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
    MCAPI ::std::string $buildDescriptionId(::Block const& block) const;

    MCAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::Block const&
    $getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue)
        const;

    MCAPI void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $canProvideSupport(::Block const& block, uchar face, ::BlockSupportType type) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
