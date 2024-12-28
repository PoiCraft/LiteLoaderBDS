#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct GreaterThanOrEqualsComparison {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5007ed;
    // NOLINTEND

public:
    // prevent constructor by default
    GreaterThanOrEqualsComparison& operator=(GreaterThanOrEqualsComparison const&);
    GreaterThanOrEqualsComparison(GreaterThanOrEqualsComparison const&);
    GreaterThanOrEqualsComparison();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::GreaterThanOrEqualsComparison> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
