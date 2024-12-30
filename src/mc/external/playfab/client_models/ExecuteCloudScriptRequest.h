#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct ExecuteCloudScriptRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke7150c;
    ::ll::UntypedStorage<8, 16> mUnk613df2;
    ::ll::UntypedStorage<1, 2>  mUnk913596;
    ::ll::UntypedStorage<4, 8>  mUnk4baf4d;
    ::ll::UntypedStorage<4, 8>  mUnk70e6ca;
    // NOLINTEND

public:
    // prevent constructor by default
    ExecuteCloudScriptRequest& operator=(ExecuteCloudScriptRequest const&);
    ExecuteCloudScriptRequest(ExecuteCloudScriptRequest const&);
    ExecuteCloudScriptRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ExecuteCloudScriptRequest() /*override*/;

    // vIndex: 1
    virtual void FromJson(::Json::Value&) /*override*/;

    // vIndex: 2
    virtual ::Json::Value ToJson() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $FromJson(::Json::Value&);

    MCAPI ::Json::Value $ToJson() const;
    // NOLINTEND
};

} // namespace PlayFab::ClientModels