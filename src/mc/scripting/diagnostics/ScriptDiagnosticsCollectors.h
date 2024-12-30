#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScriptClientDiagnosticsListener;
class ScriptDiagnostics;
class ScriptPluginManager;
class ServerInstance;
class ServerLevel;
namespace Scripting { class DependencyLocator; }
// clang-format on

namespace ScriptDiagnosticsCollectors {
// functions
// NOLINTBEGIN
MCAPI void AddScriptStatCollectors(
    ::ScriptDiagnostics& diagnostics,
    ::ServerLevel&       serverLevel,
    ::ServerInstance&,
    ::ScriptPluginManager&             pluginManager,
    ::ScriptClientDiagnosticsListener& clientDiagnostics,
    ::Scripting::DependencyLocator&    locator
);
// NOLINTEND

} // namespace ScriptDiagnosticsCollectors