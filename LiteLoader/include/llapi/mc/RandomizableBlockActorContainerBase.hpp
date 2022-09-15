/**
 * @file  RandomizableBlockActorContainerBase.hpp
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
 * @brief MC class RandomizableBlockActorContainerBase.
 *
 */
class RandomizableBlockActorContainerBase : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMIZABLEBLOCKACTORCONTAINERBASE
public:
    class RandomizableBlockActorContainerBase& operator=(class RandomizableBlockActorContainerBase const &) = delete;
    RandomizableBlockActorContainerBase(class RandomizableBlockActorContainerBase const &) = delete;
    RandomizableBlockActorContainerBase() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -924500150
     */
    virtual ~RandomizableBlockActorContainerBase();
    /**
     * @vftbl  1
     * @symbol ?load@RandomizableBlockActorContainerBase@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -1490206045
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol ?save@RandomizableBlockActorContainerBase@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   1326661010
     */
    virtual bool save(class CompoundTag &) const;
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
     * @symbol ?setLootTable@RandomizableBlockActorContainerBase@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -1220266867
     */
    MCAPI void setLootTable(std::string const &, int);
    /**
     * @symbol ?unPackLootTable@RandomizableBlockActorContainerBase@@QEAAXAEAVLevel@@AEAVContainer@@V?$AutomaticID@VDimension@@H@@PEAVActor@@@Z
     * @hash   -999054018
     */
    MCAPI void unPackLootTable(class Level &, class Container &, class AutomaticID<class Dimension, int>, class Actor *);

};