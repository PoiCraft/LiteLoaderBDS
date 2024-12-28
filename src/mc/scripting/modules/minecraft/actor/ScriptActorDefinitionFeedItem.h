#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
struct ActorDefinitionFeedItem;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorDefinitionFeedItem {
public:
    // prevent constructor by default
    ScriptActorDefinitionFeedItem& operator=(ScriptActorDefinitionFeedItem const&);
    ScriptActorDefinitionFeedItem(ScriptActorDefinitionFeedItem const&);
    ScriptActorDefinitionFeedItem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ActorDefinitionFeedItem> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
