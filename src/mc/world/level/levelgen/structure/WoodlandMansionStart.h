#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class BoundingBox;
class Dimension;
class Random;
// clang-format on

class WoodlandMansionStart : public ::StructureStart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk3df6c3;
    ::ll::UntypedStorage<4, 12> mUnk62ee6c;
    // NOLINTEND

public:
    // prevent constructor by default
    WoodlandMansionStart& operator=(WoodlandMansionStart const&);
    WoodlandMansionStart(WoodlandMansionStart const&);
    WoodlandMansionStart();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    // vIndex: 4
    virtual ::std::string_view getStructureName() const /*override*/;

    // vIndex: 0
    virtual ~WoodlandMansionStart() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _create(::Dimension& dimension, ::Random& random, int x, int z);

    MCAPI void _makeStairs(
        ::BlockPos const&    startPos,
        ::Block const&       stairBlock,
        uchar                xStepDir,
        uchar                yStepDir,
        ::BlockSource&       region,
        ::BoundingBox const& chunkBB
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    MCAPI ::std::string_view $getStructureName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
