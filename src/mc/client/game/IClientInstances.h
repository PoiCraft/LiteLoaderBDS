#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ItemRegistryRef;
// clang-format on

class IClientInstances {
public:
    // prevent constructor by default
    IClientInstances& operator=(IClientInstances const&);
    IClientInstances(IClientInstances const&);
    IClientInstances();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IClientInstances();

    // vIndex: 2
    virtual ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> getPrimaryClientInstance() = 0;

    // vIndex: 1
    virtual ::Bedrock::NotNullNonOwnerPtr<::IClientInstance const> getPrimaryClientInstance() const = 0;

    // vIndex: 3
    virtual ::ItemRegistryRef getClientItemRegistry() const = 0;
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
