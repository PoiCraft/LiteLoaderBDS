#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/inventory/transaction/InventoryTransactionError.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
class EntityContext;
class InventoryTransaction;
class Player;
class ReadOnlyBinaryStream;
struct DepenetrationComponent;
// clang-format on

class ComplexInventoryTransaction {
public:
    // ComplexInventoryTransaction inner types define
    enum class Type : uint {
        NormalTransaction          = 0,
        InventoryMismatch          = 1,
        ItemUseTransaction         = 2,
        ItemUseOnEntityTransaction = 3,
        ItemReleaseTransaction     = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ComplexInventoryTransaction::Type> mType;
    ::ll::TypedStorage<8, 88, ::InventoryTransaction>             mTransaction;
    // NOLINTEND

public:
    // prevent constructor by default
    ComplexInventoryTransaction& operator=(ComplexInventoryTransaction const&);
    ComplexInventoryTransaction(ComplexInventoryTransaction const&);
    ComplexInventoryTransaction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ComplexInventoryTransaction();

    // vIndex: 1
    virtual ::Bedrock::Result<void> read(::ReadOnlyBinaryStream&);

    // vIndex: 2
    virtual void write(::BinaryStream& stream) const;

    // vIndex: 3
    virtual void postLoadItems(::BlockPalette& blockPalette, bool isClientSide);

    // vIndex: 4
    virtual ::InventoryTransactionError handle(::Player& player, bool isSenderAuthority) const;

    // vIndex: 5
    virtual void onTransactionError(::Player& player, ::InventoryTransactionError error) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _setDepenetrationOverride(::DepenetrationComponent& depenetration);

    MCAPI static void _setDepenetrationOverride(::EntityContext& entity);

    MCAPI static ::std::unique_ptr<::ComplexInventoryTransaction> fromType(::ComplexInventoryTransaction::Type type);

    MCAPI static ::std::unique_ptr<::ComplexInventoryTransaction>
    fromType(::ComplexInventoryTransaction::Type type, ::InventoryTransaction const& transaction);

    MCAPI static ::std::string const getTransactionTypeName(::ComplexInventoryTransaction::Type type);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BidirectionalUnorderedMap<::ComplexInventoryTransaction::Type, ::std::string> const&
    transactionTypeMap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::Result<void> $read(::ReadOnlyBinaryStream&);

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI void $postLoadItems(::BlockPalette& blockPalette, bool isClientSide);

    MCAPI ::InventoryTransactionError $handle(::Player& player, bool isSenderAuthority) const;

    MCAPI void $onTransactionError(::Player& player, ::InventoryTransactionError error) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
