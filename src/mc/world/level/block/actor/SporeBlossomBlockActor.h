#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

class SporeBlossomBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    SporeBlossomBlockActor& operator=(SporeBlossomBlockActor const&);
    SporeBlossomBlockActor(SporeBlossomBlockActor const&);
    SporeBlossomBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~SporeBlossomBlockActor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SporeBlossomBlockActor(::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
