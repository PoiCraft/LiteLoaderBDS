/**
 * @file  ExperienceRewardDefinition.hpp
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
 * @brief MC class ExperienceRewardDefinition.
 *
 */
class ExperienceRewardDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPERIENCEREWARDDEFINITION
public:
    class ExperienceRewardDefinition& operator=(class ExperienceRewardDefinition const &) = delete;
    ExperienceRewardDefinition(class ExperienceRewardDefinition const &) = delete;
    ExperienceRewardDefinition() = delete;
#endif

public:
    /**
     * @symbol ?addBredExpressionNode@ExperienceRewardDefinition@@QEAAXAEBVExpressionNode@@@Z
     * @hash   288536712
     */
    MCAPI void addBredExpressionNode(class ExpressionNode const &);
    /**
     * @symbol ?addDeathExpressionNode@ExperienceRewardDefinition@@QEAAXAEBVExpressionNode@@@Z
     * @hash   2085125156
     */
    MCAPI void addDeathExpressionNode(class ExpressionNode const &);
    /**
     * @symbol ?initialize@ExperienceRewardDefinition@@QEAAXAEAVEntityContext@@AEAVExperienceRewardComponent@@@Z
     * @hash   -807941875
     */
    MCAPI void initialize(class EntityContext &, class ExperienceRewardComponent &);
    /**
     * @symbol ?buildSchema@ExperienceRewardDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VExperienceRewardDefinition@@@JsonUtil@@@std@@@Z
     * @hash   -1675356234
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ExperienceRewardDefinition>> &);

};