#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class ScopeExit {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk81d9bc;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopeExit& operator=(ScopeExit const&);
    ScopeExit(ScopeExit const&);
    ScopeExit();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScopeExit();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
