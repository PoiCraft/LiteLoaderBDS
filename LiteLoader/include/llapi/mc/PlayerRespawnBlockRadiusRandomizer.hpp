/**
 * @file  PlayerRespawnBlockRadiusRandomizer.hpp
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
 * @brief MC class PlayerRespawnBlockRadiusRandomizer.
 *
 */
class PlayerRespawnBlockRadiusRandomizer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERRESPAWNBLOCKRADIUSRANDOMIZER
public:
    class PlayerRespawnBlockRadiusRandomizer& operator=(class PlayerRespawnBlockRadiusRandomizer const &) = delete;
    PlayerRespawnBlockRadiusRandomizer(class PlayerRespawnBlockRadiusRandomizer const &) = delete;
    PlayerRespawnBlockRadiusRandomizer() = delete;
#endif

public:
    /**
     * @symbol ?getNextPosition@PlayerRespawnBlockRadiusRandomizer@@QEAA_NAEAVVec3@@_N@Z
     * @hash   1283787146
     */
    MCAPI bool getNextPosition(class Vec3 &, bool);
    /**
     * @symbol ?init@PlayerRespawnBlockRadiusRandomizer@@QEAAXIAEAVRandom@@@Z
     * @hash   368369387
     */
    MCAPI void init(unsigned int, class Random &);

};