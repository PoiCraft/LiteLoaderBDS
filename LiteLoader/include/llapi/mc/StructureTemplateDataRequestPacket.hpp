/**
 * @file  StructureTemplateDataRequestPacket.hpp
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
 * @brief MC class StructureTemplateDataRequestPacket.
 *
 */
class StructureTemplateDataRequestPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETEMPLATEDATAREQUESTPACKET
public:
    class StructureTemplateDataRequestPacket& operator=(class StructureTemplateDataRequestPacket const &) = delete;
    StructureTemplateDataRequestPacket(class StructureTemplateDataRequestPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   14634154
     */
    virtual ~StructureTemplateDataRequestPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@StructureTemplateDataRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -530150242
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@StructureTemplateDataRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1792353461
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@StructureTemplateDataRequestPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -1791984708
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@StructureTemplateDataRequestPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -150735348
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0StructureTemplateDataRequestPacket@@QEAA@XZ
     * @hash   -1795350484
     */
    MCAPI StructureTemplateDataRequestPacket();

};