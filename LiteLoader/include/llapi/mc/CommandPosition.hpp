/**
 * @file  CommandPosition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "BlockPos.hpp"
#undef BEFORE_EXTRA

/**
 * @brief MC class CommandPosition.
 *
 */
class CommandPosition {

#define AFTER_EXTRA
// Add Member There
#define DISABLE_CONSTRUCTOR_PREVENTION_COMMANDPOSITION
    float offsetX;
    float offsetY;
    float offsetZ;
    bool relativeX;
    bool relativeY;
    bool relativeZ;
    bool local;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDPOSITION
public:
    class CommandPosition& operator=(class CommandPosition const &) = delete;
    CommandPosition(class CommandPosition const &) = delete;
#endif

public:
    /**
     * @symbol ??0CommandPosition@@QEAA@XZ
     * @hash   -1344920928
     */
    MCAPI CommandPosition();
    /**
     * @symbol ??0CommandPosition@@QEAA@AEBVVec3@@@Z
     * @hash   -1168059049
     */
    MCAPI CommandPosition(class Vec3 const &);
    /**
     * @symbol ?getBlockPos@CommandPosition@@QEBA?AVBlockPos@@AEBVVec3@@0@Z
     * @hash   2083457207
     */
    MCAPI class BlockPos getBlockPos(class Vec3 const &, class Vec3 const &) const;
    /**
     * @symbol ?getBlockPos@CommandPosition@@QEBA?AVBlockPos@@HAEBVCommandOrigin@@AEBVVec3@@@Z
     * @hash   424302051
     */
    MCAPI class BlockPos getBlockPos(int, class CommandOrigin const &, class Vec3 const &) const;
    /**
     * @symbol ?getPosition@CommandPosition@@QEBA?AVVec3@@AEBV2@0@Z
     * @hash   1691355270
     */
    MCAPI class Vec3 getPosition(class Vec3 const &, class Vec3 const &) const;
    /**
     * @symbol ?getPosition@CommandPosition@@QEBA?AVVec3@@HAEBVCommandOrigin@@AEBV2@@Z
     * @hash   -1506483644
     */
    MCAPI class Vec3 getPosition(int, class CommandOrigin const &, class Vec3 const &) const;
    /**
     * @symbol ?load@CommandPosition@@QEAAXAEBVCompoundTag@@@Z
     * @hash   1499303240
     */
    MCAPI void load(class CompoundTag const &);
    /**
     * @symbol ?serialize@CommandPosition@@QEBA?AVCompoundTag@@XZ
     * @hash   738772426
     */
    MCAPI class CompoundTag serialize() const;

};