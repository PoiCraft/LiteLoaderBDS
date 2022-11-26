/**
 * @file  ActorSpawnRuleGroup.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorSpawnRuleGroup.
 *
 */
class ActorSpawnRuleGroup {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORSPAWNRULEGROUP
public:
    class ActorSpawnRuleGroup& operator=(class ActorSpawnRuleGroup const &) = delete;
    ActorSpawnRuleGroup(class ActorSpawnRuleGroup const &) = delete;
    ActorSpawnRuleGroup() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -998862389
     */
    virtual ~ActorSpawnRuleGroup();
    /**
     * @vftbl  1
     * @symbol ?getRootKey@ActorSpawnRuleGroup@@MEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1077096652
     */
    virtual std::string const & getRootKey();
    /**
     * @vftbl  2
     * @symbol ?getFileType@ActorSpawnRuleGroup@@MEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1410922433
     */
    virtual std::string const & getFileType();
    /**
     * @vftbl  3
     * @symbol ?processPopulationControl@ActorSpawnRuleGroup@@MEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVValue@Json@@@Z
     * @hash   -849151499
     */
    virtual bool processPopulationControl(std::string const &, class Json::Value &);
    /**
     * @vftbl  4
     * @symbol ?readResourceFiles@ActorSpawnRuleGroup@@MEAAXAEAVResourcePackManager@@AEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorSpawnRuleDefinition@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorSpawnRuleDefinition@@@std@@@2@@std@@@Z
     * @hash   475437433
     */
    virtual void readResourceFiles(class ResourcePackManager &, class std::unordered_map<std::string, struct ActorSpawnRuleDefinition, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, struct ActorSpawnRuleDefinition>>> &);
    /**
     * @symbol ??0ActorSpawnRuleGroup@@QEAA@AEAVResourcePackManager@@AEAVIWorldRegistriesProvider@@@Z
     * @hash   -513121211
     */
    MCAPI ActorSpawnRuleGroup(class ResourcePackManager &, class IWorldRegistriesProvider &);
    /**
     * @symbol ?getActorSpawnPool@ActorSpawnRuleGroup@@QEBAHAEBUActorDefinitionIdentifier@@@Z
     * @hash   -1912034485
     */
    MCAPI int getActorSpawnPool(struct ActorDefinitionIdentifier const &) const;
    /**
     * @symbol ?getDelayEnd@ActorSpawnRuleGroup@@QEBAHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1204229915
     */
    MCAPI int getDelayEnd(std::string const &) const;
    /**
     * @symbol ?offSetDelayByCurrentTick@ActorSpawnRuleGroup@@QEAAXAEBUTick@@@Z
     * @hash   849892374
     */
    MCAPI void offSetDelayByCurrentTick(struct Tick const &);
    /**
     * @symbol ?resetDelayEnd@ActorSpawnRuleGroup@@QEAAXVMobSpawnRules@@_KAEAVRandom@@@Z
     * @hash   -753052999
     */
    MCAPI void resetDelayEnd(class MobSpawnRules, unsigned __int64, class Random &);

};