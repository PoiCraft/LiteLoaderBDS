#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace Scripting {

struct VersionConflict {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnk4bdd5f;
    ::ll::UntypedStorage<8, 104> mUnkbb2d45;
    ::ll::UntypedStorage<8, 104> mUnk10a861;
    ::ll::UntypedStorage<8, 104> mUnkaf947b;
    ::ll::UntypedStorage<8, 104> mUnk8c70b9;
    // NOLINTEND

public:
    // prevent constructor by default
    VersionConflict& operator=(VersionConflict const&);
    VersionConflict(VersionConflict const&);
    VersionConflict();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VersionConflict(::Scripting::VersionConflict&&);

    MCAPI VersionConflict(
        ::Scripting::ModuleDescriptor const& conflictModule_,
        ::Scripting::ModuleDescriptor const& requestedByA_,
        ::Scripting::ModuleDescriptor const& requestedByB_,
        ::Scripting::ModuleDescriptor const& versionWantedByA_,
        ::Scripting::ModuleDescriptor const& versionWantedByB_
    );

    MCAPI ~VersionConflict();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::VersionConflict&&);

    MCAPI void* $ctor(
        ::Scripting::ModuleDescriptor const& conflictModule_,
        ::Scripting::ModuleDescriptor const& requestedByA_,
        ::Scripting::ModuleDescriptor const& requestedByB_,
        ::Scripting::ModuleDescriptor const& versionWantedByA_,
        ::Scripting::ModuleDescriptor const& versionWantedByB_
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
