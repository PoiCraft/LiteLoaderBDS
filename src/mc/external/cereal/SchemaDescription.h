#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace cereal {

struct SchemaDescription {
public:
    // prevent constructor by default
    SchemaDescription();

public:
    // NOLINTBEGIN
    MCAPI SchemaDescription(struct cereal::SchemaDescription&&);

    MCAPI SchemaDescription(struct cereal::SchemaDescription const&);

    MCAPI struct cereal::SchemaDescription& operator=(struct cereal::SchemaDescription&&);

    MCAPI struct cereal::SchemaDescription& operator=(struct cereal::SchemaDescription const&);

    MCAPI ~SchemaDescription();

    MCAPI static void bindTypes(struct cereal::ReflectionCtx& ctx);

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

}; // namespace cereal
