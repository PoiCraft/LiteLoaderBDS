#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptSoundOptions; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWorldSoundOptions {
public:
    // prevent constructor by default
    ScriptWorldSoundOptions& operator=(ScriptWorldSoundOptions const&);
    ScriptWorldSoundOptions(ScriptWorldSoundOptions const&);
    ScriptWorldSoundOptions();

public:
    // NOLINTBEGIN
    MCAPI explicit ScriptWorldSoundOptions(struct ScriptModuleMinecraft::ScriptSoundOptions const& soundOptions);

    MCAPI float getPitch() const;

    MCAPI float getVolume() const;

    MCAPI std::optional<struct Scripting::Error> validate() const;

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptWorldSoundOptions> bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
