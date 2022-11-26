/**
 * @file  WallBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WallBlock.
 *
 */
class WallBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WALLBLOCK
public:
    class WallBlock& operator=(class WallBlock const &) = delete;
    WallBlock(class WallBlock const &) = delete;
    WallBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1226410289
     */
    virtual ~WallBlock();
    /**
     * @vftbl  10
     * @symbol ?getAABB@WallBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     * @hash   -2095654637
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  14
     * @symbol ?getLiquidClipVolume@WallBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVAABB@@@Z
     * @hash   -1690680933
     */
    virtual bool getLiquidClipVolume(class BlockSource &, class BlockPos const &, class AABB &) const;
    /**
     * @vftbl  19
     * @hash   -227039124
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  22
     * @symbol ?canProvideSupport@WallBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
     * @hash   -1403757918
     */
    virtual bool canProvideSupport(class Block const &, unsigned char, enum class BlockSupportType) const;
    /**
     * @vftbl  25
     * @symbol ?canConnect@WallBlock@@UEBA_NAEBVBlock@@E0@Z
     * @hash   -1483579302
     */
    virtual bool canConnect(class Block const &, unsigned char, class Block const &) const;
    /**
     * @vftbl  29
     * @hash   -198409973
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -178092511
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -176245469
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -175321948
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -174398427
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @hash   -172551385
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @hash   -171627864
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @hash   -178161703
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @hash   -169780822
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @hash   -149463360
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @hash   -148539839
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @hash   -145769276
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @hash   -144845755
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @hash   -143922234
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @hash   -142998713
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @hash   -142075192
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @hash   -141151671
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @hash   -117140125
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @hash   -92205058
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @hash   -91281537
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  62
     * @symbol ?canContainLiquid@WallBlock@@UEBA_NXZ
     * @hash   -1419840603
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl  75
     * @hash   -58958302
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  77
     * @symbol ?onStructureBlockPlace@WallBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1932647657
     */
    virtual void onStructureBlockPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  78
     * @symbol ?onStructureNeighborBlockPlace@WallBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1970608007
     */
    virtual void onStructureNeighborBlockPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  82
     * @hash   -33099714
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  96
     * @symbol ?breaksFallingBlocks@WallBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
     * @hash   1233551624
     */
    virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /**
     * @vftbl  100
     * @symbol ?neighborChanged@WallBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   1381348005
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  102
     * @symbol ?asItemInstance@WallBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
     * @hash   -563556761
     */
    virtual class ItemInstance asItemInstance(class Block const &, class BlockActor const *) const;
    /**
     * @vftbl  105
     * @hash   1432640646
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  106
     * @symbol ?getPlacementBlock@WallBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     * @hash   -1686338110
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @vftbl  123
     * @hash   1488051906
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  125
     * @hash   1489898948
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @hash   1490822469
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  131
     * @hash   1514834015
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl  133
     * @symbol ?buildDescriptionId@WallBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
     * @hash   -113126614
     */
    virtual std::string buildDescriptionId(class Block const &) const;
    /**
     * @vftbl  134
     * @symbol ?isAuxValueRelevantForPicking@WallBlock@@UEBA_NXZ
     * @hash   1382763569
     */
    virtual bool isAuxValueRelevantForPicking() const;
    /**
     * @vftbl  142
     * @symbol ?getVisualShapeInWorld@WallBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@_N@Z
     * @hash   177621509
     */
    virtual class AABB const & getVisualShapeInWorld(class Block const &, class IConstBlockSource const &, class BlockPos const &, class AABB &, bool) const;
    /**
     * @vftbl  146
     * @symbol ?getVariant@WallBlock@@UEBAHAEBVBlock@@@Z
     * @hash   -1461494637
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  156
     * @hash   1576709922
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  166
     * @hash   1547586817
     */
    virtual void __unk_vfn_166();
    /**
     * @vftbl  167
     * @hash   1548510338
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl  168
     * @hash   1549433859
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @symbol ?onPlace@WallBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1013665007
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  172
     * @hash   1630274140
     */
    virtual void __unk_vfn_172();
    /**
     * @vftbl  173
     * @symbol ?tick@WallBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1814184487
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  176
     * @hash   1633968224
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  185
     * @symbol ?getMapColor@WallBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -1245231513
     */
    virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  186
     * @hash   1662597375
     */
    virtual void __unk_vfn_186();
    /**
     * @vftbl  188
     * @symbol ?getResourceItem@WallBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     * @hash   -1663376015
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WALLBLOCK
    /**
     * @symbol ?canBeSilkTouched@WallBlock@@MEBA_NXZ
     * @hash   1081851204
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @symbol ?isWallBlock@WallBlock@@UEBA_NXZ
     * @hash   892316702
     */
    MCVAPI bool isWallBlock() const;
#endif
    /**
     * @symbol ??0WallBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
     * @hash   -155989222
     */
    MCAPI WallBlock(std::string const &, int, class Material const &);
    /**
     * @symbol ??0WallBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVBlockLegacy@@@Z
     * @hash   261607424
     */
    MCAPI WallBlock(std::string const &, int, class BlockLegacy const &);
    /**
     * @symbol ?tryFixWallStates@WallBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@H@Z
     * @hash   -1986160110
     */
    MCAPI void tryFixWallStates(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @symbol ?POST_HEIGHT@WallBlock@@2MB
     * @hash   -1445956411
     */
    MCAPI static float const POST_HEIGHT;
    /**
     * @symbol ?POST_WIDTH@WallBlock@@2MB
     * @hash   -1468886035
     */
    MCAPI static float const POST_WIDTH;
    /**
     * @symbol ?WALL_HEIGHT@WallBlock@@2MB
     * @hash   -837105355
     */
    MCAPI static float const WALL_HEIGHT;
    /**
     * @symbol ?WALL_NAMES@WallBlock@@2V?$array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$0O@@std@@B
     * @hash   22538872
     */
    MCAPI static class std::array<std::string, 14> const WALL_NAMES;
    /**
     * @symbol ?WALL_WIDTH@WallBlock@@2MB
     * @hash   -1978867655
     */
    MCAPI static float const WALL_WIDTH;

//private:
    /**
     * @symbol ?_desiredConnectionState@WallBlock@@AEBA?AW4WallConnectionType@@AEAVBlockSource@@AEBVBlockPos@@E@Z
     * @hash   -261370563
     */
    MCAPI enum class WallConnectionType _desiredConnectionState(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @symbol ?_getItemInstance@WallBlock@@AEBA?AVItemInstance@@AEBVBlock@@@Z
     * @hash   -386913374
     */
    MCAPI class ItemInstance _getItemInstance(class Block const &) const;
    /**
     * @symbol ?_isCovered@WallBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVAABB@@@Z
     * @hash   212830122
     */
    MCAPI bool _isCovered(class BlockSource &, class BlockPos const &, class AABB const &) const;
    /**
     * @symbol ?_shouldBePost@WallBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   1433581669
     */
    MCAPI bool _shouldBePost(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @symbol ?_tryAddToTickingQueue@WallBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   284872060
     */
    MCAPI bool _tryAddToTickingQueue(class BlockSource &, class BlockPos const &) const;

private:
    /**
     * @symbol ?WALL_DOESNT_BREAK_FALLING_BLOCK_VERSION@WallBlock@@0VBaseGameVersion@@B
     * @hash   1403075659
     */
    MCAPI static class BaseGameVersion const WALL_DOESNT_BREAK_FALLING_BLOCK_VERSION;

};