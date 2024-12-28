#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LootItemCondition;
namespace Json { class Value; }
// clang-format on

class LootItemConditions {
public:
    // prevent constructor by default
    LootItemConditions& operator=(LootItemConditions const&);
    LootItemConditions(LootItemConditions const&);
    LootItemConditions();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::std::unique_ptr<::LootItemCondition>> deserialize(::Json::Value object);
    // NOLINTEND
};
