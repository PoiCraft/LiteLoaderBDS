/**
 * @file  WalkAnimationSpeedDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure WalkAnimationSpeedDefinition.
 *
 */
struct WalkAnimationSpeedDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WALKANIMATIONSPEEDDEFINITION
public:
    struct WalkAnimationSpeedDefinition& operator=(struct WalkAnimationSpeedDefinition const &) = delete;
    WalkAnimationSpeedDefinition(struct WalkAnimationSpeedDefinition const &) = delete;
    WalkAnimationSpeedDefinition() = delete;
#endif

public:
    /**
     * @symbol ?buildSchema@WalkAnimationSpeedDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UWalkAnimationSpeedDefinition@@@JsonUtil@@@std@@@Z
     * @hash   166677930
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct WalkAnimationSpeedDefinition>> &);

};