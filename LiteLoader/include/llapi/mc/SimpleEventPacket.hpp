/**
 * @file  SimpleEventPacket.hpp
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
 * @brief MC class SimpleEventPacket.
 *
 */
class SimpleEventPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
enum Subtype;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMPLEEVENTPACKET
public:
    class SimpleEventPacket& operator=(class SimpleEventPacket const &) = delete;
    SimpleEventPacket(class SimpleEventPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   849963646
     */
    virtual ~SimpleEventPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@SimpleEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   1571348702
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@SimpleEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   2058083211
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@SimpleEventPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   785196124
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@SimpleEventPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   2088976652
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0SimpleEventPacket@@QEAA@XZ
     * @hash   -1937596388
     */
    MCAPI SimpleEventPacket();
    /**
     * @symbol ??0SimpleEventPacket@@QEAA@AEBW4Subtype@0@@Z
     * @hash   728695503
     */
    MCAPI SimpleEventPacket(enum SimpleEventPacket::Subtype const &);
    /**
     * @symbol ?getSubtype@SimpleEventPacket@@QEBAAEBW4Subtype@1@XZ
     * @hash   151323023
     */
    MCAPI enum SimpleEventPacket::Subtype const & getSubtype() const;

};