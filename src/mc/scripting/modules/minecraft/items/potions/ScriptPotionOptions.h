#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPotionLiquidType; }
namespace ScriptModuleMinecraft { class ScriptPotionModifierType; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPotionOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk797e47;
    ::ll::UntypedStorage<8, 48> mUnkd3c0ec;
    ::ll::UntypedStorage<8, 48> mUnk1ae9cb;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPotionOptions(ScriptPotionOptions const&);
    ScriptPotionOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionLiquidType>>
    getLiquid(::Scripting::WeakLifetimeScope& scope) const;

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionModifierType>>
    getModifier(::Scripting::WeakLifetimeScope& scope) const;

    MCAPI ::ScriptModuleMinecraft::ScriptPotionOptions& operator=(::ScriptModuleMinecraft::ScriptPotionOptions const&);

    MCAPI ~ScriptPotionOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptPotionOptions> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
