#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

class ZlibFileAccessWrapper {
public:
    // prevent constructor by default
    ZlibFileAccessWrapper& operator=(ZlibFileAccessWrapper const&);
    ZlibFileAccessWrapper(ZlibFileAccessWrapper const&);
    ZlibFileAccessWrapper();

public:
    // NOLINTBEGIN
    MCAPI explicit ZlibFileAccessWrapper(Bedrock::NotNullNonOwnerPtr<class IFileAccess> fileAccess);

    MCAPI ~ZlibFileAccessWrapper();

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
