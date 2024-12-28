#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SoftEnumUpdateType.h"

// auto generated forward declare list
// clang-format off
class CommandRegistry;
// clang-format on

class CommandSoftEnumRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CommandRegistry*> mRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandSoftEnumRegistry& operator=(CommandSoftEnumRegistry const&);
    CommandSoftEnumRegistry(CommandSoftEnumRegistry const&);
    CommandSoftEnumRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CommandSoftEnumRegistry(::CommandRegistry* registry);

    MCAPI void
    updateSoftEnum(::SoftEnumUpdateType type, ::std::string const& enumName, ::std::vector<::std::string> values);

    MCAPI ~CommandSoftEnumRegistry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CommandRegistry* registry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
