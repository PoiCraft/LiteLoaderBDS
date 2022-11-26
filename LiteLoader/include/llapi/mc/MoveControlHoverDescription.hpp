/**
 * @file  MoveControlHoverDescription.hpp
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
 * @brief MC class MoveControlHoverDescription.
 *
 */
class MoveControlHoverDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVECONTROLHOVERDESCRIPTION
public:
    class MoveControlHoverDescription& operator=(class MoveControlHoverDescription const &) = delete;
    MoveControlHoverDescription(class MoveControlHoverDescription const &) = delete;
    MoveControlHoverDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?getJsonName@MoveControlHoverDescription@@UEBAPEBDXZ
     * @hash   2070847064
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @hash   -258937638
     */
    virtual ~MoveControlHoverDescription();
    /**
     * @vftbl  2
     * @symbol ?deserializeData@MoveControlDescription@@UEAAXUDeserializeDataParams@@@Z
     * @hash   78496939
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @vftbl  3
     * @symbol ?serializeData@MoveControlDescription@@UEBAXAEAVValue@Json@@@Z
     * @hash   -1020321995
     */
    virtual void serializeData(class Json::Value &) const;

};