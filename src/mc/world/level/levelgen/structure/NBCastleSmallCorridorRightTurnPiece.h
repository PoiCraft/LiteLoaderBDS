#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/NetherFortressPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class Random;
class StructurePiece;
// clang-format on

class NBCastleSmallCorridorRightTurnPiece : public ::NetherFortressPiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnke05fa7;
    // NOLINTEND

public:
    // prevent constructor by default
    NBCastleSmallCorridorRightTurnPiece& operator=(NBCastleSmallCorridorRightTurnPiece const&);
    NBCastleSmallCorridorRightTurnPiece(NBCastleSmallCorridorRightTurnPiece const&);
    NBCastleSmallCorridorRightTurnPiece();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::StructurePieceType getType() const /*override*/;

    // vIndex: 3
    virtual void addChildren(
        ::StructurePiece&                                   startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random
    ) /*override*/;

    // vIndex: 4
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    // vIndex: 0
    virtual ~NBCastleSmallCorridorRightTurnPiece() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::NetherFortressPiece> createPiece(
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction,
        int                                                 genDepth
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
    MCAPI ::StructurePieceType $getType() const;

    MCAPI void $addChildren(
        ::StructurePiece&                                   startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random
    );

    MCAPI bool $postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
