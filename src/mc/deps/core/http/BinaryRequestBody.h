#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/IRequestBody.h"

namespace Bedrock::Http {

class BinaryRequestBody : public ::Bedrock::Http::Internal::IRequestBody {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkafd1fc;
    ::ll::UntypedStorage<8, 8>  mUnk8f0a1f;
    // NOLINTEND

public:
    // prevent constructor by default
    BinaryRequestBody& operator=(BinaryRequestBody const&);
    BinaryRequestBody(BinaryRequestBody const&);
    BinaryRequestBody();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BinaryRequestBody() /*override*/;

    // vIndex: 1
    virtual ::Bedrock::Http::Internal::IRequestBody::ReadResult read(::gsl::span<uchar> destination) /*override*/;

    // vIndex: 2
    virtual uint64 getSize() /*override*/;

    // vIndex: 3
    virtual void cancel() /*override*/;

    // vIndex: 4
    virtual ::std::string const& getLoggableSource() const /*override*/;

    // vIndex: 5
    virtual ::gsl::span<uchar const> getLoggableData() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setData(::gsl::span<uchar const> data);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::Http::Internal::IRequestBody::ReadResult $read(::gsl::span<uchar> destination);

    MCAPI uint64 $getSize();

    MCAPI void $cancel();

    MCAPI ::std::string const& $getLoggableSource() const;

    MCAPI ::gsl::span<uchar const> $getLoggableData() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
