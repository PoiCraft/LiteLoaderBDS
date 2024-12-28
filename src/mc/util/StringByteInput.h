#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/BytesDataInput.h"

class StringByteInput : public ::BytesDataInput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>              mIdx;
    ::ll::TypedStorage<8, 16, ::std::string_view> mBuffer;
    // NOLINTEND

public:
    // prevent constructor by default
    StringByteInput& operator=(StringByteInput const&);
    StringByteInput(StringByteInput const&);
    StringByteInput();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 9
    virtual ::Bedrock::Result<void> readBytesResult(void* data, uint64 bytes) /*override*/;

    // vIndex: 10
    virtual uint64 numBytesLeft() const /*override*/;

    // vIndex: 0
    virtual ~StringByteInput() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::Result<void> $readBytesResult(void* data, uint64 bytes);

    MCAPI uint64 $numBytesLeft() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
