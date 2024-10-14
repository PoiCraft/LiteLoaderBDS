#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace Core {

class FileStream {
public:
    // prevent constructor by default
    FileStream& operator=(FileStream const&);
    FileStream(FileStream const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileStream() = default;

    MCAPI FileStream();

    MCAPI FileStream(class Core::Path const& filename, int openMode);

    MCAPI void close();

    MCAPI void open(class Core::Path const& filename, int om);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace Core
