#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/HttpInterface.h"

// auto generated forward declare list
// clang-format off
struct HC_CALL;
struct HC_PERFORM_ENV;
struct XAsyncBlock;
// clang-format on

namespace Bedrock::Http {

class HttpInterfaceInternal : public ::Bedrock::Http::HttpInterface {
public:
    // prevent constructor by default
    HttpInterfaceInternal& operator=(HttpInterfaceInternal const&);
    HttpInterfaceInternal(HttpInterfaceInternal const&);
    HttpInterfaceInternal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HttpInterfaceInternal() /*override*/;

    // vIndex: 1
    virtual void send(
        ::gsl::not_null<::HC_CALL*>     call,
        ::gsl::not_null<::XAsyncBlock*> asyncBlock,
        ::HC_PERFORM_ENV*               env
    ) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $send(::gsl::not_null<::HC_CALL*> call, ::gsl::not_null<::XAsyncBlock*> asyncBlock, ::HC_PERFORM_ENV* env);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
