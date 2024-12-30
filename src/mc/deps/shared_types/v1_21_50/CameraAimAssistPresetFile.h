#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_50 {

struct CameraAimAssistPresetFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk161ef4;
    ::ll::UntypedStorage<8, 256> mUnkf4f9ce;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistPresetFile& operator=(CameraAimAssistPresetFile const&);
    CameraAimAssistPresetFile(CameraAimAssistPresetFile const&);
    CameraAimAssistPresetFile();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CameraAimAssistPresetFile();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50