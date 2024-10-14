#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContentLogEndPoint {
public:
    // prevent constructor by default
    ContentLogEndPoint& operator=(ContentLogEndPoint const&);
    ContentLogEndPoint(ContentLogEndPoint const&);

public:
    // NOLINTBEGIN
    MCVAPI void log(char const* message);

    MCVAPI ~ContentLogEndPoint();

    MCAPI ContentLogEndPoint();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForBedrockEnableNonOwnerReferences();

    MCAPI static void** $vftableForBedrockLogEndPoint();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI void log$(char const* message);

    // NOLINTEND
};
