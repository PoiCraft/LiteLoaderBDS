#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Dimension;
namespace ScriptModuleMinecraft { class ScriptDimensionType; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDimensionTypes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk3871d3;
    ::ll::UntypedStorage<1, 1>  mUnk68d761;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDimensionTypes(ScriptDimensionTypes const&);
    ScriptDimensionTypes();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimensionType>>
    get(::Scripting::WeakLifetimeScope scope, ::std::string const& identifier);

    MCAPI ::ScriptModuleMinecraft::ScriptDimensionTypes&
    operator=(::ScriptModuleMinecraft::ScriptDimensionTypes const&);

    MCAPI void registerTypes(::Scripting::WeakLifetimeScope scope);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::std::string, ::std::string> _getDimensionStringNames();

    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);

    MCAPI static ::DimensionType fromString(::std::string const& name);

    MCAPI static ::std::string toString(::DimensionType const& type);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& sMinecraftNamespace();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
