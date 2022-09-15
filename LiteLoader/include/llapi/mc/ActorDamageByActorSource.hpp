/**
 * @file  ActorDamageByActorSource.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorDamageSource.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorDamageByActorSource.
 *
 */
class ActorDamageByActorSource : public ActorDamageSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDAMAGEBYACTORSOURCE
public:
    class ActorDamageByActorSource& operator=(class ActorDamageByActorSource const &) = delete;
    ActorDamageByActorSource(class ActorDamageByActorSource const &) = delete;
    ActorDamageByActorSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   981055743
     */
    virtual ~ActorDamageByActorSource();
    /**
     * @vftbl  1
     * @symbol ?isEntitySource@ActorDamageByActorSource@@UEBA_NXZ
     * @hash   243536811
     */
    virtual bool isEntitySource() const;
    /**
     * @vftbl  10
     * @symbol ?getDeathMessage@ActorDamageByActorSource@@UEBA?AU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@PEAVActor@@@Z
     * @hash   -1217945039
     */
    virtual struct std::pair<std::string, std::vector<std::string>> getDeathMessage(std::string, class Actor *) const;
    /**
     * @vftbl  11
     * @symbol ?getIsCreative@ActorDamageByActorSource@@UEBA_NXZ
     * @hash   -967093006
     */
    virtual bool getIsCreative() const;
    /**
     * @vftbl  12
     * @symbol ?getIsWorldBuilder@ActorDamageByActorSource@@UEBA_NXZ
     * @hash   -2069328308
     */
    virtual bool getIsWorldBuilder() const;
    /**
     * @vftbl  13
     * @symbol ?getEntityUniqueID@ActorDamageByActorSource@@UEBA?AUActorUniqueID@@XZ
     * @hash   188210201
     */
    virtual struct ActorUniqueID getEntityUniqueID() const;
    /**
     * @vftbl  14
     * @symbol ?getEntityType@ActorDamageByActorSource@@UEBA?AW4ActorType@@XZ
     * @hash   614068517
     */
    virtual enum ActorType getEntityType() const;
    /**
     * @vftbl  15
     * @symbol ?getEntityCategories@ActorDamageByActorSource@@UEBA?AW4ActorCategory@@XZ
     * @hash   -369846877
     */
    virtual enum ActorCategory getEntityCategories() const;
    /**
     * @vftbl  18
     * @symbol ?getDamagingEntityUniqueID@ActorDamageByActorSource@@UEBA?AUActorUniqueID@@XZ
     * @hash   -1823504859
     */
    virtual struct ActorUniqueID getDamagingEntityUniqueID() const;
    /**
     * @vftbl  19
     * @symbol ?getDamagingEntityType@ActorDamageByActorSource@@UEBA?AW4ActorType@@XZ
     * @hash   -1791781839
     */
    virtual enum ActorType getDamagingEntityType() const;
    /**
     * @vftbl  21
     * @symbol ?clone@ActorDamageByActorSource@@UEBA?AV?$unique_ptr@VActorDamageSource@@U?$default_delete@VActorDamageSource@@@std@@@std@@XZ
     * @hash   937217409
     */
    virtual std::unique_ptr<class ActorDamageSource> clone() const;
    /**
     * @symbol ??0ActorDamageByActorSource@@QEAA@AEAVActor@@W4ActorDamageCause@@@Z
     * @hash   775768521
     */
    MCAPI ActorDamageByActorSource(class Actor &, enum ActorDamageCause);

};