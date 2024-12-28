#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/network/packet/SpawnPositionType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPos;
class Dimension;
class NetworkBlockPosition;
class ReadOnlyBinaryStream;
// clang-format on

class SetSpawnPositionPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition> mPos;
    ::ll::TypedStorage<4, 4, ::SpawnPositionType>     mSpawnPosType;
    ::ll::TypedStorage<4, 4, ::DimensionType>         mDimensionType;
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition> mSpawnBlockPos;
    // NOLINTEND

public:
    // prevent constructor by default
    SetSpawnPositionPacket& operator=(SetSpawnPositionPacket const&);
    SetSpawnPositionPacket(SetSpawnPositionPacket const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~SetSpawnPositionPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SetSpawnPositionPacket();

    MCAPI SetSpawnPositionPacket(
        ::DimensionType   dimension,
        ::BlockPos const& playerPosition,
        ::BlockPos const& spawnBlockPos
    );

    MCAPI SetSpawnPositionPacket(::SpawnPositionType spawnPosType, ::DimensionType dimension, ::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::DimensionType dimension, ::BlockPos const& playerPosition, ::BlockPos const& spawnBlockPos);

    MCAPI void* $ctor(::SpawnPositionType spawnPosType, ::DimensionType dimension, ::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
