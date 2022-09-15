/**
 * @file  NpcDialogueStorage.hpp
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
 * @brief MC class NpcDialogueStorage.
 *
 */
class NpcDialogueStorage {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCDIALOGUESTORAGE
public:
    class NpcDialogueStorage& operator=(class NpcDialogueStorage const &) = delete;
    NpcDialogueStorage(class NpcDialogueStorage const &) = delete;
    NpcDialogueStorage() = delete;
#endif

public:
    /**
     * @symbol ?getScene@NpcDialogueStorage@@QEAAPEAUNpcDialogueScene@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -2043837798
     */
    MCAPI struct NpcDialogueScene * getScene(std::string const &);
    /**
     * @symbol ?getScene@NpcDialogueStorage@@QEBAPEBUNpcDialogueScene@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   2128980538
     */
    MCAPI struct NpcDialogueScene const * getScene(std::string const &) const;
    /**
     * @symbol ?init@NpcDialogueStorage@@QEAAXAEAVResourcePackManager@@@Z
     * @hash   -232555128
     */
    MCAPI void init(class ResourcePackManager &);
    /**
     * @symbol ?parseFile@NpcDialogueStorage@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4CurrentCmdVersion@@@Z
     * @hash   -679547292
     */
    MCAPI bool parseFile(std::string const &, std::string const &, enum CurrentCmdVersion);

};