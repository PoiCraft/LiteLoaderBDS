/**
 * @file  Ability.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Ability.
 *
 */
class Ability {

#define AFTER_EXTRA
// Add Member There
public:
enum class Options;
enum class Type;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ABILITY
public:
    class Ability& operator=(class Ability const &) = delete;
    Ability(class Ability const &) = delete;
#endif

public:
    /**
     * @symbol ??0Ability@@QEAA@_NW4Options@0@@Z
     * @hash   1076921364
     */
    MCAPI Ability(bool, enum class Ability::Options);
    /**
     * @symbol ??0Ability@@QEAA@XZ
     * @hash   -1083664682
     */
    MCAPI Ability();
    /**
     * @symbol ?getBool@Ability@@QEBA_NXZ
     * @hash   1929940570
     */
    MCAPI bool getBool() const;
    /**
     * @symbol ?getFloat@Ability@@QEBAMXZ
     * @hash   374480832
     */
    MCAPI float getFloat() const;
    /**
     * @symbol ?getType@Ability@@QEBA?AW4Type@1@XZ
     * @hash   -753918591
     */
    MCAPI enum class Ability::Type getType() const;
    /**
     * @symbol ?hasOption@Ability@@QEBA_NW4Options@1@@Z
     * @hash   -195617702
     */
    MCAPI bool hasOption(enum class Ability::Options) const;
    /**
     * @symbol ?isSet@Ability@@QEBA_NXZ
     * @hash   -1026788246
     */
    MCAPI bool isSet() const;
    /**
     * @symbol ??9Ability@@QEBA_NAEBV0@@Z
     * @hash   -1981207630
     */
    MCAPI bool operator!=(class Ability const &) const;
    /**
     * @symbol ?setBool@Ability@@QEAAX_N@Z
     * @hash   -1140443166
     */
    MCAPI void setBool(bool);
    /**
     * @symbol ?setFloat@Ability@@QEAAXM@Z
     * @hash   1037378354
     */
    MCAPI void setFloat(float);
    /**
     * @symbol ?unSet@Ability@@QEAAXXZ
     * @hash   738264967
     */
    MCAPI void unSet();

};