#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class ScriptDeferredEventListener;
namespace ScriptModuleMinecraft { class ScriptItemCustomComponentInterface; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentInvalidRegistryError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentAlreadyRegisteredError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadNewComponentError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadNewEventError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadVersionError; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptItemCustomComponentRegistry {
public:
    // prevent constructor by default
    IScriptItemCustomComponentRegistry& operator=(IScriptItemCustomComponentRegistry const&);
    IScriptItemCustomComponentRegistry(IScriptItemCustomComponentRegistry const&);
    IScriptItemCustomComponentRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IScriptItemCustomComponentRegistry();

    // vIndex: 1
    virtual ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError>
    tryRegisterComponentV1(::HashedString const&, ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&&) = 0;

    // vIndex: 2
    virtual ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError>
    tryRegisterComponent(::HashedString const&, ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&&) = 0;

    // vIndex: 3
    virtual void onReload() = 0;

    // vIndex: 4
    virtual void onScriptInitializationComplete() = 0;

    // vIndex: 5
    virtual void onScriptModuleStartupComplete() = 0;

    // vIndex: 6
    virtual ::ScriptDeferredEventListener& getEventListener() = 0;

    // vIndex: 7
    virtual void setCerealContext(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setCerealContext(::cereal::ReflectionCtx&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
