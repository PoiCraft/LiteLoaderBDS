#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/ItemStackResponseInfo.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class ItemStackResponsePacket : public ::Packet {
public:
    std::vector<ItemStackResponseInfo> mResponses; // this+0x30

    // prevent constructor by default
    ItemStackResponsePacket& operator=(ItemStackResponsePacket const&);
    ItemStackResponsePacket(ItemStackResponsePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackResponsePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI ItemStackResponsePacket();

    MCAPI explicit ItemStackResponsePacket(std::vector<struct ItemStackResponseInfo>&& responses);

    MCAPI std::vector<struct ItemStackResponseInfo> const& getResponses() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
