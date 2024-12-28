#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
// clang-format on

class IContentKeyProvider : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IContentKeyProvider& operator=(IContentKeyProvider const&);
    IContentKeyProvider(IContentKeyProvider const&);
    IContentKeyProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IContentKeyProvider() /*override*/;

    // vIndex: 1
    virtual ::std::string getContentKey(::ContentIdentity const&) const = 0;

    // vIndex: 2
    virtual ::std::string getAlternateContentKey(::ContentIdentity const&) const;

    // vIndex: 3
    virtual bool requireEncryptedReads() const;

    // vIndex: 4
    virtual void setTempContentKeys(::std::unordered_map<::ContentIdentity, ::std::string> const&) = 0;

    // vIndex: 5
    virtual void clearTempContentKeys() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $getAlternateContentKey(::ContentIdentity const&) const;

    MCAPI bool $requireEncryptedReads() const;
    // NOLINTEND
};
