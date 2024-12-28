#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScreenChangedEventing {
public:
    // prevent constructor by default
    IScreenChangedEventing& operator=(IScreenChangedEventing const&);
    IScreenChangedEventing(IScreenChangedEventing const&);
    IScreenChangedEventing();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IScreenChangedEventing();

    // vIndex: 1
    virtual void
    fireEventScreenChanged(uint const&, ::std::string const&, ::std::unordered_map<::std::string, ::std::string> const&) = 0;

    // vIndex: 2
    virtual void
    fireEventImGuiScreenChanged(::std::string const&, ::std::unordered_map<::std::string, ::std::string> const&) = 0;
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

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
