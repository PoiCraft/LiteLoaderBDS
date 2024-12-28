#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct GameTestResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk277d7f;
    ::ll::UntypedStorage<4, 4>  mUnkb55a6f;
    ::ll::UntypedStorage<8, 32> mUnk401808;
    ::ll::UntypedStorage<8, 32> mUnk4f77ed;
    ::ll::UntypedStorage<8, 32> mUnkc05b2e;
    ::ll::UntypedStorage<8, 32> mUnk6ff4ae;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestResult(GameTestResult const&);
    GameTestResult();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::GameTestResult& operator=(::GameTestResult&&);

    MCAPI ::GameTestResult& operator=(::GameTestResult const&);

    MCAPI bool operator==(::GameTestResult const& rhs) const;

    MCAPI ~GameTestResult();
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
