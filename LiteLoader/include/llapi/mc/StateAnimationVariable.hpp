/**
 * @file  StateAnimationVariable.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class StateAnimationVariable.
 *
 */
class StateAnimationVariable {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STATEANIMATIONVARIABLE
public:
    class StateAnimationVariable& operator=(class StateAnimationVariable const &) = delete;
    StateAnimationVariable(class StateAnimationVariable const &) = delete;
    StateAnimationVariable() = delete;
#endif

public:
    /**
     * @symbol ?addKeyFrame@StateAnimationVariable@@QEAAXMM@Z
     * @hash   238655387
     */
    MCAPI void addKeyFrame(float, float);

};