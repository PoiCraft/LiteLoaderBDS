#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ArgumentBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk85c51a;
    ::ll::UntypedStorage<8, 144> mUnk3a8eaa;
    ::ll::UntypedStorage<8, 776> mUnkb650d4;
    // NOLINTEND

public:
    // prevent constructor by default
    ArgumentBinding& operator=(ArgumentBinding const&);
    ArgumentBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ArgumentBinding(::Scripting::ArgumentBinding&&);

    MCAPI ArgumentBinding(::Scripting::ArgumentBinding const&);

    MCAPI ~ArgumentBinding();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::ArgumentBinding&&);

    MCAPI void* $ctor(::Scripting::ArgumentBinding const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
