#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting::Reflection { class IFunction; }
// clang-format on

namespace Scripting {

struct IteratorBinding {
public:
    // prevent constructor by default
    IteratorBinding& operator=(IteratorBinding const&);
    IteratorBinding(IteratorBinding const&);
    IteratorBinding();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IteratorBinding();

    MCAPI explicit IteratorBinding(std::shared_ptr<class Scripting::Reflection::IFunction>);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
