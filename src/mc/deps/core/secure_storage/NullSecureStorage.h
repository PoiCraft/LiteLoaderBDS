#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/secure_storage/SecureStorage.h"

class NullSecureStorage : public ::SecureStorage {
public:
    // prevent constructor by default
    NullSecureStorage& operator=(NullSecureStorage const&);
    NullSecureStorage(NullSecureStorage const&);
    NullSecureStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NullSecureStorage() /*override*/;

    // vIndex: 1
    virtual bool add(::std::string const& key, ::std::string const& value) /*override*/;

    // vIndex: 2
    virtual bool addOrUpdate(::std::string const& key, ::std::string const& value) /*override*/;

    // vIndex: 3
    virtual bool remove(::std::string const& key) /*override*/;

    // vIndex: 4
    virtual bool get(::std::string const& key, ::std::string& outValue) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $add(::std::string const& key, ::std::string const& value);

    MCAPI bool $addOrUpdate(::std::string const& key, ::std::string const& value);

    MCAPI bool $remove(::std::string const& key);

    MCAPI bool $get(::std::string const& key, ::std::string& outValue);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
