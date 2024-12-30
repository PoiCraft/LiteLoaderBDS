#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules {

struct IBLParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf6386c;
    ::ll::UntypedStorage<4, 4> mUnk91934a;
    ::ll::UntypedStorage<4, 4> mUnkb1d5ac;
    // NOLINTEND

public:
    // prevent constructor by default
    IBLParameters& operator=(IBLParameters const&);
    IBLParameters(IBLParameters const&);
    IBLParameters();
};

} // namespace dragon::framerenderer::modules