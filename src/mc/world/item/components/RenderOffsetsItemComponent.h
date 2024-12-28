#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class RenderOffsetsItemComponent : public ::NetworkedItemComponent<::RenderOffsetsItemComponent> {
public:
    // RenderOffsetsItemComponent inner types declare
    // clang-format off
    struct ItemTransforms;
    struct TRS;
    // clang-format on

    // RenderOffsetsItemComponent inner types define
    struct TRS {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk51bcea;
        ::ll::UntypedStorage<4, 12> mUnk899447;
        ::ll::UntypedStorage<4, 12> mUnk7e2076;
        // NOLINTEND

    public:
        // prevent constructor by default
        TRS& operator=(TRS const&);
        TRS(TRS const&);
        TRS();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool operator==(::RenderOffsetsItemComponent::TRS const& other) const;
        // NOLINTEND
    };

    struct ItemTransforms {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 36> mUnka00cee;
        ::ll::UntypedStorage<4, 36> mUnk5e1775;
        // NOLINTEND

    public:
        // prevent constructor by default
        ItemTransforms& operator=(ItemTransforms const&);
        ItemTransforms(ItemTransforms const&);
        ItemTransforms();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool operator==(::RenderOffsetsItemComponent::ItemTransforms const& other) const;
        // NOLINTEND
    };

    enum class Hand : int {
        MainHand = 0,
        OffHand  = 1,
    };

    enum class Perspective : int {
        FirstPerson = 0,
        ThirdPerson = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 72> mUnk982987;
    ::ll::UntypedStorage<4, 72> mUnk20441b;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderOffsetsItemComponent& operator=(RenderOffsetsItemComponent const&);
    RenderOffsetsItemComponent(RenderOffsetsItemComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RenderOffsetsItemComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RenderOffsetsItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );

    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::RenderOffsetsItemComponent::ItemTransforms& Main_Hand_Defaults();

    MCAPI static ::RenderOffsetsItemComponent::ItemTransforms& Off_Hand_Defaults();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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
