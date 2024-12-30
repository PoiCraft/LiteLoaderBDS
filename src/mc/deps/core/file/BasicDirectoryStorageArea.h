#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

template <typename T0>
class BasicDirectoryStorageArea {
public:
    // prevent constructor by default
    BasicDirectoryStorageArea& operator=(BasicDirectoryStorageArea const&);
    BasicDirectoryStorageArea(BasicDirectoryStorageArea const&);
    BasicDirectoryStorageArea();
};

} // namespace Core