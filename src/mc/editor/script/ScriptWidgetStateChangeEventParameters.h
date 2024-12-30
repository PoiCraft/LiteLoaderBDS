#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilderReadOnly.h"

namespace Editor::ScriptModule {

class ScriptWidgetStateChangeEventParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkdf4fcd;
    ::ll::UntypedStorage<8, 32> mUnke44e62;
    ::ll::UntypedStorage<1, 2>  mUnkc47662;
    ::ll::UntypedStorage<1, 2>  mUnkff3913;
    ::ll::UntypedStorage<4, 16> mUnk306ff9;
    ::ll::UntypedStorage<4, 12> mUnk53196f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetStateChangeEventParameters& operator=(ScriptWidgetStateChangeEventParameters const&);
    ScriptWidgetStateChangeEventParameters(ScriptWidgetStateChangeEventParameters const&);
    ScriptWidgetStateChangeEventParameters();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptWidgetStateChangeEventParameters();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilderReadOnly<
        ::Editor::ScriptModule::ScriptWidgetStateChangeEventParameters>
    bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule