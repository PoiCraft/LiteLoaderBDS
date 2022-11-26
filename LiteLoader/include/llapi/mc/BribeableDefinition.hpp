/**
 * @file  BribeableDefinition.hpp
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
 * @brief MC class BribeableDefinition.
 *
 */
class BribeableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BRIBEABLEDEFINITION
public:
    class BribeableDefinition& operator=(class BribeableDefinition const &) = delete;
    BribeableDefinition(class BribeableDefinition const &) = delete;
    BribeableDefinition() = delete;
#endif

public:
    /**
     * @symbol ?addBribeItem@BribeableDefinition@@QEAAXAEBVItemDescriptor@@@Z
     * @hash   -477465466
     */
    MCAPI void addBribeItem(class ItemDescriptor const &);
    /**
     * @symbol ?initialize@BribeableDefinition@@QEAAXAEAVEntityContext@@AEAVBribeableComponent@@@Z
     * @hash   -771491211
     */
    MCAPI void initialize(class EntityContext &, class BribeableComponent &);
    /**
     * @symbol ?buildSchema@BribeableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VBribeableDefinition@@@JsonUtil@@@std@@@Z
     * @hash   -925752796
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BribeableDefinition>> &);

};