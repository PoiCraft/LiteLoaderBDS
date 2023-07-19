/**
 * @file  MultiplayerSettingsPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MultiplayerSettingsPacket.
 *
 */
class MultiplayerSettingsPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MULTIPLAYERSETTINGSPACKET
public:
    class MultiplayerSettingsPacket& operator=(class MultiplayerSettingsPacket const &) = delete;
    MultiplayerSettingsPacket(class MultiplayerSettingsPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@MultiplayerSettingsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@MultiplayerSettingsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@MultiplayerSettingsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@MultiplayerSettingsPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MULTIPLAYERSETTINGSPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MultiplayerSettingsPacket();
#endif
    /**
     * @symbol ??0MultiplayerSettingsPacket\@\@QEAA\@W4MultiplayerSettingsPacketType\@\@\@Z
     */
    MCAPI MultiplayerSettingsPacket(enum class MultiplayerSettingsPacketType);
    /**
     * @symbol ??0MultiplayerSettingsPacket\@\@QEAA\@XZ
     */
    MCAPI MultiplayerSettingsPacket();

};
