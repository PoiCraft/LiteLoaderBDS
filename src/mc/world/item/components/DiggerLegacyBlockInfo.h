#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct DiggerLegacyBlockInfo {
public:
    // prevent constructor by default
    DiggerLegacyBlockInfo();

public:
    // NOLINTBEGIN
    MCAPI DiggerLegacyBlockInfo(struct DiggerLegacyBlockInfo const&);

    MCAPI struct DiggerLegacyBlockInfo& operator=(struct DiggerLegacyBlockInfo&&);

    MCAPI struct DiggerLegacyBlockInfo& operator=(struct DiggerLegacyBlockInfo const&);

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
