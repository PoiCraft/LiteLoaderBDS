/**
 * @file  OwnerHurtByTargetGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TargetGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OwnerHurtByTargetGoal.
 *
 */
class OwnerHurtByTargetGoal : public TargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OWNERHURTBYTARGETGOAL
public:
    class OwnerHurtByTargetGoal& operator=(class OwnerHurtByTargetGoal const &) = delete;
    OwnerHurtByTargetGoal(class OwnerHurtByTargetGoal const &) = delete;
    OwnerHurtByTargetGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1442298165
     */
    virtual ~OwnerHurtByTargetGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@OwnerHurtByTargetGoal@@UEAA_NXZ
     * @hash   1844669123
     */
    virtual bool canUse();
    /**
     * @vftbl  4
     * @symbol ?start@OwnerHurtByTargetGoal@@UEAAXXZ
     * @hash   -336241972
     */
    virtual void start();
    /**
     * @vftbl  8
     * @hash   -1310126968
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1258908551
     */
    virtual void __unk_vfn_9();
    /**
     * @symbol ??0OwnerHurtByTargetGoal@@QEAA@AEAVMob@@AEBV?$vector@UMobDescriptor@@V?$allocator@UMobDescriptor@@@std@@@std@@@Z
     * @hash   -1145281843
     */
    MCAPI OwnerHurtByTargetGoal(class Mob &, std::vector<struct MobDescriptor> const &);

};