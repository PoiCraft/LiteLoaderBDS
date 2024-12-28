#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BytesDataOutput.h"

class StringByteOutput : public ::BytesDataOutput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::string&> mBuffer;
    // NOLINTEND

public:
    // prevent constructor by default
    StringByteOutput& operator=(StringByteOutput const&);
    StringByteOutput(StringByteOutput const&);
    StringByteOutput();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 9
    virtual void writeBytes(void const* data, uint64 bytes) /*override*/;

    // vIndex: 0
    virtual ~StringByteOutput() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $writeBytes(void const* data, uint64 bytes);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
