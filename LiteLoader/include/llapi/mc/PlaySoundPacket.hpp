/**
 * @file  PlaySoundPacket.hpp
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
 * @brief MC class PlaySoundPacket.
 *
 */
class PlaySoundPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
    char filler[56];
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYSOUNDPACKET
public:
    class PlaySoundPacket& operator=(class PlaySoundPacket const &) = delete;
    PlaySoundPacket(class PlaySoundPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   132072817
     */
    virtual ~PlaySoundPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@PlaySoundPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -1716192901
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@PlaySoundPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   593990696
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@PlaySoundPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -964111809
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@PlaySoundPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1237337807
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0PlaySoundPacket@@QEAA@XZ
     * @hash   532850623
     */
    MCAPI PlaySoundPacket();
    /**
     * @symbol ??0PlaySoundPacket@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z
     * @hash   884207123
     */
    MCAPI PlaySoundPacket(std::string, class Vec3 const &, float, float);

};