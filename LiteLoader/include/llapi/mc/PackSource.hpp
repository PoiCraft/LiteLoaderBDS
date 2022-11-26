/**
 * @file  PackSource.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PackSource.
 *
 */
class PackSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKSOURCE
public:
    class PackSource& operator=(class PackSource const &) = delete;
    PackSource(class PackSource const &) = delete;
    PackSource() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKSOURCE
    /**
     * @symbol ?getPackOrigin@PackSource@@UEBA?AW4PackOrigin@@XZ
     * @hash   -214620590
     */
    MCVAPI enum class PackOrigin getPackOrigin() const;
    /**
     * @symbol ?getPackType@PackSource@@UEBA?AW4PackType@@XZ
     * @hash   1623494802
     */
    MCVAPI enum class PackType getPackType() const;
    /**
     * @symbol ??1PackSource@@UEAA@XZ
     * @hash   1480100900
     */
    MCVAPI ~PackSource();
#endif
    /**
     * @symbol ?fetchPack@PackSource@@QEAAPEAVPack@@AEBUPackIdVersion@@@Z
     * @hash   1824117226
     */
    MCAPI class Pack * fetchPack(struct PackIdVersion const &);
    /**
     * @symbol ?resolveUpgradeDependencies@PackSource@@QEAAXAEAVPack@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
     * @hash   -210532451
     */
    MCAPI void resolveUpgradeDependencies(class Pack &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);

};