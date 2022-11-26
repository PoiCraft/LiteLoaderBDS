/**
 * @file  MoveToVillageGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveToVillageGoal.
 *
 */
class MoveToVillageGoal : public BaseMoveToGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOVILLAGEGOAL
public:
    class MoveToVillageGoal& operator=(class MoveToVillageGoal const &) = delete;
    MoveToVillageGoal(class MoveToVillageGoal const &) = delete;
    MoveToVillageGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -113017247
     */
    virtual ~MoveToVillageGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@MoveToVillageGoal@@UEAA_NXZ
     * @hash   1925652029
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@MoveToVillageGoal@@UEAA_NXZ
     * @hash   1755460731
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@MoveToVillageGoal@@UEAAXXZ
     * @hash   1953294758
     */
    virtual void start();
    /**
     * @vftbl  6
     * @symbol ?tick@MoveToVillageGoal@@UEAAXXZ
     * @hash   1979301521
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@MoveToVillageGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1293126893
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @hash   -1310126968
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1251451191
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  11
     * @symbol ?isValidTarget@MoveToVillageGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1364031823
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /**
     * @vftbl  14
     * @symbol ?_moveToBlock@MoveToVillageGoal@@UEAAXXZ
     * @hash   -1460418954
     */
    virtual void _moveToBlock();
    /**
     * @vftbl  17
     * @symbol ?_selectRandomPosInVillage@MoveToVillageGoal@@MEAA?AVBlockPos@@XZ
     * @hash   -267056480
     */
    virtual class BlockPos _selectRandomPosInVillage();
    /**
     * @symbol ??0MoveToVillageGoal@@QEAA@AEAVMob@@MMMH@Z
     * @hash   1497725356
     */
    MCAPI MoveToVillageGoal(class Mob &, float, float, float, int);

//protected:
    /**
     * @symbol ?_tryGetCurrentVillage@MoveToVillageGoal@@IEAA?AV?$shared_ptr@VVillage@@@std@@XZ
     * @hash   -1450507625
     */
    MCAPI class std::shared_ptr<class Village> _tryGetCurrentVillage();

protected:

};