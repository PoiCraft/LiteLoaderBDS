/**
 * @file  ResourceLoader.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ResourceLoader.
 *
 */
class ResourceLoader {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCELOADER
public:
    class ResourceLoader& operator=(class ResourceLoader const &) = delete;
    ResourceLoader(class ResourceLoader const &) = delete;
    ResourceLoader() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1717918709
     */
    virtual ~ResourceLoader();
    /**
     * @vftbl  1
     * @symbol ?load@ResourceLoader@@UEBA_NAEBVResourceLocationPair@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
     * @hash   1352079157
     */
    virtual bool load(class ResourceLocationPair const &, std::string &, std::vector<std::string> const &) const;
    /**
     * @vftbl  2
     * @hash   -1265373198
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   2001727870
     */
    virtual void __unk_vfn_4() = 0;
    /**
     * @vftbl  5
     * @hash   2002651391
     */
    virtual void __unk_vfn_5() = 0;
    /**
     * @vftbl  6
     * @hash   2003574912
     */
    virtual void __unk_vfn_6() = 0;
    /**
     * @vftbl  7
     * @symbol ?getPath@ResourceLoader@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVResourceLocation@@@Z
     * @hash   -1263453308
     */
    virtual class Core::PathBuffer<std::string> getPath(class ResourceLocation const &) const;
    /**
     * @vftbl  8
     * @symbol ?getPath@ResourceLoader@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVResourceLocation@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     * @hash   1197823697
     */
    virtual class Core::PathBuffer<std::string> getPath(class ResourceLocation const &, std::vector<std::string> const &) const;
    /**
     * @vftbl  9
     * @symbol ?getPathContainingResource@ResourceLoader@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVResourceLocation@@@Z
     * @hash   -825906936
     */
    virtual class Core::PathBuffer<std::string> getPathContainingResource(class ResourceLocation const &) const;
    /**
     * @vftbl  10
     * @symbol ?getPathContainingResource@ResourceLoader@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVResourceLocation@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     * @hash   2013743215
     */
    virtual class Core::PathBuffer<std::string> getPathContainingResource(class ResourceLocation const &, std::vector<std::string>) const;
    /**
     * @vftbl  11
     * @symbol ?getPackStackIndexOfResource@ResourceLoader@@UEBA?AU?$pair@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@AEBVResourceLocation@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     * @hash   558470294
     */
    virtual struct std::pair<int, std::string const &> getPackStackIndexOfResource(class ResourceLocation const &, std::vector<std::string> const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCELOADER
    /**
     * @symbol ?isInStreamableLocation@ResourceLoader@@UEBA_NAEBVResourceLocation@@@Z
     * @hash   -1087266281
     */
    MCVAPI bool isInStreamableLocation(class ResourceLocation const &) const;
    /**
     * @symbol ?isInStreamableLocation@ResourceLoader@@UEBA_NAEBVResourceLocation@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     * @hash   1608586382
     */
    MCVAPI bool isInStreamableLocation(class ResourceLocation const &, std::vector<std::string> const &) const;
#endif

};