/**
 * @file  CommandBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandBlockActor.
 *
 */
class CommandBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDBLOCKACTOR
public:
    class CommandBlockActor& operator=(class CommandBlockActor const &) = delete;
    CommandBlockActor(class CommandBlockActor const &) = delete;
    CommandBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -757269151
     */
    virtual ~CommandBlockActor();
    /**
     * @vftbl  1
     * @symbol ?load@CommandBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -1825938870
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol ?save@CommandBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   -241395575
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  4
     * @symbol ?saveBlockData@CommandBlockActor@@UEBAXAEAVCompoundTag@@AEAVBlockSource@@@Z
     * @hash   -237103788
     */
    virtual void saveBlockData(class CompoundTag &, class BlockSource &) const;
    /**
     * @vftbl  5
     * @symbol ?loadBlockData@CommandBlockActor@@UEAAXAEBVCompoundTag@@AEAVBlockSource@@AEAVDataLoadHelper@@@Z
     * @hash   648542423
     */
    virtual void loadBlockData(class CompoundTag const &, class BlockSource &, class DataLoadHelper &);
    /**
     * @vftbl  6
     * @symbol ?onCustomTagLoadDone@CommandBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   2043684990
     */
    virtual void onCustomTagLoadDone(class BlockSource &);
    /**
     * @vftbl  8
     * @symbol ?onChanged@CommandBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   -1385326165
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @vftbl  11
     * @symbol ?onPlace@CommandBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   1075399128
     */
    virtual void onPlace(class BlockSource &);
    /**
     * @vftbl  12
     * @hash   -383143003
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  16
     * @hash   -379448919
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  21
     * @symbol ?getCustomName@CommandBlockActor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1341153449
     */
    virtual std::string const & getCustomName() const;
    /**
     * @vftbl  22
     * @symbol ?getFilteredCustomName@CommandBlockActor@@UEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVUIProfanityContext@@@Z
     * @hash   -471427225
     */
    virtual std::string const & getFilteredCustomName(class UIProfanityContext const &);
    /**
     * @vftbl  24
     * @symbol ?setCustomName@CommandBlockActor@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   2057471258
     */
    virtual void setCustomName(std::string const &);
    /**
     * @vftbl  28
     * @hash   -348972726
     */
    virtual void __unk_vfn_28();
    /**
     * @vftbl  29
     * @hash   -312330757
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -292013295
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -325884701
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -324961180
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -324037659
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @symbol ?_getUpdatePacket@CommandBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     * @hash   1464885788
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl  36
     * @symbol ?_onUpdatePacket@CommandBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     * @hash   -320002410
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @vftbl  37
     * @symbol ?_playerCanUpdate@CommandBlockActor@@MEBA_NAEBVPlayer@@@Z
     * @hash   -55171017
     */
    virtual bool _playerCanUpdate(class Player const &) const;
    /**
     * @symbol ??0CommandBlockActor@@QEAA@AEBVBlockPos@@W4CommandBlockMode@@@Z
     * @hash   -350182661
     */
    MCAPI CommandBlockActor(class BlockPos const &, enum CommandBlockMode);
    /**
     * @symbol ?getBaseCommandBlock@CommandBlockActor@@QEAAAEAVBaseCommandBlock@@XZ
     * @hash   1933211136
     */
    MCAPI class BaseCommandBlock & getBaseCommandBlock();
    /**
     * @symbol ?getCommand@CommandBlockActor@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   699769990
     */
    MCAPI std::string const & getCommand() const;
    /**
     * @symbol ?getCommandBlock@CommandBlockActor@@QEBAPEBVCommandBlock@@AEAVBlockSource@@@Z
     * @hash   -293971076
     */
    MCAPI class CommandBlock const * getCommandBlock(class BlockSource &) const;
    /**
     * @symbol ?getConditionalMode@CommandBlockActor@@QEBA_NAEAVBlockSource@@@Z
     * @hash   -363432019
     */
    MCAPI bool getConditionalMode(class BlockSource &) const;
    /**
     * @symbol ?getDelayOnActivation@CommandBlockActor@@QEBAHXZ
     * @hash   2142251770
     */
    MCAPI int getDelayOnActivation() const;
    /**
     * @symbol ?getMode@CommandBlockActor@@QEBA?AW4CommandBlockMode@@AEAVBlockSource@@@Z
     * @hash   -678386879
     */
    MCAPI enum CommandBlockMode getMode(class BlockSource &) const;
    /**
     * @symbol ?getPowered@CommandBlockActor@@QEBA_NXZ
     * @hash   616707210
     */
    MCAPI bool getPowered() const;
    /**
     * @symbol ?getSuccessCount@CommandBlockActor@@QEBAHXZ
     * @hash   1490329868
     */
    MCAPI int getSuccessCount() const;
    /**
     * @symbol ?getTickDelay@CommandBlockActor@@QEBAHXZ
     * @hash   1216223190
     */
    MCAPI int getTickDelay() const;
    /**
     * @symbol ?isAutomatic@CommandBlockActor@@QEBA_NXZ
     * @hash   1027051416
     */
    MCAPI bool isAutomatic() const;
    /**
     * @symbol ?markConditionMet@CommandBlockActor@@QEAA_NAEAVBlockSource@@@Z
     * @hash   -1400809873
     */
    MCAPI bool markConditionMet(class BlockSource &);
    /**
     * @symbol ?markForSaving@CommandBlockActor@@QEAAXAEAVBlockSource@@@Z
     * @hash   -1796436968
     */
    MCAPI void markForSaving(class BlockSource &);
    /**
     * @symbol ?markForSaving@CommandBlockActor@@QEAAXAEAVBlockSource@@H_N@Z
     * @hash   784037632
     */
    MCAPI void markForSaving(class BlockSource &, int, bool);
    /**
     * @symbol ?performCommand@CommandBlockActor@@QEAA_NAEAVBlockSource@@@Z
     * @hash   963579263
     */
    MCAPI bool performCommand(class BlockSource &);
    /**
     * @symbol ?setPowered@CommandBlockActor@@QEAAX_N@Z
     * @hash   1432894162
     */
    MCAPI void setPowered(bool);
    /**
     * @symbol ?setSuccessCount@CommandBlockActor@@QEAAXH@Z
     * @hash   -1305498742
     */
    MCAPI void setSuccessCount(int);
    /**
     * @symbol ?updateBlock@CommandBlockActor@@QEAAXAEAVBlockSource@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1W4CommandBlockMode@@_N33H3@Z
     * @hash   -1711145504
     */
    MCAPI void updateBlock(class BlockSource &, std::string const &, std::string const &, enum CommandBlockMode, bool, bool, bool, int, bool);
    /**
     * @symbol ?wasConditionMet@CommandBlockActor@@QEAA_NXZ
     * @hash   -284382280
     */
    MCAPI bool wasConditionMet();

//private:
    /**
     * @symbol ?_setAutomatic@CommandBlockActor@@AEAAXAEAVBlockSource@@_NW4CommandBlockMode@@@Z
     * @hash   1613947286
     */
    MCAPI void _setAutomatic(class BlockSource &, bool, enum CommandBlockMode);

private:

};