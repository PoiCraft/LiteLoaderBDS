/**
 * @file  InverterDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BehaviorDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InverterDefinition.
 *
 */
class InverterDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVERTERDEFINITION
public:
    class InverterDefinition& operator=(class InverterDefinition const &) = delete;
    InverterDefinition(class InverterDefinition const &) = delete;
    InverterDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~InverterDefinition();
    /**
     * @hash   1419631470
     * @vftbl  1
     * @symbol ?load@InverterDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);

};