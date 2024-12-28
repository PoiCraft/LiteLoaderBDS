#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RakNetGUID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> g;
    ::ll::TypedStorage<2, 2, ushort> systemIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    RakNetGUID& operator=(RakNetGUID const&);
    RakNetGUID(RakNetGUID const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool FromString(char const* source);

    MCAPI RakNetGUID();

    MCAPI ::std::string ToString() const;

    MCAPI bool operator!=(::RakNet::RakNetGUID const& right) const;

    MCAPI bool operator==(::RakNet::RakNetGUID const& right) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ulong ToUint32(::RakNet::RakNetGUID const& g);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace RakNet
