/**
 * @file  CandleBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "AbstractCandleBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CandleBlock.
 *
 */
class CandleBlock : public AbstractCandleBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CANDLEBLOCK
public:
    class CandleBlock& operator=(class CandleBlock const &) = delete;
    CandleBlock(class CandleBlock const &) = delete;
    CandleBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   336208590
     */
    virtual ~CandleBlock();
    /**
     * @vftbl  19
     * @hash   -334394356
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
     * @vftbl  100
     * @symbol ?getResourceCount@CandleBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
     * @hash   -359586362
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  101
     * @symbol ?getResourceItem@CandleBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     * @hash   1441428158
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  102
     * @symbol ?asItemInstance@CandleBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   288537523
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
     * @vftbl  144
     * @symbol ?getVisualShape@CandleBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z
     * @hash   -86574342
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
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
     * @vftbl  177
     * @hash   1527536513
     */
    virtual void __unk_vfn_177();
    /**
     * @vftbl  179
     * @symbol ?use@CandleBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     * @hash   781349445
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  188
     * @hash   1563823873
     */
    virtual void __unk_vfn_188();
    /**
     * @vftbl  192
     * @symbol ?_getNumCandles@CandleBlock@@MEBAHAEBVBlock@@@Z
     * @hash   147728895
     */
    virtual int _getNumCandles(class Block const &) const;
    /**
     * @vftbl  193
     * @symbol ?_iterateCandles@CandleBlock@@MEBAXAEBVBlock@@AEBVBlockPos@@V?$function@$$A6AXAEBVVec3@@H@Z@std@@@Z
     * @hash   -689967146
     */
    virtual void _iterateCandles(class Block const &, class BlockPos const &, class std::function<void (class Vec3 const &, int)>) const;
    /**
     * @vftbl  194
     * @symbol ?_tryLightOnFire@CandleBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
     * @hash   332011885
     */
    virtual void _tryLightOnFire(class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @vftbl  195
     * @hash   -710025779
     */
    virtual void __unk_vfn_195();
    /**
     * @vftbl  196
     * @hash   555529214
     */
    virtual void __unk_vfn_196();
    /**
     * @vftbl  197
     * @hash   556421983
     */
    virtual void __unk_vfn_197();
    /**
     * @vftbl  198
     * @hash   557314752
     */
    virtual void __unk_vfn_198();
    /**
     * @vftbl  199
     * @hash   558207521
     */
    virtual void __unk_vfn_199();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CANDLEBLOCK
    /**
     * @symbol ?isInteractiveBlock@CandleBlock@@UEBA_NXZ
     * @hash   -1204280915
     */
    MCVAPI bool isInteractiveBlock() const;
    /**
     * @symbol ?waterSpreadCausesSpawn@CandleBlock@@UEBA_NXZ
     * @hash   791485311
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @symbol ??0CandleBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   391199022
     */
    MCAPI CandleBlock(std::string const &, int);
    /**
     * @symbol ?tryLightFire@CandleBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
     * @hash   864719884
     */
    MCAPI static bool tryLightFire(class BlockSource &, class BlockPos const &, class Actor *);

//private:
    /**
     * @symbol ?_forEachCandle@CandleBlock@@CAXAEBVBlock@@AEBVBlockPos@@V?$function@$$A6AXAEBVVec3@@H@Z@std@@@Z
     * @hash   214987638
     */
    MCAPI static void _forEachCandle(class Block const &, class BlockPos const &, class std::function<void (class Vec3 const &, int)>);

private:

};