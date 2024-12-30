#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ActorDefinitionEventType : int {
    Leaf     = 0,
    Sequence = 1,
    Random   = 2,
    None     = 3,
};