/**
 * @file  AttributeBuff.hpp
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
 * @brief MC class AttributeBuff.
 *
 */
class AttributeBuff {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTRIBUTEBUFF
public:
    class AttributeBuff& operator=(class AttributeBuff const &) = delete;
    AttributeBuff() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   51159645
     */
    virtual ~AttributeBuff();
    /**
     * @vftbl  1
     * @symbol ?isInstantaneous@InstantaneousAttributeBuff@@UEBA_NXZ
     * @hash   -1884803248
     */
    virtual bool isInstantaneous() const = 0;
    /**
     * @vftbl  2
     * @symbol ?isSerializable@InstantaneousAttributeBuff@@UEBA_NXZ
     * @hash   -1300054483
     */
    virtual bool isSerializable() const = 0;
    /**
     * @vftbl  3
     * @symbol ?setDurationAmplifier@AttributeBuff@@UEAAXV?$shared_ptr@VAmplifier@@@std@@@Z
     * @hash   -614612802
     */
    virtual void setDurationAmplifier(class std::shared_ptr<class Amplifier>);
    /**
     * @symbol ??0AttributeBuff@@QEAA@AEBV0@@Z
     * @hash   303984033
     */
    MCAPI AttributeBuff(class AttributeBuff const &);
    /**
     * @symbol ?getAmount@AttributeBuff@@QEBAMXZ
     * @hash   326668962
     */
    MCAPI float getAmount() const;
    /**
     * @symbol ?getCause@AttributeBuff@@QEBA?AW4ActorDamageCause@@XZ
     * @hash   1726508992
     */
    MCAPI enum class ActorDamageCause getCause() const;
    /**
     * @symbol ?getId@AttributeBuff@@QEBA_KXZ
     * @hash   1519366827
     */
    MCAPI unsigned __int64 getId() const;
    /**
     * @symbol ?getOperand@AttributeBuff@@QEBAHXZ
     * @hash   -37844452
     */
    MCAPI int getOperand() const;
    /**
     * @symbol ?getSource@AttributeBuff@@QEBAAEBVActorDamageSource@@XZ
     * @hash   -456745210
     */
    MCAPI class ActorDamageSource const & getSource() const;
    /**
     * @symbol ?getType@AttributeBuff@@QEBA?AW4AttributeBuffType@@XZ
     * @hash   -257808264
     */
    MCAPI enum class AttributeBuffType getType() const;
    /**
     * @symbol ??8AttributeBuff@@QEBA_NAEBV0@@Z
     * @hash   -1097235352
     */
    MCAPI bool operator==(class AttributeBuff const &) const;
    /**
     * @symbol ?setAmplificationAmount@AttributeBuff@@QEAAXHM@Z
     * @hash   -1702531375
     */
    MCAPI void setAmplificationAmount(int, float);
    /**
     * @symbol ?setId@AttributeBuff@@QEAAX_K@Z
     * @hash   556203191
     */
    MCAPI void setId(unsigned __int64);
    /**
     * @symbol ?setOperand@AttributeBuff@@QEAAXH@Z
     * @hash   1994482234
     */
    MCAPI void setOperand(int);
    /**
     * @symbol ?setSource@AttributeBuff@@QEAAXPEAVActor@@@Z
     * @hash   -919879427
     */
    MCAPI void setSource(class Actor *);
    /**
     * @symbol ?setValueAmplifier@AttributeBuff@@QEAAXV?$shared_ptr@VAmplifier@@@std@@@Z
     * @hash   597944481
     */
    MCAPI void setValueAmplifier(class std::shared_ptr<class Amplifier>);
    /**
     * @symbol ?buffTypeToDamageCause@AttributeBuff@@SA?AW4ActorDamageCause@@W4AttributeBuffType@@@Z
     * @hash   1706825173
     */
    MCAPI static enum class ActorDamageCause buffTypeToDamageCause(enum class AttributeBuffType);

//protected:
    /**
     * @symbol ??0AttributeBuff@@IEAA@MHW4AttributeBuffType@@@Z
     * @hash   1088297345
     */
    MCAPI AttributeBuff(float, int, enum class AttributeBuffType);
    /**
     * @symbol ??0AttributeBuff@@IEAA@MHAEBVActorDamageSource@@W4AttributeBuffType@@@Z
     * @hash   -1273171881
     */
    MCAPI AttributeBuff(float, int, class ActorDamageSource const &, enum class AttributeBuffType);

protected:

};