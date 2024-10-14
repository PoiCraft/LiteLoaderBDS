#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NoodleCavifierNoises {
public:
    // prevent constructor by default
    NoodleCavifierNoises& operator=(NoodleCavifierNoises const&);
    NoodleCavifierNoises();

public:
    // NOLINTBEGIN
    MCAPI NoodleCavifierNoises(class NoodleCavifierNoises const&);

    MCAPI ~NoodleCavifierNoises();

    MCAPI static class NoodleCavifierNoises make(class XoroshiroPositionalRandomFactory const& randomFactory);

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
