/**
 * @file  WaterMovementDescription.hpp
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
 * @brief MC class WaterMovementDescription.
 *
 */
class WaterMovementDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERMOVEMENTDESCRIPTION
public:
    class WaterMovementDescription& operator=(class WaterMovementDescription const &) = delete;
    WaterMovementDescription(class WaterMovementDescription const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?getJsonName@WaterMovementDescription@@UEBAPEBDXZ
     * @hash   1849806574
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @hash   -2008820864
     */
    virtual ~WaterMovementDescription();
    /**
     * @vftbl  2
     * @symbol ?deserializeData@WaterMovementDescription@@UEAAXUDeserializeDataParams@@@Z
     * @hash   -933755403
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @vftbl  3
     * @symbol ?serializeData@WaterMovementDescription@@UEBAXAEAVValue@Json@@@Z
     * @hash   -1504914049
     */
    virtual void serializeData(class Json::Value &) const;
    /**
     * @symbol ??0WaterMovementDescription@@QEAA@XZ
     * @hash   -1778750830
     */
    MCAPI WaterMovementDescription();

};