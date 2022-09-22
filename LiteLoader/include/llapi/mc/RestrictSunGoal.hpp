/**
 * @file  RestrictSunGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RestrictSunGoal.
 *
 */
class RestrictSunGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESTRICTSUNGOAL
public:
    class RestrictSunGoal& operator=(class RestrictSunGoal const &) = delete;
    RestrictSunGoal(class RestrictSunGoal const &) = delete;
    RestrictSunGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RestrictSunGoal();
    /**
     * @hash   -1437533235
     * @vftbl  1
     * @symbol ?canUse@RestrictSunGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   181175814
     * @vftbl  4
     * @symbol ?start@RestrictSunGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1070480918
     * @vftbl  5
     * @symbol ?stop@RestrictSunGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   1865248355
     * @vftbl  7
     * @symbol ?appendDebugInfo@RestrictSunGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   675157050
     * @symbol ??0RestrictSunGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI RestrictSunGoal(class Mob &);

};