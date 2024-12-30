#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlatformType {
public:
    // prevent constructor by default
    ScriptPlatformType& operator=(ScriptPlatformType const&);
    ScriptPlatformType(ScriptPlatformType const&);
    ScriptPlatformType();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::EnumBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft