#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/SenderParameters.h"

namespace cricket {

struct VideoSenderParameters : public ::cricket::SenderParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk38cf50;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoSenderParameters& operator=(VideoSenderParameters const&);
    VideoSenderParameters(VideoSenderParameters const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VideoSenderParameters() /*override*/;

    // vIndex: 1
    virtual ::std::map<::std::string, ::std::string> ToStringMap() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VideoSenderParameters();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::map<::std::string, ::std::string> $ToStringMap() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
