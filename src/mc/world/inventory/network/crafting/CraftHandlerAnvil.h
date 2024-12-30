#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"

// auto generated forward declare list
// clang-format off
class ItemStackRequestActionCraftBase;
class Recipes;
// clang-format on

class CraftHandlerAnvil : public ::CraftHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkbabe01;
    ::ll::UntypedStorage<8, 8> mUnk6a159d;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftHandlerAnvil& operator=(CraftHandlerAnvil const&);
    CraftHandlerAnvil(CraftHandlerAnvil const&);
    CraftHandlerAnvil();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftHandlerAnvil() /*override*/;

    // vIndex: 4
    virtual ::ItemStackNetResult _handleCraftAction(::ItemStackRequestActionCraftBase const&) /*override*/;

    // vIndex: 5
    virtual void _postCraftRequest(bool const wasSuccess) /*override*/;

    // vIndex: 6
    virtual ::Recipes const* _getLevelRecipes() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStackNetResult $_handleCraftAction(::ItemStackRequestActionCraftBase const&);

    MCAPI void $_postCraftRequest(bool const wasSuccess);

    MCAPI ::Recipes const* $_getLevelRecipes() const;
    // NOLINTEND
};