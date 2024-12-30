#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class ConfigParamsBase {
public:
    // prevent constructor by default
    ConfigParamsBase& operator=(ConfigParamsBase const&);
    ConfigParamsBase(ConfigParamsBase const&);
    ConfigParamsBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ConfigParamsBase();

    // vIndex: 1
    virtual uint getClusterSize() const = 0;

    // vIndex: 2
    virtual uint getChunkSize() const = 0;

    // vIndex: 3
    virtual uint getDataBlockSize() const = 0;

    // vIndex: 4
    virtual uint getTotalBlocksCount() const = 0;

    // vIndex: 5
    virtual uint getFirstFileDataBlockIndex() const = 0;

    // vIndex: 6
    virtual bool isLargeWritesEmulated() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isLargeWritesEmulated() const;
    // NOLINTEND
};

} // namespace SFAT