/**
 * @file  ParticleTypeMap.hpp
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
 * @brief MC class ParticleTypeMap.
 *
 */
class ParticleTypeMap {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARTICLETYPEMAP
public:
    class ParticleTypeMap& operator=(class ParticleTypeMap const &) = delete;
    ParticleTypeMap(class ParticleTypeMap const &) = delete;
    ParticleTypeMap() = delete;
#endif

public:
    /**
     * @symbol ?getParticleName@ParticleTypeMap@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ParticleType@@@Z
     * @hash   -1060571551
     */
    MCAPI static std::string const & getParticleName(enum class ParticleType);
    /**
     * @symbol ?getParticleTypeId@ParticleTypeMap@@SA?AW4ParticleType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1113657037
     */
    MCAPI static enum class ParticleType getParticleTypeId(std::string const &);

//private:

private:
    /**
     * @symbol ?map@ParticleTypeMap@@0V?$BidirectionalUnorderedMap@W4ParticleType@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@B
     * @hash   745043693
     */
    MCAPI static class BidirectionalUnorderedMap<enum class ParticleType, std::string> const map;

};