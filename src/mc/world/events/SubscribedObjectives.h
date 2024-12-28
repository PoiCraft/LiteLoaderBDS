#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubscribedObjectives {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkffeb18;
    ::ll::UntypedStorage<8, 16> mUnk574a18;
    // NOLINTEND

public:
    // prevent constructor by default
    SubscribedObjectives& operator=(SubscribedObjectives const&);
    SubscribedObjectives(SubscribedObjectives const&);
    SubscribedObjectives();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addObjective(::std::string const& objective);

    MCAPI void removeObjective(::std::string const& objective);

    MCAPI void sendEvent(::std::string const& objective, int score) const;
    // NOLINTEND
};
