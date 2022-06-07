// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SlimeFloatDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMEFLOATDEFINITION
public:
    class SlimeFloatDefinition& operator=(class SlimeFloatDefinition const &) = delete;
    SlimeFloatDefinition(class SlimeFloatDefinition const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SLIMEFLOATDEFINITION
public:
#endif
    MCAPI SlimeFloatDefinition();
    MCAPI void initialize(class EntityContext &, class SlimeFloatGoal &);
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SlimeFloatDefinition>> &);


};