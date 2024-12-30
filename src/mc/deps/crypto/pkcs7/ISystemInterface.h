#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Pkcs7 {

class ISystemInterface {
public:
    // prevent constructor by default
    ISystemInterface& operator=(ISystemInterface const&);
    ISystemInterface(ISystemInterface const&);
    ISystemInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ISystemInterface();

    // vIndex: 1
    virtual ::std::vector<uchar> verifyAndReadPKCS7Data(::std::string const&) const = 0;
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

} // namespace Crypto::Pkcs7