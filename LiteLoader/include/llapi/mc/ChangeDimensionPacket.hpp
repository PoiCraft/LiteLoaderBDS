/**
 * @file  ChangeDimensionPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChangeDimensionPacket.
 *
 */
class ChangeDimensionPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    AutomaticID<Dimension, int> dimensionId;
    Vec3 position;
    bool respawn;

    inline std::string toDebugString() {
        return fmt::format("{}: pos: {}, dimensionId: {}, isRespawn: {}",
            __super::toDebugString(), position.toString(), (int)dimensionId, respawn);
    }
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHANGEDIMENSIONPACKET
public:
    class ChangeDimensionPacket& operator=(class ChangeDimensionPacket const &) = delete;
    ChangeDimensionPacket(class ChangeDimensionPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   705757068
     */
    virtual ~ChangeDimensionPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@ChangeDimensionPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -823154448
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@ChangeDimensionPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -313334883
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@ChangeDimensionPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -775616502
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@ChangeDimensionPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1962942362
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ChangeDimensionPacket@@QEAA@XZ
     * @hash   79934362
     */
    MCAPI ChangeDimensionPacket();
    /**
     * @symbol ??0ChangeDimensionPacket@@QEAA@V?$AutomaticID@VDimension@@H@@VVec3@@_N@Z
     * @hash   448790385
     */
    MCAPI ChangeDimensionPacket(class AutomaticID<class Dimension, int>, class Vec3, bool);

};