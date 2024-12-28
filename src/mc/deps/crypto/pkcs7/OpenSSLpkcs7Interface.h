#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/pkcs7/ISystemInterface.h"

namespace Crypto::Pkcs7 {

class OpenSSLpkcs7Interface : public ::Crypto::Pkcs7::ISystemInterface {
public:
    // prevent constructor by default
    OpenSSLpkcs7Interface& operator=(OpenSSLpkcs7Interface const&);
    OpenSSLpkcs7Interface(OpenSSLpkcs7Interface const&);
    OpenSSLpkcs7Interface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OpenSSLpkcs7Interface() /*override*/;

    // vIndex: 1
    virtual ::std::vector<uchar> verifyAndReadPKCS7Data(::std::string const&) const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::vector<uchar> $verifyAndReadPKCS7Data(::std::string const&) const;
    // NOLINTEND
};

} // namespace Crypto::Pkcs7
