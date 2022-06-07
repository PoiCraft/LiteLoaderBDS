// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ClearCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLEARCOMMAND
public:
    class ClearCommand& operator=(class ClearCommand const &) = delete;
    ClearCommand(class ClearCommand const &) = delete;
    ClearCommand() = delete;
#endif


public:
    /*0*/ virtual ~ClearCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLEARCOMMAND
public:
#endif
    MCAPI static void setup(class CommandRegistry &);


};