/**
 * @file  VexRandomMoveGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VexRandomMoveGoal.
 *
 */
class VexRandomMoveGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEXRANDOMMOVEGOAL
public:
    class VexRandomMoveGoal& operator=(class VexRandomMoveGoal const &) = delete;
    VexRandomMoveGoal(class VexRandomMoveGoal const &) = delete;
    VexRandomMoveGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1138955326
     */
    virtual ~VexRandomMoveGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@VexRandomMoveGoal@@UEAA_NXZ
     * @hash   -725278816
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@VexRandomMoveGoal@@UEAA_NXZ
     * @hash   1207894398
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1314744573
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1313821052
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @hash   -1262602635
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?tick@VexRandomMoveGoal@@UEAAXXZ
     * @hash   48321140
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@VexRandomMoveGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1187117808
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0VexRandomMoveGoal@@QEAA@AEAVMob@@@Z
     * @hash   2063999869
     */
    MCAPI VexRandomMoveGoal(class Mob &);

};