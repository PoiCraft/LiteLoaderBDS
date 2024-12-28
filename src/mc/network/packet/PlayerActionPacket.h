#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/network/packet/PlayerActionType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ActorRuntimeID;
class BinaryStream;
class BlockPos;
class NetworkBlockPosition;
class ReadOnlyBinaryStream;
// clang-format on

class PlayerActionPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition> mPos;
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition> mResultPos;
    ::ll::TypedStorage<4, 4, int>                     mFace;
    ::ll::TypedStorage<4, 4, ::PlayerActionType>      mAction;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>        mRuntimeId;
    ::ll::TypedStorage<1, 1, bool>                    mIsFromServerPlayerMovementSystem;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerActionPacket& operator=(PlayerActionPacket const&);
    PlayerActionPacket(PlayerActionPacket const&);

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
    virtual ~PlayerActionPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerActionPacket();

    MCAPI PlayerActionPacket(::PlayerActionType action, ::ActorRuntimeID runtimeId);

    MCAPI PlayerActionPacket(::PlayerActionType action, ::BlockPos const& pos, ::ActorRuntimeID runtimeId);

    MCAPI PlayerActionPacket(::PlayerActionType action, ::BlockPos const& pos, int data, ::ActorRuntimeID runtimeId);

    MCAPI PlayerActionPacket(::PlayerActionType action, ::BlockPos const& pos, uchar face, ::ActorRuntimeID runtimeId);

    MCAPI PlayerActionPacket(
        ::PlayerActionType action,
        ::BlockPos const&  pos,
        ::BlockPos const&  resultPos,
        int                data,
        ::ActorRuntimeID   runtimeId
    );

    MCAPI bool getIsFromServerPlayerMovementSystem() const;

    MCAPI void setFromServerPlayerMovementSystem(bool value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::PlayerActionType action, ::ActorRuntimeID runtimeId);

    MCAPI void* $ctor(::PlayerActionType action, ::BlockPos const& pos, ::ActorRuntimeID runtimeId);

    MCAPI void* $ctor(::PlayerActionType action, ::BlockPos const& pos, int data, ::ActorRuntimeID runtimeId);

    MCAPI void* $ctor(::PlayerActionType action, ::BlockPos const& pos, uchar face, ::ActorRuntimeID runtimeId);

    MCAPI void* $ctor(
        ::PlayerActionType action,
        ::BlockPos const&  pos,
        ::BlockPos const&  resultPos,
        int                data,
        ::ActorRuntimeID   runtimeId
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
