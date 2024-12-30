#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/Padding.h"
#include "mc/deps/crypto/asymmetric/PrivateKeySigningFormat.h"
#include "mc/deps/crypto/asymmetric/PubKeyFormat.h"
#include "mc/deps/crypto/hash/HashType.h"

namespace Crypto::Asymmetric {

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
    virtual bool generateKeyPair(::std::string&, ::std::string&) = 0;

    // vIndex: 2
    virtual ::std::string encryptData(
        ::std::string const&,
        ::std::string const&,
        ::Crypto::Asymmetric::Padding,
        ::Crypto::Asymmetric::PubKeyFormat
    ) = 0;

    // vIndex: 3
    virtual ::std::string decryptData(::std::string const&, ::std::string const&, ::Crypto::Asymmetric::Padding) = 0;

    // vIndex: 4
    virtual ::std::string signData(
        ::std::string const&,
        ::std::string const&,
        ::Crypto::Hash::HashType,
        ::Crypto::Asymmetric::PrivateKeySigningFormat
    ) = 0;

    // vIndex: 5
    virtual bool
    verifyData(::std::string const&, ::std::string const&, ::std::string const&, ::Crypto::Hash::HashType) = 0;

    // vIndex: 6
    virtual ::std::string computeSharedSecret(::std::string const&, ::std::string const&) = 0;
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

} // namespace Crypto::Asymmetric