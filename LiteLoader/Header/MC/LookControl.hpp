// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LookControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKCONTROL
public:
    class LookControl& operator=(class LookControl const &) = delete;
    LookControl(class LookControl const &) = delete;
#endif


public:
    /*0*/ virtual ~LookControl();
    /*1*/ virtual void initializeInternal(class Mob &);
    /*2*/ virtual void tick(class Mob &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOKCONTROL
public:
#endif
    MCAPI LookControl();


};