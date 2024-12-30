#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DefintionDescription {
public:
    // prevent constructor by default
    DefintionDescription& operator=(DefintionDescription const&);
    DefintionDescription(DefintionDescription const&);
    DefintionDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DefintionDescription();

    // vIndex: 1
    virtual char const* getJsonName() const = 0;
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