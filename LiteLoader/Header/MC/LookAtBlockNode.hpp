// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LookAtBlockNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKATBLOCKNODE
public:
    class LookAtBlockNode& operator=(class LookAtBlockNode const &) = delete;
    LookAtBlockNode(class LookAtBlockNode const &) = delete;
#endif


public:
    /*0*/ virtual ~LookAtBlockNode();
    /*1*/ virtual enum BehaviorStatus tick(class Actor &);
    /*2*/ virtual void initializeFromDefinition(class Actor &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOKATBLOCKNODE
public:
#endif
    MCAPI LookAtBlockNode();


};