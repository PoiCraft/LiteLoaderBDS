#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

class CerealSchemaUpgrade {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnkb0e3c9;
    ::ll::UntypedStorage<8, 32>  mUnk6aa837;
    ::ll::UntypedStorage<8, 32>  mUnk3b3bf2;
    ::ll::UntypedStorage<8, 16>  mUnkd8210b;
    // NOLINTEND

public:
    // prevent constructor by default
    CerealSchemaUpgrade& operator=(CerealSchemaUpgrade const&);
    CerealSchemaUpgrade(CerealSchemaUpgrade const&);
    CerealSchemaUpgrade();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CerealSchemaUpgrade();

    // vIndex: 1
    virtual bool previousSchema(::rapidjson::GenericValue<
                                ::rapidjson::UTF8<char>,
                                ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const&) const = 0;

    // vIndex: 2
    virtual void
    upgradeToNext(::rapidjson::GenericDocument<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>, ::rapidjson::CrtAllocator>&, ::SemVersion const&)
        const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CerealSchemaUpgrade(
        ::std::string_view   fileType,
        ::SemVersion         targetVersion,
        ::std::string const& schemaKey,
        ::std::string const& jsonMemberName
    );

    MCAPI bool checkAndUpgradeToNext(
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>& document,
        ::SemVersion const&             documentOriginalVersion
    ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string_view   fileType,
        ::SemVersion         targetVersion,
        ::std::string const& schemaKey,
        ::std::string const& jsonMemberName
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $upgradeToNext(::rapidjson::GenericDocument<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>, ::rapidjson::CrtAllocator>&, ::SemVersion const&)
        const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
