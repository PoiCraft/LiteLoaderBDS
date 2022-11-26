/**
 * @file  EnderChestBlockActor.hpp
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
 * @brief MC class EnderChestBlockActor.
 *
 */
class EnderChestBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERCHESTBLOCKACTOR
public:
    class EnderChestBlockActor& operator=(class EnderChestBlockActor const &) = delete;
    EnderChestBlockActor(class EnderChestBlockActor const &) = delete;
    EnderChestBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDERCHESTBLOCKACTOR
    /**
     * @symbol ?canPullOutItem@EnderChestBlockActor@@UEBA_NHHAEBVItemStack@@@Z
     * @hash   1129252559
     */
    MCVAPI bool canPullOutItem(int, int, class ItemStack const &) const;
    /**
     * @symbol ?canPushInItem@EnderChestBlockActor@@UEBA_NHHAEBVItemStack@@@Z
     * @hash   -149627111
     */
    MCVAPI bool canPushInItem(int, int, class ItemStack const &) const;
    /**
     * @symbol ?getName@EnderChestBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1773227242
     */
    MCVAPI std::string getName() const;
    /**
     * @symbol ?playCloseSound@EnderChestBlockActor@@MEAAXAEAVBlockSource@@@Z
     * @hash   199398682
     */
    MCVAPI void playCloseSound(class BlockSource &);
    /**
     * @symbol ?playOpenSound@EnderChestBlockActor@@MEAAXAEAVBlockSource@@@Z
     * @hash   -377828060
     */
    MCVAPI void playOpenSound(class BlockSource &);
#endif
    /**
     * @symbol ??0EnderChestBlockActor@@QEAA@W4BlockActorType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockActorRendererId@@AEBVBlockPos@@@Z
     * @hash   1312507271
     */
    MCAPI EnderChestBlockActor(enum class BlockActorType, std::string const &, enum class BlockActorRendererId, class BlockPos const &);

//private:

private:
    /**
     * @symbol ?ITEMS_SIZE@EnderChestBlockActor@@0HB
     * @hash   1378390707
     */
    MCAPI static int const ITEMS_SIZE;

};