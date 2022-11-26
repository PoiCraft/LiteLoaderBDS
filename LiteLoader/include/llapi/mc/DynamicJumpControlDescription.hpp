/**
 * @file  DynamicJumpControlDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DynamicJumpControlDescription.
 *
 */
class DynamicJumpControlDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DYNAMICJUMPCONTROLDESCRIPTION
public:
    class DynamicJumpControlDescription& operator=(class DynamicJumpControlDescription const &) = delete;
    DynamicJumpControlDescription(class DynamicJumpControlDescription const &) = delete;
    DynamicJumpControlDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?getJsonName@DynamicJumpControlDescription@@UEBAPEBDXZ
     * @hash   -997722616
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @hash   88814874
     */
    virtual ~DynamicJumpControlDescription();
    /**
     * @vftbl  2
     * @symbol ?deserializeData@DynamicJumpControlDescription@@UEAAXUDeserializeDataParams@@@Z
     * @hash   -600104501
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @vftbl  3
     * @symbol ?serializeData@DynamicJumpControlDescription@@UEBAXAEAVValue@Json@@@Z
     * @hash   -947969995
     */
    virtual void serializeData(class Json::Value &) const;

};