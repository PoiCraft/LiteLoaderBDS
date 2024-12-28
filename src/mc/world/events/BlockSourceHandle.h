#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockSourceListener.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
// clang-format on

class BlockSourceHandle : public ::BlockSourceListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk525e9e;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockSourceHandle& operator=(BlockSourceHandle const&);
    BlockSourceHandle(BlockSourceHandle const&);
    BlockSourceHandle();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockSourceHandle() /*override*/;

    // vIndex: 2
    virtual void onSourceDestroyed(::BlockSource& source) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onSourceDestroyed(::BlockSource& source);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
