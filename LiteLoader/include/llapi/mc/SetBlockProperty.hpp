/**
 * @file  SetBlockProperty.hpp
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
 * @brief MC class SetBlockProperty.
 *
 */
class SetBlockProperty {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETBLOCKPROPERTY
public:
    class SetBlockProperty& operator=(class SetBlockProperty const &) = delete;
    SetBlockProperty(class SetBlockProperty const &) = delete;
    SetBlockProperty() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -393696374
     */
    virtual ~SetBlockProperty();
    /**
     * @vftbl  1
     * @symbol ?getName@SetBlockProperty@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1314086649
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  2
     * @symbol ?executeAction@SetBlockProperty@@UEBAXAEAVRenderParams@@@Z
     * @hash   900709317
     */
    virtual void executeAction(class RenderParams &) const;
    /**
     * @vftbl  3
     * @symbol ?buildSchema@SetBlockProperty@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VEventResponse@@$$V@@@Z
     * @hash   1481743479
     */
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>> &, class Factory<class EventResponse> const &) const;
    /**
     * @symbol ?NameID@SetBlockProperty@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1559094079
     */
    MCAPI static std::string const NameID;

};