/**
 * @file  DamageOverTimeComponent.hpp
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
 * @brief MC class DamageOverTimeComponent.
 *
 */
class DamageOverTimeComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGEOVERTIMECOMPONENT
public:
    class DamageOverTimeComponent& operator=(class DamageOverTimeComponent const &) = delete;
    DamageOverTimeComponent(class DamageOverTimeComponent const &) = delete;
    DamageOverTimeComponent() = delete;
#endif

public:
    /**
     * @symbol ?addAdditionalSaveData@DamageOverTimeComponent@@QEBAXAEAVCompoundTag@@@Z
     * @hash   -1869295496
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol ?getDamageTime@DamageOverTimeComponent@@QEBAHXZ
     * @hash   -458481316
     */
    MCAPI int getDamageTime() const;
    /**
     * @symbol ?getDamageTimeInterval@DamageOverTimeComponent@@QEBAHXZ
     * @hash   -76192698
     */
    MCAPI int getDamageTimeInterval() const;
    /**
     * @symbol ?getHurtValue@DamageOverTimeComponent@@QEBAHXZ
     * @hash   1895729662
     */
    MCAPI int getHurtValue() const;
    /**
     * @symbol ?readAdditionalSaveData@DamageOverTimeComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -1553267382
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?setDamageTime@DamageOverTimeComponent@@QEAAXH@Z
     * @hash   -1230401526
     */
    MCAPI void setDamageTime(int);

};