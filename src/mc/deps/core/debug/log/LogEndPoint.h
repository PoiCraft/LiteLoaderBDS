#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class LogEndPoint {
public:
    // prevent constructor by default
    LogEndPoint& operator=(LogEndPoint const&);
    LogEndPoint(LogEndPoint const&);
    LogEndPoint();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LogEndPoint();

    // vIndex: 1
    virtual void log(char const*) = 0;

    // vIndex: 2
    virtual void flush() = 0;

    // vIndex: 3
    virtual void setEnabled(bool enabled) = 0;

    // vIndex: 4
    virtual bool isEnabled() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock