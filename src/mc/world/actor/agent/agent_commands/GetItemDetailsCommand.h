#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_commands/Command.h"

namespace AgentCommands {

class GetItemDetailsCommand : public ::AgentCommands::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mUnk61b09b;
    // NOLINTEND

public:
    // prevent constructor by default
    GetItemDetailsCommand& operator=(GetItemDetailsCommand const&);
    GetItemDetailsCommand(GetItemDetailsCommand const&);
    GetItemDetailsCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void execute() /*override*/;

    // vIndex: 2
    virtual bool isDone() /*override*/;

    // vIndex: 4
    virtual void fireCommandDoneEvent() /*override*/;

    // vIndex: 0
    virtual ~GetItemDetailsCommand() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute();

    MCAPI bool $isDone();

    MCAPI void $fireCommandDoneEvent();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace AgentCommands
