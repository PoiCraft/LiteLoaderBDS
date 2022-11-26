/**
 * @file  InventoryMenu.hpp
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
 * @brief MC class InventoryMenu.
 *
 */
class InventoryMenu {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYMENU
public:
    class InventoryMenu& operator=(class InventoryMenu const &) = delete;
    InventoryMenu(class InventoryMenu const &) = delete;
    InventoryMenu() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INVENTORYMENU
    /**
     * @symbol ?_getContainer@InventoryMenu@@MEBAPEAVContainer@@XZ
     * @hash   414077755
     */
    MCVAPI class Container * _getContainer() const;
    /**
     * @symbol ?getItemCopies@InventoryMenu@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     * @hash   1505169860
     */
    MCVAPI std::vector<class ItemStack> getItemCopies() const;
    /**
     * @symbol ?getSlot@InventoryMenu@@UEBAAEBVItemStack@@H@Z
     * @hash   -562969452
     */
    MCVAPI class ItemStack const & getSlot(int) const;
    /**
     * @symbol ?removeSlot@InventoryMenu@@UEAAXHH@Z
     * @hash   -2093529122
     */
    MCVAPI void removeSlot(int, int);
    /**
     * @symbol ?serverInitItemStackIds@InventoryMenu@@UEAAXXZ
     * @hash   -56555694
     */
    MCVAPI void serverInitItemStackIds();
    /**
     * @symbol ?setSlot@InventoryMenu@@UEAAXHAEBVItemStack@@_N@Z
     * @hash   -1988997125
     */
    MCVAPI void setSlot(int, class ItemStack const &, bool);
    /**
     * @symbol ??1InventoryMenu@@UEAA@XZ
     * @hash   -884352456
     */
    MCVAPI ~InventoryMenu();
#endif
    /**
     * @symbol ??0InventoryMenu@@QEAA@AEAVPlayer@@PEAVContainer@@@Z
     * @hash   1066400112
     */
    MCAPI InventoryMenu(class Player &, class Container *);

};