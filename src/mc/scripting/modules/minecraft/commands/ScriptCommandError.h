#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ErrorBindingBuilder.h"
#include "mc/external/scripting/runtime/Error.h"

// auto generated forward declare list
// clang-format off
struct MCRESULT;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCommandError : public ::Scripting::Error {
public:
    // prevent constructor by default
    ScriptCommandError& operator=(ScriptCommandError const&);
    ScriptCommandError(ScriptCommandError const&);
    ScriptCommandError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptCommandError(::std::string messages, ::MCRESULT const& result);

    MCAPI ~ScriptCommandError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBindingBuilder<::ScriptModuleMinecraft::ScriptCommandError> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string messages, ::MCRESULT const& result);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
