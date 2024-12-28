#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/BaseGameTestFunction.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class IGameTestFunctionContext; }
// clang-format on

namespace ScriptModuleGameTest {

class BaseScriptGameTestFunction : public ::gametest::BaseGameTestFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke32198;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseScriptGameTestFunction& operator=(BaseScriptGameTestFunction const&);
    BaseScriptGameTestFunction(BaseScriptGameTestFunction const&);
    BaseScriptGameTestFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BaseScriptGameTestFunction() /*override*/;

    // vIndex: 1
    virtual ::std::unique_ptr<::gametest::IGameTestFunctionContext> createContext(::gametest::BaseGameTestHelper& helper
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseScriptGameTestFunction(::Scripting::WeakLifetimeScope scope, ::std::string const& testName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::WeakLifetimeScope scope, ::std::string const& testName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::gametest::IGameTestFunctionContext> $createContext(::gametest::BaseGameTestHelper& helper
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
