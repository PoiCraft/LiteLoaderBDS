// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BehaviorComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEHAVIORCOMPONENT
public:
    class BehaviorComponent& operator=(class BehaviorComponent const &) = delete;
    BehaviorComponent(class BehaviorComponent const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEHAVIORCOMPONENT
public:
#endif
    MCAPI BehaviorComponent(class BehaviorComponent &&);
    MCAPI BehaviorComponent();
    MCAPI class BehaviorComponent & operator=(class BehaviorComponent &&);
    MCAPI ~BehaviorComponent();


};