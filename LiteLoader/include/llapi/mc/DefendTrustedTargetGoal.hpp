/**
 * @file  DefendTrustedTargetGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NearestAttackableTargetGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DefendTrustedTargetGoal.
 *
 */
class DefendTrustedTargetGoal : public NearestAttackableTargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFENDTRUSTEDTARGETGOAL
public:
    class DefendTrustedTargetGoal& operator=(class DefendTrustedTargetGoal const &) = delete;
    DefendTrustedTargetGoal(class DefendTrustedTargetGoal const &) = delete;
    DefendTrustedTargetGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1592637357
     */
    virtual ~DefendTrustedTargetGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@DefendTrustedTargetGoal@@UEAA_NXZ
     * @hash   -758978421
     */
    virtual bool canUse();
    /**
     * @vftbl  4
     * @symbol ?start@DefendTrustedTargetGoal@@UEAAXXZ
     * @hash   -597075420
     */
    virtual void start();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@DefendTrustedTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1118885083
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @hash   -1402013944
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1358806423
     */
    virtual void __unk_vfn_9();
    /**
     * @symbol ??0DefendTrustedTargetGoal@@QEAA@AEAVMob@@AEBV?$vector@UMobDescriptor@@V?$allocator@UMobDescriptor@@@std@@@std@@MH_NHW4LevelSoundEvent@@AEBVActorDefinitionTrigger@@@Z
     * @hash   -1960178769
     */
    MCAPI DefendTrustedTargetGoal(class Mob &, std::vector<struct MobDescriptor> const &, float, int, bool, int, enum LevelSoundEvent, class ActorDefinitionTrigger const &);

//private:
    /**
     * @symbol ?_findTrustedTarget@DefendTrustedTargetGoal@@AEAA?AUActorUniqueID@@AEBVTrustComponent@@@Z
     * @hash   210124610
     */
    MCAPI struct ActorUniqueID _findTrustedTarget(class TrustComponent const &);

private:

};