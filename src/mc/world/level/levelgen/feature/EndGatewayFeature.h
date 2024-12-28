#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class EndGatewayFeature : public ::Feature {
public:
    // prevent constructor by default
    EndGatewayFeature& operator=(EndGatewayFeature const&);
    EndGatewayFeature(EndGatewayFeature const&);
    EndGatewayFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual bool place(::BlockSource& region, ::BlockPos const& origin, ::Random&) const /*override*/;

    // vIndex: 0
    virtual ~EndGatewayFeature() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $place(::BlockSource& region, ::BlockPos const& origin, ::Random&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
