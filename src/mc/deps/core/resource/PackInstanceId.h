#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/resource/PackIdVersion.h"

struct PackInstanceId {
public:
    PackIdVersion mPackId;
    std::string   mSubpackName;

    // prevent constructor by default
    PackInstanceId& operator=(PackInstanceId const&);
    PackInstanceId(PackInstanceId const&);
    PackInstanceId();

public:
    // NOLINTBEGIN
    MCAPI PackInstanceId(struct PackInstanceId&&);

    MCAPI PackInstanceId(struct PackIdVersion const& packId, std::string const& subpackName);

    MCAPI ~PackInstanceId();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
