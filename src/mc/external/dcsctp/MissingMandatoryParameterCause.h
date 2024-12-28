#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class MissingMandatoryParameterCause {
public:
    // prevent constructor by default
    MissingMandatoryParameterCause& operator=(MissingMandatoryParameterCause const&);
    MissingMandatoryParameterCause(MissingMandatoryParameterCause const&);
    MissingMandatoryParameterCause();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::MissingMandatoryParameterCause> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
