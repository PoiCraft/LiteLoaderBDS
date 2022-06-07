// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptColor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTCOLOR
public:
    class ScriptColor& operator=(class ScriptColor const &) = delete;
    ScriptColor(class ScriptColor const &) = delete;
    ScriptColor() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTCOLOR
public:
#endif
    MCAPI ScriptColor(class mce::Color const &);
    MCAPI class mce::Color const & getColor() const;
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptColor> bind(struct Scripting::Version);
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptColor> fromRBGA(class Scripting::WeakLifetimeScope, float, float, float, float);


};