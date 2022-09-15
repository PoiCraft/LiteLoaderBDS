/**
 * @file  CauldronBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Potion.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CauldronBlockActor.
 *
 */
class CauldronBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAULDRONBLOCKACTOR
public:
    class CauldronBlockActor& operator=(class CauldronBlockActor const &) = delete;
    CauldronBlockActor(class CauldronBlockActor const &) = delete;
    CauldronBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CAULDRONBLOCKACTOR
    /**
     * @symbol ?_getUpdatePacket@CauldronBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     * @hash   1805684307
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @symbol ?_onUpdatePacket@CauldronBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     * @hash   -26006561
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol ?getContainer@CauldronBlockActor@@UEAAPEAVContainer@@XZ
     * @hash   2011833365
     */
    MCVAPI class Container * getContainer();
    /**
     * @symbol ?getContainer@CauldronBlockActor@@UEBAPEBVContainer@@XZ
     * @hash   1584111505
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @symbol ?getContainerSize@CauldronBlockActor@@UEBAHXZ
     * @hash   -1870455491
     */
    MCVAPI int getContainerSize() const;
    /**
     * @symbol ?getItem@CauldronBlockActor@@UEBAAEBVItemStack@@H@Z
     * @hash   1654146606
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @symbol ?getMaxStackSize@CauldronBlockActor@@UEBAHXZ
     * @hash   -680110644
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @symbol ?getName@CauldronBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -447652495
     */
    MCVAPI std::string getName() const;
    /**
     * @symbol ?load@CauldronBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -739470655
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?onChanged@CauldronBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   -985066014
     */
    MCVAPI void onChanged(class BlockSource &);
    /**
     * @symbol ?save@CauldronBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   -498757088
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @symbol ?serverInitItemStackIds@CauldronBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     * @hash   -1818857437
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @symbol ?setItem@CauldronBlockActor@@UEAAXHAEBVItemStack@@@Z
     * @hash   334595191
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @symbol ?startOpen@CauldronBlockActor@@UEAAXAEAVPlayer@@@Z
     * @hash   -783506710
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @symbol ?stopOpen@CauldronBlockActor@@UEAAXAEAVPlayer@@@Z
     * @hash   1135508234
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @symbol ?tick@CauldronBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   1516405002
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @symbol ??0CauldronBlockActor@@QEAA@AEBVBlockPos@@@Z
     * @hash   -357663123
     */
    MCAPI CauldronBlockActor(class BlockPos const &);
    /**
     * @symbol ?getColor@CauldronBlockActor@@QEBA?AVColor@mce@@XZ
     * @hash   -2069642080
     */
    MCAPI class mce::Color getColor() const;
    /**
     * @symbol ?getCustomColor@CauldronBlockActor@@QEBA?AVColor@mce@@XZ
     * @hash   1025640158
     */
    MCAPI class mce::Color getCustomColor() const;
    /**
     * @symbol ?getMixDyeColor@CauldronBlockActor@@QEAA?AVColor@mce@@XZ
     * @hash   1319136312
     */
    MCAPI class mce::Color getMixDyeColor();
    /**
     * @symbol ?getPotionColor@CauldronBlockActor@@QEBA?AVColor@mce@@XZ
     * @hash   1144865754
     */
    MCAPI class mce::Color getPotionColor() const;
    /**
     * @symbol ?getPotionType@CauldronBlockActor@@QEBA?AW4PotionType@Potion@@XZ
     * @hash   1185460228
     */
    MCAPI enum Potion::PotionType getPotionType() const;
    /**
     * @symbol ?mixDyes@CauldronBlockActor@@QEAAXXZ
     * @hash   -318277501
     */
    MCAPI void mixDyes();
    /**
     * @symbol ?setCustomColor@CauldronBlockActor@@QEAAXAEBVColor@mce@@@Z
     * @hash   -602078006
     */
    MCAPI void setCustomColor(class mce::Color const &);
    /**
     * @symbol ?setPotionType@CauldronBlockActor@@QEAAXW4PotionType@Potion@@@Z
     * @hash   -816554284
     */
    MCAPI void setPotionType(enum Potion::PotionType);
    /**
     * @symbol ?WATER_COLOR@CauldronBlockActor@@2VColor@mce@@A
     * @hash   -1827449689
     */
    MCAPI static class mce::Color WATER_COLOR;

};