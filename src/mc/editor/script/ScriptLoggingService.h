#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/logging/LogLevel.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptLogProperties; }
namespace Editor::Services { class LoggingServiceProvider; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptLoggingService : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptLoggingService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk2eada6;
    ::ll::UntypedStorage<8, 8>  mUnk4209f3;
    ::ll::UntypedStorage<8, 24> mUnk6b9f0d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLoggingService& operator=(ScriptLoggingService const&);
    ScriptLoggingService(ScriptLoggingService const&);
    ScriptLoggingService();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptLoggingService(
        ::Editor::Services::LoggingServiceProvider* loggingService,
        ::Scripting::WeakLifetimeScope const&       scope
    );

    MCAPI ::Scripting::Result<void> _logMessage(
        ::Editor::LogLevel                                           level,
        ::std::string                                                message,
        ::std::optional<::Editor::ScriptModule::ScriptLogProperties> logProps
    );

    MCAPI ::Scripting::Result<void>
    debug(::std::string message, ::std::optional<::Editor::ScriptModule::ScriptLogProperties> logProps);

    MCAPI ::Scripting::Result<void>
    error(::std::string message, ::std::optional<::Editor::ScriptModule::ScriptLogProperties> logProps);

    MCAPI ::Scripting::Result<void>
    info(::std::string message, ::std::optional<::Editor::ScriptModule::ScriptLogProperties> logProps);

    MCAPI ::Scripting::Result<void>
    warning(::std::string message, ::std::optional<::Editor::ScriptModule::ScriptLogProperties> logProps);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptLoggingService> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Editor::Services::LoggingServiceProvider* loggingService, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace Editor::ScriptModule