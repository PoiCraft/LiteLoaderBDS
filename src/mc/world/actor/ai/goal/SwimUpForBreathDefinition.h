#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class SemVersion;
class SwimUpForBreathGoal;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SwimUpForBreathDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk1ab2f0;
    ::ll::UntypedStorage<4, 4>  mUnk4d1366;
    ::ll::UntypedStorage<4, 4>  mUnk980937;
    ::ll::UntypedStorage<8, 32> mUnk81eab7;
    // NOLINTEND

public:
    // prevent constructor by default
    SwimUpForBreathDefinition& operator=(SwimUpForBreathDefinition const&);
    SwimUpForBreathDefinition(SwimUpForBreathDefinition const&);
    SwimUpForBreathDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SwimUpForBreathDefinition() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext& entity, ::SwimUpForBreathGoal& goal) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::string const&                                                                                      name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SwimUpForBreathDefinition>>& root
    );

    MCAPI static ::SemVersion getStrictParsingVersion();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};