/**
 * @file  VegetationPatchFeature.hpp
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
 * @brief MC class VegetationPatchFeature.
 *
 */
class VegetationPatchFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEGETATIONPATCHFEATURE
public:
    class VegetationPatchFeature& operator=(class VegetationPatchFeature const &) = delete;
    VegetationPatchFeature(class VegetationPatchFeature const &) = delete;
    VegetationPatchFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1151626106
     */
    virtual ~VegetationPatchFeature();
    /**
     * @vftbl  1
     * @symbol ?place@VegetationPatchFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
     * @hash   729800577
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;

//private:
    /**
     * @symbol ?_isExposedDirection@VegetationPatchFeature@@AEBA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@E@Z
     * @hash   701294908
     */
    MCAPI bool _isExposedDirection(class IBlockWorldGenAPI &, class BlockPos const &, unsigned char) const;
    /**
     * @symbol ?_placeGroundPatch@VegetationPatchFeature@@AEBA?AV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEAVIBlockWorldGenAPI@@AEAVRandom@@AEBVBlockPos@@HH@Z
     * @hash   1819719516
     */
    MCAPI std::vector<class BlockPos> _placeGroundPatch(class IBlockWorldGenAPI &, class Random &, class BlockPos const &, int, int) const;

private:

};