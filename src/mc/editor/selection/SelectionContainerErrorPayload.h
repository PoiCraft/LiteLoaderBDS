#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/selection/SelectionContainerCommon.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Network {

class SelectionContainerErrorPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::SelectionContainerErrorPayload>,
  public ::Editor::Network::SelectionContainerCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke3b444;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectionContainerErrorPayload(SelectionContainerErrorPayload const&);
    SelectionContainerErrorPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SelectionContainerErrorPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SelectionContainerErrorPayload(::mce::UUID const& id, ::std::string const& msg, bool eventOnly);

    MCAPI ::Editor::Network::SelectionContainerErrorPayload&
    operator=(::Editor::Network::SelectionContainerErrorPayload const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::mce::UUID const& id, ::std::string const& msg, bool eventOnly);
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

} // namespace Editor::Network