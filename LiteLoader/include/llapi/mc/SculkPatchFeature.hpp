/**
 * @file  SculkPatchFeature.hpp
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
 * @brief MC class SculkPatchFeature.
 *
 */
class SculkPatchFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKPATCHFEATURE
public:
    class SculkPatchFeature& operator=(class SculkPatchFeature const &) = delete;
    SculkPatchFeature(class SculkPatchFeature const &) = delete;
    SculkPatchFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1466365216
     */
    virtual ~SculkPatchFeature();
    /**
     * @vftbl  1
     * @symbol ?place@SculkPatchFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
     * @hash   1277349339
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;

};