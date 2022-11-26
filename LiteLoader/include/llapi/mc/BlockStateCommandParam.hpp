/**
 * @file  BlockStateCommandParam.hpp
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
 * @brief MC class BlockStateCommandParam.
 *
 */
class BlockStateCommandParam {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSTATECOMMANDPARAM
public:
    class BlockStateCommandParam& operator=(class BlockStateCommandParam const &) = delete;
    BlockStateCommandParam(class BlockStateCommandParam const &) = delete;
    BlockStateCommandParam() = delete;
#endif

public:
    /**
     * @symbol ??0BlockStateCommandParam@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4Type@0@@Z
     * @hash   -1594465912
     */
    MCAPI BlockStateCommandParam(std::string, std::string, enum class BlockStateCommandParam::Type);
    /**
     * @symbol ?getNameAndValue@BlockStateCommandParam@@QEBA?AV?$optional@U?$pair@VHashedString@@H@std@@@std@@AEAVCommandOutput@@@Z
     * @hash   -1651295512
     */
    MCAPI class std::optional<struct std::pair<class HashedString, int>> getNameAndValue(class CommandOutput &) const;
    /**
     * @symbol ?setBlockState@BlockStateCommandParam@@QEBA_NPEAPEBVBlock@@AEAVCommandOutput@@@Z
     * @hash   1419721933
     */
    MCAPI bool setBlockState(class Block const **, class CommandOutput &) const;
    /**
     * @symbol ??1BlockStateCommandParam@@QEAA@XZ
     * @hash   -1693735216
     */
    MCAPI ~BlockStateCommandParam();

//private:
    /**
     * @symbol ?_createCompoundTag@BlockStateCommandParam@@AEBA_NAEAVCompoundTag@@AEAVCommandOutput@@@Z
     * @hash   -1312035482
     */
    MCAPI bool _createCompoundTag(class CompoundTag &, class CommandOutput &) const;

private:

};