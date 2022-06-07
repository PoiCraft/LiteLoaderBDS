// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptContainer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptInventoryComponentContainer : public ScriptContainer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTINVENTORYCOMPONENTCONTAINER
public:
    ScriptInventoryComponentContainer() = delete;
#endif


public:
    /*0*/ virtual ~ScriptInventoryComponentContainer();
    /*5*/ virtual class Scripting::Result<int> getEmptySlotsCount() const;
    /*11*/ virtual class Container * _tryGetContainer() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTINVENTORYCOMPONENTCONTAINER
public:
#endif
    MCAPI ScriptInventoryComponentContainer(class ScriptInventoryComponentContainer const &);
    MCAPI ScriptInventoryComponentContainer(class WeakEntityRef const &, class Scripting::WeakLifetimeScope const &);
    MCAPI class ScriptInventoryComponentContainer & operator=(class ScriptInventoryComponentContainer const &);
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptInventoryComponentContainer> bind(struct Scripting::Version);


};