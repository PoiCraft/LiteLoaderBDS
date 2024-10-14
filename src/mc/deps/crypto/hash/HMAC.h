#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/hash/HashType.h"

namespace Crypto::Hash {

class HMAC {
public:
    // prevent constructor by default
    HMAC& operator=(HMAC const&);
    HMAC(HMAC const&);
    HMAC();

public:
    // NOLINTBEGIN
    MCAPI HMAC(::Crypto::Hash::HashType type, std::string const& key, int resultSize);

    MCAPI uint64 resultSize() const;

    MCAPI void signAndAppend(std::string const& data, std::string& out, uint64 counter);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace Crypto::Hash
