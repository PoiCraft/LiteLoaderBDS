#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on

struct IntProviderType {
public:
    // prevent constructor by default
    IntProviderType& operator=(IntProviderType const&);
    IntProviderType(IntProviderType const&);
    IntProviderType();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IntProviderType();

    // vIndex: 1
    virtual int sample(::IRandom&) const = 0;

    // vIndex: 2
    virtual int maxValue() const = 0;

    // vIndex: 3
    virtual int minValue() const = 0;
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
