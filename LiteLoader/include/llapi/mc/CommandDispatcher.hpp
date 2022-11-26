/**
 * @file  CommandDispatcher.hpp
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
 * @brief MC class CommandDispatcher.
 *
 */
class CommandDispatcher {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDDISPATCHER
public:
    class CommandDispatcher& operator=(class CommandDispatcher const &) = delete;
    CommandDispatcher(class CommandDispatcher const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -329540832
     */
    virtual ~CommandDispatcher();
    /**
     * @vftbl  1
     * @symbol ?performCommand@CommandDispatcher@@UEAAHAEBVCommandOrigin@@AEAVCommand@@@Z
     * @hash   -576144147
     */
    virtual int performCommand(class CommandOrigin const &, class Command &);
    /**
     * @symbol ??0CommandDispatcher@@QEAA@XZ
     * @hash   -2014938306
     */
    MCAPI CommandDispatcher();

};