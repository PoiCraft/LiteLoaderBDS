/**
 * @file  BiomeSourceUtil.hpp
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
 * @brief MC namespace BiomeSourceUtil.
 *
 */
namespace BiomeSourceUtil {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol ?determineDestinationHeight@BiomeSourceUtil@@YAFAEBVDimension@@VBlockPos@@@Z
     * @hash   5582732
     */
    MCAPI short determineDestinationHeight(class Dimension const &, class BlockPos);
    /**
     * @symbol ?locateBiome@BiomeSourceUtil@@YA?AV?$optional@VBlockPos@@@std@@AEBV?$function@$$A6A_NAEBVBiome@@@Z@3@AEBVBiomeSource@@AEBVBlockPos@@2I@Z
     * @hash   -991553808
     */
    MCAPI class std::optional<class BlockPos> locateBiome(class std::function<bool (class Biome const &)> const &, class BiomeSource const &, class BlockPos const &, class BlockPos const &, unsigned int);
    /**
     * @symbol ?locateBiome@BiomeSourceUtil@@YA?AV?$optional@VBlockPos@@@std@@AEBV?$function@$$A6A_NAEBVBiome@@@Z@3@AEBVBiomeSource@@AEBVBlockPos@@VBoundingBox@@I@Z
     * @hash   -651923495
     */
    MCAPI class std::optional<class BlockPos> locateBiome(class std::function<bool (class Biome const &)> const &, class BiomeSource const &, class BlockPos const &, class BoundingBox, unsigned int);
    /**
     * @symbol ?locateBiome@BiomeSourceUtil@@YA?AV?$optional@VBlockPos@@@std@@AEBV?$function@$$A6A_NAEBVBiome@@@Z@3@AEBVBiomeSource@@AEBVBoundingBox@@I@Z
     * @hash   1729162604
     */
    MCAPI class std::optional<class BlockPos> locateBiome(class std::function<bool (class Biome const &)> const &, class BiomeSource const &, class BoundingBox const &, unsigned int);

};