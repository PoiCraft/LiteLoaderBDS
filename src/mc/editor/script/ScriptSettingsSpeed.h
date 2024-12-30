#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptSettingsSpeedPropType.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Settings { class Speed; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptSettingsSpeed {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk4d8299;
    ::ll::UntypedStorage<8, 16> mUnka710cb;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSettingsSpeed& operator=(ScriptSettingsSpeed const&);
    ScriptSettingsSpeed(ScriptSettingsSpeed const&);
    ScriptSettingsSpeed();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptSettingsSpeed(::Editor::Settings::Speed* speedSettings, ::Scripting::WeakLifetimeScope const& scope);

    MCAPI ::std::unordered_map<::std::string, ::std::optional<::std::variant<float>>> getAll() const;

    MCAPI ::Scripting::Result<void>
    set(::Editor::ScriptModule::ScriptSettingsSpeedPropType prop, ::std::variant<float> const& value);

    MCAPI ::Scripting::Result<void>
    setAll(::std::unordered_map<::std::string, ::std::optional<::std::variant<float>>> const& props);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptSettingsSpeed> bindScript();

    MCAPI static ::Scripting::EnumBindingBuilder<::std::string, ::Editor::ScriptModule::ScriptSettingsSpeedPropType>
    bindScriptPropsEnum();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::Settings::Speed* speedSettings, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace Editor::ScriptModule