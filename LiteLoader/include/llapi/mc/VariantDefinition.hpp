/**
 * @file  VariantDefinition.hpp
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
 * @brief MC structure VariantDefinition.
 *
 */
struct VariantDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VARIANTDEFINITION
public:
    struct VariantDefinition& operator=(struct VariantDefinition const &) = delete;
    VariantDefinition(struct VariantDefinition const &) = delete;
    VariantDefinition() = delete;
#endif

public:
    /**
     * @symbol ?buildSchema@VariantDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UVariantDefinition@@@JsonUtil@@@std@@@Z
     * @hash   1819079054
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct VariantDefinition>> &);

};