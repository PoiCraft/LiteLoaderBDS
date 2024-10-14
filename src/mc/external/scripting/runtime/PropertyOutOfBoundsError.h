#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct PropertyOutOfBoundsError {
public:
    // prevent constructor by default
    PropertyOutOfBoundsError& operator=(PropertyOutOfBoundsError const&);
    PropertyOutOfBoundsError(PropertyOutOfBoundsError const&);
    PropertyOutOfBoundsError();

public:
    // NOLINTBEGIN
    MCAPI PropertyOutOfBoundsError(struct Scripting::PropertyOutOfBoundsError&&);

    MCAPI PropertyOutOfBoundsError(std::string const& propertyName, double value_, double minValue_, double maxValue_);

    MCAPI ~PropertyOutOfBoundsError();

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

}; // namespace Scripting
