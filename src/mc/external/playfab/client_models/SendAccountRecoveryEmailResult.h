#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabResultCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct SendAccountRecoveryEmailResult : public ::PlayFab::PlayFabResultCommon {
public:
    // prevent constructor by default
    SendAccountRecoveryEmailResult& operator=(SendAccountRecoveryEmailResult const&);
    SendAccountRecoveryEmailResult(SendAccountRecoveryEmailResult const&);
    SendAccountRecoveryEmailResult();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SendAccountRecoveryEmailResult() /*override*/;

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