/**
 * @file  HeartbeatServerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ITickingSystem.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class HeartbeatServerSystem.
 *
 */
class HeartbeatServerSystem : public ITickingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HEARTBEATSERVERSYSTEM
public:
    class HeartbeatServerSystem& operator=(class HeartbeatServerSystem const &) = delete;
    HeartbeatServerSystem(class HeartbeatServerSystem const &) = delete;
    HeartbeatServerSystem() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?tick\@HeartbeatServerSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);

};
