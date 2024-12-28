#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class Player;
// clang-format on

class SitComponent {
public:
    // prevent constructor by default
    SitComponent& operator=(SitComponent const&);
    SitComponent(SitComponent const&);
    SitComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _sitEvent(::Actor& actor, bool sit);

    MCAPI bool getInteraction(::Actor& actor, ::Player& player, ::ActorInteraction& interaction);
    // NOLINTEND
};
