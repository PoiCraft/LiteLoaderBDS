/**
 * @file  Bounds.hpp
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
 * @brief MC structure Bounds.
 *
 */
struct Bounds {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOUNDS
public:
    struct Bounds& operator=(struct Bounds const &) = delete;
    Bounds(struct Bounds const &) = delete;
    Bounds() = delete;
#endif

public:
    /**
     * @symbol ??0Bounds@@QEAA@AEBVChunkPos@@0@Z
     * @hash   1544039574
     */
    MCAPI Bounds(class ChunkPos const &, class ChunkPos const &);
    /**
     * @symbol ??0Bounds@@QEAA@AEBVBlockPos@@0HW4Option@0@@Z
     * @hash   -51776221
     */
    MCAPI Bounds(class BlockPos const &, class BlockPos const &, int, enum class Bounds::Option);
    /**
     * @symbol ??0Bounds@@QEAA@AEBVBlockPos@@HHFF@Z
     * @hash   930743352
     */
    MCAPI Bounds(class BlockPos const &, int, int, short, short);

};