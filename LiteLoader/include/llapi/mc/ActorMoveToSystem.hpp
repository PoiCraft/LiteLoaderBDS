/**
 * @file  ActorMoveToSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorMoveToSystem.
 *
 */
class ActorMoveToSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORMOVETOSYSTEM
public:
    class ActorMoveToSystem& operator=(class ActorMoveToSystem const &) = delete;
    ActorMoveToSystem(class ActorMoveToSystem const &) = delete;
    ActorMoveToSystem() = delete;
#endif

public:
    /**
     * @symbol ?createActorMoveToSystem@ActorMoveToSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   1228329132
     */
    MCAPI static struct TickingSystemWithInfo createActorMoveToSystem();

};