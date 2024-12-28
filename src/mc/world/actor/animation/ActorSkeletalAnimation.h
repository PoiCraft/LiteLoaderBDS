#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BoneAnimation;
// clang-format on

class ActorSkeletalAnimation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mUnkb8cb8b;
    ::ll::UntypedStorage<4, 4>   mUnk195089;
    ::ll::UntypedStorage<4, 4>   mUnk9e60dd;
    ::ll::UntypedStorage<1, 1>   mUnk1a1b73;
    ::ll::UntypedStorage<8, 216> mUnk5f9b7c;
    ::ll::UntypedStorage<8, 216> mUnkeb2e2d;
    ::ll::UntypedStorage<8, 216> mUnk3fe41b;
    ::ll::UntypedStorage<8, 216> mUnk4b5cf3;
    ::ll::UntypedStorage<8, 24>  mUnk6d4bd9;
    ::ll::UntypedStorage<8, 24>  mUnk74b140;
    ::ll::UntypedStorage<8, 24>  mUnkb6f3e2;
    ::ll::UntypedStorage<8, 24>  mUnk534aee;
    ::ll::UntypedStorage<8, 32>  mUnkba353d;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSkeletalAnimation& operator=(ActorSkeletalAnimation const&);
    ActorSkeletalAnimation(ActorSkeletalAnimation const&);
    ActorSkeletalAnimation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorSkeletalAnimation(::std::string const& name, ::std::string const& sourceFilePathWithExtension);

    MCAPI ::BoneAnimation& addBoneAnimation(::std::string const& name);

    MCAPI void removeIrrelevantKeyFramesAndConvertAllFloatKeyFramesToSimplifiedVersion();

    MCAPI ~ActorSkeletalAnimation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, ::std::string const& sourceFilePathWithExtension);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
