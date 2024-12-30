#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FieldTrialListBase {
public:
    // prevent constructor by default
    FieldTrialListBase& operator=(FieldTrialListBase const&);
    FieldTrialListBase(FieldTrialListBase const&);
    FieldTrialListBase();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FieldTrialListBase(::std::string_view);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string_view);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc