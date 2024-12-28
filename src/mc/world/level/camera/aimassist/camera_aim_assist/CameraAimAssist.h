#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist/TargetMode.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CameraAimAssist {
// functions
// NOLINTBEGIN
MCAPI void bindTargetModeType(::cereal::ReflectionCtx& ctx);

MCAPI ::Bedrock::Result<::CameraAimAssist::TargetMode> readTargetMode(::ReadOnlyBinaryStream& stream);

MCAPI void writeTargetMode(::CameraAimAssist::TargetMode const& val, ::BinaryStream& stream);
// NOLINTEND

} // namespace CameraAimAssist
