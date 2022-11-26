/**
 * @file  BlockSourceHandle.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockSourceListener.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockSourceHandle.
 *
 */
class BlockSourceHandle : public BlockSourceListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSOURCEHANDLE
public:
    class BlockSourceHandle& operator=(class BlockSourceHandle const &) = delete;
    BlockSourceHandle(class BlockSourceHandle const &) = delete;
    BlockSourceHandle() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -564386018
     */
    virtual ~BlockSourceHandle();
    /**
     * @vftbl  1
     * @hash   -1316591615
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?onSourceDestroyed@BlockSourceHandle@@UEAAXAEAVBlockSource@@@Z
     * @hash   788811310
     */
    virtual void onSourceDestroyed(class BlockSource &);
    /**
     * @vftbl  3
     * @hash   -1314744573
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1313821052
     */
    virtual void __unk_vfn_4();

};