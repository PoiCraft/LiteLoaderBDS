/**
 * @file  EventCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EventCommand.
 *
 */
class EventCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EVENTCOMMAND
public:
    class EventCommand& operator=(class EventCommand const &) = delete;
    EventCommand(class EventCommand const &) = delete;
    EventCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1495551717
     */
    virtual ~EventCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@EventCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   1858007922
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup@EventCommand@@SAXAEAVCommandRegistry@@@Z
     * @hash   -938256436
     */
    MCAPI static void setup(class CommandRegistry &);

};