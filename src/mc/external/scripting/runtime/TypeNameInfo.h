#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct TypeNameInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5be577;
    ::ll::UntypedStorage<8, 32> mUnk3c36f3;
    ::ll::UntypedStorage<1, 1>  mUnk8b3241;
    // NOLINTEND

public:
    // prevent constructor by default
    TypeNameInfo& operator=(TypeNameInfo const&);
    TypeNameInfo(TypeNameInfo const&);
    TypeNameInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TypeNameInfo(::std::string bindingName, ::std::string typeName, bool bound);

    MCAPI ~TypeNameInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string bindingName, ::std::string typeName, bool bound);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
