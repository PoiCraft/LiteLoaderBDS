/**
 * @file  LecternUpdatePacket.hpp
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
 * @brief MC class LecternUpdatePacket.
 *
 */
class LecternUpdatePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LECTERNUPDATEPACKET
public:
    class LecternUpdatePacket& operator=(class LecternUpdatePacket const &) = delete;
    LecternUpdatePacket(class LecternUpdatePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~LecternUpdatePacket();
    /**
     * @hash   -1006867258
     * @vftbl  1
     * @symbol ?getId@LecternUpdatePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   1921705843
     * @vftbl  2
     * @symbol ?getName@LecternUpdatePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1679597492
     * @vftbl  3
     * @symbol ?write@LecternUpdatePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1552019908
     * @vftbl  6
     * @symbol ?_read@LecternUpdatePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -240150380
     * @symbol ??0LecternUpdatePacket@@QEAA@XZ
     */
    MCAPI LecternUpdatePacket();

};