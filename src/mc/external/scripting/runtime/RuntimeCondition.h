#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct RuntimeCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk99c771;
    // NOLINTEND

public:
    // prevent constructor by default
    RuntimeCondition& operator=(RuntimeCondition const&);
    RuntimeCondition(RuntimeCondition const&);
    RuntimeCondition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RuntimeCondition(::std::string const& id);

    MCAPI ~RuntimeCondition();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting