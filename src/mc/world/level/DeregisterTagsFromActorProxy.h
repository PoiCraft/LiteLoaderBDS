#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IDeregisterTagsFromActorProxy.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class DeregisterTagsFromActorProxy : public ::IDeregisterTagsFromActorProxy {
public:
    // prevent constructor by default
    DeregisterTagsFromActorProxy& operator=(DeregisterTagsFromActorProxy const&);
    DeregisterTagsFromActorProxy(DeregisterTagsFromActorProxy const&);
    DeregisterTagsFromActorProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DeregisterTagsFromActorProxy() /*override*/;

    // vIndex: 1
    virtual void deregisterTagsFromActor(::Actor& actor) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $deregisterTagsFromActor(::Actor& actor);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
