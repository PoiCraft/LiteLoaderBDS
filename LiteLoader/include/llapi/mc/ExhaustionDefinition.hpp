/**
 * @file  ExhaustionDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ExhaustionDefinition.
 *
 */
class ExhaustionDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXHAUSTIONDEFINITION
public:
    class ExhaustionDefinition& operator=(class ExhaustionDefinition const &) = delete;
    ExhaustionDefinition(class ExhaustionDefinition const &) = delete;
    ExhaustionDefinition() = delete;
#endif

public:
    /**
     * @symbol ?initialize@ExhaustionDefinition@@QEAAXAEAVEntityContext@@AEAVExhaustionComponent@@@Z
     * @hash   -1537943945
     */
    MCAPI void initialize(class EntityContext &, class ExhaustionComponent &);
    /**
     * @symbol ?buildSchema@ExhaustionDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VExhaustionDefinition@@@JsonUtil@@@std@@@Z
     * @hash   -259524506
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ExhaustionDefinition>> &);

};