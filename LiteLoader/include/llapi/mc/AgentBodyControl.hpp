/**
 * @file  AgentBodyControl.hpp
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
 * @brief MC class AgentBodyControl.
 *
 */
class AgentBodyControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTBODYCONTROL
public:
    class AgentBodyControl& operator=(class AgentBodyControl const &) = delete;
    AgentBodyControl(class AgentBodyControl const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1362113184
     */
    virtual ~AgentBodyControl();
    /**
     * @vftbl  1
     * @symbol ?clientTick@AgentBodyControl@@UEAAXAEAVMob@@@Z
     * @hash   1554044275
     */
    virtual void clientTick(class Mob &);
    /**
     * @symbol ??0AgentBodyControl@@QEAA@XZ
     * @hash   1939829586
     */
    MCAPI AgentBodyControl();

};