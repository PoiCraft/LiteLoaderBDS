/**
 * @file  VanillaItems.hpp
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
 * @brief MC class VanillaItems.
 *
 */
class VanillaItems {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAITEMS
public:
    class VanillaItems& operator=(class VanillaItems const &) = delete;
    VanillaItems(class VanillaItems const &) = delete;
    VanillaItems() = delete;
#endif

public:
    /**
     * @symbol ?registerItems@VanillaItems@@SAXVItemRegistryRef@@AEBVBaseGameVersion@@AEBVExperiments@@_N@Z
     * @hash   1510704193
     */
    MCAPI static void registerItems(class ItemRegistryRef, class BaseGameVersion const &, class Experiments const &, bool);
    /**
     * @symbol ?serverInitCreativeItemsCallback@VanillaItems@@SAXVItemRegistryRef@@PEAVActorInfoRegistry@@PEAVBlockDefinitionGroup@@PEAVCreativeItemRegistry@@_NAEBVBaseGameVersion@@AEBVExperiments@@@Z
     * @hash   -445933049
     */
    MCAPI static void serverInitCreativeItemsCallback(class ItemRegistryRef, class ActorInfoRegistry *, class BlockDefinitionGroup *, class CreativeItemRegistry *, bool, class BaseGameVersion const &, class Experiments const &);
    /**
     * @symbol ?unregisterItems@VanillaItems@@SAXXZ
     * @hash   -70075359
     */
    MCAPI static void unregisterItems();

//private:
    /**
     * @symbol ?_addConstructionCategory@VanillaItems@@CAXPEAVCreativeItemRegistry@@VItemRegistryRef@@AEBVBaseGameVersion@@@Z
     * @hash   -1957611099
     */
    MCAPI static void _addConstructionCategory(class CreativeItemRegistry *, class ItemRegistryRef, class BaseGameVersion const &);
    /**
     * @symbol ?_addEquipmentCategory@VanillaItems@@CAXPEAVCreativeItemRegistry@@VItemRegistryRef@@AEBVBaseGameVersion@@@Z
     * @hash   -995964116
     */
    MCAPI static void _addEquipmentCategory(class CreativeItemRegistry *, class ItemRegistryRef, class BaseGameVersion const &);
    /**
     * @symbol ?_addItemsCategory@VanillaItems@@CAXPEAVCreativeItemRegistry@@VItemRegistryRef@@AEBVBaseGameVersion@@@Z
     * @hash   -480157078
     */
    MCAPI static void _addItemsCategory(class CreativeItemRegistry *, class ItemRegistryRef, class BaseGameVersion const &);
    /**
     * @symbol ?_addNatureCategory@VanillaItems@@CAXPEAVCreativeItemRegistry@@VItemRegistryRef@@AEBVBaseGameVersion@@@Z
     * @hash   -1026182945
     */
    MCAPI static void _addNatureCategory(class CreativeItemRegistry *, class ItemRegistryRef, class BaseGameVersion const &);

private:

};