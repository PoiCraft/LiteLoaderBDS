#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/enums/FocusImpact.h"

class ActionEvent {
public:
    // ActionEvent inner types define
    enum class ActionState {};

public:
    // prevent constructor by default
    ActionEvent& operator=(ActionEvent const&);
    ActionEvent(ActionEvent const&);
    ActionEvent();

public:
    // NOLINTBEGIN
    MCAPI
    ActionEvent(int actionId, ::ActionEvent::ActionState actionState, bool isExclusive, ::FocusImpact focusImpact);

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
