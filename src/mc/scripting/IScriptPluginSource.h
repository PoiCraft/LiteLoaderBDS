#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
// clang-format on

class IScriptPluginSource {
public:
    // prevent constructor by default
    IScriptPluginSource& operator=(IScriptPluginSource const&);
    IScriptPluginSource(IScriptPluginSource const&);
    IScriptPluginSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IScriptPluginSource();

    // vIndex: 1
    virtual ::PackManifest const& getManifest() = 0;

    // vIndex: 2
    virtual ::std::vector<::std::string> enumerateScripts(::std::string const&) = 0;

    // vIndex: 3
    virtual ::std::optional<::std::string> loadScript(::std::string const&) = 0;

    // vIndex: 4
    virtual ::std::string removeRootFromPath(::std::string const&) = 0;
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
