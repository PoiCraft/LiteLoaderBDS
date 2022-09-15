/**
 * @file  FlowerPotBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FlowerPotBlock.
 *
 */
class FlowerPotBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOWERPOTBLOCK
public:
    class FlowerPotBlock& operator=(class FlowerPotBlock const &) = delete;
    FlowerPotBlock(class FlowerPotBlock const &) = delete;
    FlowerPotBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -719888387
     */
    virtual ~FlowerPotBlock();
    /**
     * @vftbl  19
     * @hash   -327659668
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @hash   -299030517
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -278713055
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -276866013
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -275942492
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -275018971
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @hash   -273171929
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @hash   -272248408
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @hash   -271324887
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @hash   -270401366
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @hash   -250083904
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @hash   -249160383
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @hash   -248236862
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @hash   -246389820
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @hash   -245466299
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @hash   -244542778
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @hash   -243619257
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @hash   -242695736
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @hash   -241772215
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @symbol ?isValidAuxValue@FlowerPotBlock@@UEBA_NH@Z
     * @hash   1617120793
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl  59
     * @hash   -219877752
     */
    virtual void __unk_vfn_59();
    /**
     * @vftbl  60
     * @hash   -192825602
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @symbol ?canContainLiquid@FlowerPotBlock@@UEBA_NXZ
     * @hash   -1889588283
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl  73
     * @hash   -161425888
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  80
     * @hash   -135567300
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  89
     * @symbol ?mayPlace@FlowerPotBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
     * @hash   1513180718
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  90
     * @symbol ?mayPlace@FlowerPotBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   501494381
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  96
     * @symbol ?playerWillDestroy@FlowerPotBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -1455411945
     */
    virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  98
     * @symbol ?neighborChanged@FlowerPotBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   397549813
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  101
     * @symbol ?getResourceItem@FlowerPotBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     * @hash   633495537
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  102
     * @symbol ?asItemInstance@FlowerPotBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -1773696042
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  105
     * @hash   1332020102
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  124
     * @hash   1388354883
     */
    virtual void __unk_vfn_124();
    /**
     * @vftbl  126
     * @hash   1390201925
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  127
     * @hash   1391125446
     */
    virtual void __unk_vfn_127();
    /**
     * @vftbl  132
     * @hash   1415136992
     */
    virtual void __unk_vfn_132();
    /**
     * @vftbl  148
     * @hash   1442572581
     */
    virtual void __unk_vfn_148();
    /**
     * @vftbl  157
     * @hash   1477012899
     */
    virtual void __unk_vfn_157();
    /**
     * @vftbl  165
     * @symbol ?onRemove@FlowerPotBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1244879924
     */
    virtual void onRemove(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  168
     * @hash   1457546883
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @hash   1458470404
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  170
     * @hash   1478787866
     */
    virtual void __unk_vfn_170();
    /**
     * @vftbl  174
     * @symbol ?tick@FlowerPotBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1525919879
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @hash   1527536513
     */
    virtual void __unk_vfn_177();
    /**
     * @vftbl  179
     * @symbol ?use@FlowerPotBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     * @hash   880553400
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  180
     * @symbol ?canSurvive@FlowerPotBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1346800173
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @hash   1563823873
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FLOWERPOTBLOCK
    /**
     * @symbol ?isInteractiveBlock@FlowerPotBlock@@UEBA_NXZ
     * @hash   -1981375110
     */
    MCVAPI bool isInteractiveBlock() const;
    /**
     * @symbol ?waterSpreadCausesSpawn@FlowerPotBlock@@UEBA_NXZ
     * @hash   -1673033012
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @symbol ??0FlowerPotBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -1429801583
     */
    MCAPI FlowerPotBlock(std::string const &, int);
    /**
     * @symbol ?getFlowerPotEntity@FlowerPotBlock@@QEBAPEAVFlowerPotBlockActor@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1487164535
     */
    MCAPI class FlowerPotBlockActor * getFlowerPotEntity(class BlockSource &, class BlockPos const &) const;

//private:
    /**
     * @symbol ?_tryPlaceFlower@FlowerPotBlock@@AEBA_NAEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   -735863377
     */
    MCAPI bool _tryPlaceFlower(class Player &, class BlockPos const &) const;
    /**
     * @symbol ?_tryTakeFlower@FlowerPotBlock@@AEBA_NAEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   1578717975
     */
    MCAPI bool _tryTakeFlower(class Player &, class BlockPos const &) const;
    /**
     * @symbol ?_updateFlowerPotEntity@FlowerPotBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVFlowerPotBlockActor@@PEBVBlock@@AEAVActor@@@Z
     * @hash   -2130035976
     */
    MCAPI void _updateFlowerPotEntity(class BlockSource &, class BlockPos const &, class FlowerPotBlockActor *, class Block const *, class Actor &) const;
    /**
     * @symbol ?isSupportedBlock@FlowerPotBlock@@AEBA_NAEBVBlock@@@Z
     * @hash   -545708353
     */
    MCAPI bool isSupportedBlock(class Block const &) const;

private:

};