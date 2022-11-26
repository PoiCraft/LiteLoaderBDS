/**
 * @file  BlockTypeRegistryReadLock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockTypeRegistryReadLock.
 *
 */
class BlockTypeRegistryReadLock {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTYPEREGISTRYREADLOCK
public:
    class BlockTypeRegistryReadLock& operator=(class BlockTypeRegistryReadLock const &) = delete;
    BlockTypeRegistryReadLock(class BlockTypeRegistryReadLock const &) = delete;
    BlockTypeRegistryReadLock() = delete;
#endif

public:
    /**
     * @symbol ??1BlockTypeRegistryReadLock@@QEAA@XZ
     * @hash   -720199855
     */
    MCAPI ~BlockTypeRegistryReadLock();

//private:
    /**
     * @symbol ??0BlockTypeRegistryReadLock@@AEAA@V?$shared_ptr@VBlockTypeRegistryRWLock@@@std@@@Z
     * @hash   1264784432
     */
    MCAPI BlockTypeRegistryReadLock(class std::shared_ptr<class BlockTypeRegistryRWLock>);

private:

};