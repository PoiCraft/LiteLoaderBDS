/**
 * @file  InventoryTransactionItemGroup.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "CompoundTag.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class InventoryTransactionItemGroup.
 *
 */
class InventoryTransactionItemGroup {

#define AFTER_EXTRA
// Add Member There
    unsigned short itemId;            //0
    int count;                        //4
    std::unique_ptr<CompoundTag> tag; //8

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYTRANSACTIONITEMGROUP
public:
    InventoryTransactionItemGroup(class InventoryTransactionItemGroup const &) = delete;
    InventoryTransactionItemGroup() = delete;
#endif

public:
    /**
     * @symbol ?getItemInstance\@InventoryTransactionItemGroup\@\@QEBA?AVItemStack\@\@XZ
     */
    MCAPI class ItemStack getItemInstance() const;
    /**
     * @symbol ??4InventoryTransactionItemGroup\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class InventoryTransactionItemGroup & operator=(class InventoryTransactionItemGroup const &);
    /**
     * @symbol ??1InventoryTransactionItemGroup\@\@QEAA\@XZ
     */
    MCAPI ~InventoryTransactionItemGroup();

};
