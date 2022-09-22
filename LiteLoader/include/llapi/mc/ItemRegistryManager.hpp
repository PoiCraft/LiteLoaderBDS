/**
 * @file  ItemRegistryManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemRegistryManager.
 *
 */
class ItemRegistryManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMREGISTRYMANAGER
public:
    class ItemRegistryManager& operator=(class ItemRegistryManager const &) = delete;
    ItemRegistryManager(class ItemRegistryManager const &) = delete;
    ItemRegistryManager() = delete;
#endif

public:
    /**
     * @hash   1249529418
     * @symbol ?getItemRegistry@ItemRegistryManager@@SA?AVItemRegistryRef@@XZ
     */
    MCAPI static class ItemRegistryRef getItemRegistry();
    /**
     * @hash   -1955885375
     * @symbol ?resetItemRegistry@ItemRegistryManager@@SAXXZ
     */
    MCAPI static void resetItemRegistry();
    /**
     * @hash   -920161312
     * @symbol ?setItemRegistry@ItemRegistryManager@@SAXVItemRegistryRef@@@Z
     */
    MCAPI static void setItemRegistry(class ItemRegistryRef);

//private:

private:
    /**
     * @hash   -1342579463
     * @symbol ?mThreadLocalRegistry@ItemRegistryManager@@0V?$ThreadLocalObject@V?$weak_ptr@VItemRegistry@@@std@@V?$allocator@V?$weak_ptr@VItemRegistry@@@std@@@2@@Threading@Bedrock@@A
     */
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class std::weak_ptr<class ItemRegistry>, class std::allocator<class std::weak_ptr<class ItemRegistry>>> mThreadLocalRegistry;

};