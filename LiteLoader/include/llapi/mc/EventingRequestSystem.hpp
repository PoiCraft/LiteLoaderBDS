/**
 * @file  EventingRequestSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class EventingRequestSystem.
 *
 */
class EventingRequestSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EVENTINGREQUESTSYSTEM
public:
    class EventingRequestSystem& operator=(class EventingRequestSystem const &) = delete;
    EventingRequestSystem(class EventingRequestSystem const &) = delete;
    EventingRequestSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@EventingRequestSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_eventingRequestSystem\@EventingRequestSystem\@\@CAXAEBVStrictEntityContext\@\@AEAUEventingRequestQueueComponent\@\@AEAVLevelComponent\@\@\@Z
     */
    MCAPI static void _eventingRequestSystem(class StrictEntityContext const &, struct EventingRequestQueueComponent &, class LevelComponent &);
    /**
     * @symbol ?_tickEventingRequestSystem\@EventingRequestSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@UEventingRequestQueueComponent\@\@VLevelComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickEventingRequestSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct EventingRequestQueueComponent, class LevelComponent>);

private:

};
