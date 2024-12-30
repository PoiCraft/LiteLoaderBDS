#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaDescription.h"

namespace cereal::internal {

struct Member : public ::cereal::SchemaDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk3205d4;
    ::ll::UntypedStorage<1, 1> mUnkd0026d;
    // NOLINTEND

public:
    // prevent constructor by default
    Member& operator=(Member const&);
    Member(Member const&);
    Member();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Member();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::internal