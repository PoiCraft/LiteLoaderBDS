/**
 * @file  HungerAttributeDelegate.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "AttributeInstanceDelegate.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HungerAttributeDelegate.
 *
 */
class HungerAttributeDelegate : public AttributeInstanceDelegate {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HUNGERATTRIBUTEDELEGATE
public:
    class HungerAttributeDelegate& operator=(class HungerAttributeDelegate const &) = delete;
    HungerAttributeDelegate(class HungerAttributeDelegate const &) = delete;
    HungerAttributeDelegate() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1172817180
     */
    virtual ~HungerAttributeDelegate();
    /**
     * @vftbl  1
     * @symbol ?tick@HungerAttributeDelegate@@UEAAXXZ
     * @hash   1612778662
     */
    virtual void tick();
    /**
     * @vftbl  2
     * @symbol ?notify@HungerAttributeDelegate@@UEAAX_J@Z
     * @hash   -1693938377
     */
    virtual void notify(__int64);
    /**
     * @symbol ??0HungerAttributeDelegate@@QEAA@AEBVAttributeInstance@@PEAVPlayer@@@Z
     * @hash   1276186249
     */
    MCAPI HungerAttributeDelegate(class AttributeInstance const &, class Player *);

};