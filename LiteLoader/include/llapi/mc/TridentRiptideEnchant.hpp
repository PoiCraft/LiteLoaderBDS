/**
 * @file  TridentRiptideEnchant.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TridentRiptideEnchant.
 *
 */
class TridentRiptideEnchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIDENTRIPTIDEENCHANT
public:
    class TridentRiptideEnchant& operator=(class TridentRiptideEnchant const &) = delete;
    TridentRiptideEnchant(class TridentRiptideEnchant const &) = delete;
    TridentRiptideEnchant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -2082629974
     */
    virtual ~TridentRiptideEnchant();
    /**
     * @vftbl  1
     * @symbol ?isCompatibleWith@TridentRiptideEnchant@@UEBA_NW4Type@Enchant@@@Z
     * @hash   611974461
     */
    virtual bool isCompatibleWith(enum class Enchant::Type) const;
    /**
     * @vftbl  2
     * @symbol ?getMinCost@TridentRiptideEnchant@@UEBAHH@Z
     * @hash   -56477659
     */
    virtual int getMinCost(int) const;
    /**
     * @vftbl  3
     * @symbol ?getMaxCost@TridentRiptideEnchant@@UEBAHH@Z
     * @hash   1492637827
     */
    virtual int getMaxCost(int) const;
    /**
     * @vftbl  4
     * @hash   -1049815132
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol ?getMaxLevel@TridentRiptideEnchant@@UEBAHXZ
     * @hash   -1580010107
     */
    virtual int getMaxLevel() const;
    /**
     * @symbol ??0TridentRiptideEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_span@$$CBD$0?0@gsl@@2H_NH@Z
     * @hash   -726368930
     */
    MCAPI TridentRiptideEnchant(enum class Enchant::Type, enum class Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, bool, int);

};