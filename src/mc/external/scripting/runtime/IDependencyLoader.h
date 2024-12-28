#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ScriptData; }
// clang-format on

namespace Scripting {

class IDependencyLoader {
public:
    // prevent constructor by default
    IDependencyLoader& operator=(IDependencyLoader const&);
    IDependencyLoader(IDependencyLoader const&);
    IDependencyLoader();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IDependencyLoader();

    // vIndex: 1
    virtual ::std::optional<::Scripting::ScriptData>
    onLoadScript(::std::string const&, ::std::optional<::std::vector<::Scripting::ModuleBinding>>) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Scripting
