#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class Player;
// clang-format on

class IBlockSourceValidityProxy {
public:
    // prevent constructor by default
    IBlockSourceValidityProxy& operator=(IBlockSourceValidityProxy const&);
    IBlockSourceValidityProxy(IBlockSourceValidityProxy const&);
    IBlockSourceValidityProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IBlockSourceValidityProxy();

    // vIndex: 1
    virtual void updateDimensionBlockSourceTick(::Dimension&) = 0;

    // vIndex: 2
    virtual void updateBlockSourceTick(::Player&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
