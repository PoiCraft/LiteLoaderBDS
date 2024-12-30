#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/IBiomeJsonComponent.h"
#include "mc/world/level/biome/BiomeTemperatureCategory.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_60 {

struct OverworldGenerationRulesBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // OverworldGenerationRulesBiomeJsonComponent inner types declare
    // clang-format off
    struct WeightedBiomeName;
    struct WeightedBiomeNameVector;
    struct WeightedTemperatureCategory;
    // clang-format on

    // OverworldGenerationRulesBiomeJsonComponent inner types define
    struct WeightedBiomeName {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 80> mUnk4869a4;
        // NOLINTEND

    public:
        // prevent constructor by default
        WeightedBiomeName(WeightedBiomeName const&);
        WeightedBiomeName();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeName&
        operator=(::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeName&&);

        MCAPI ::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeName&
        operator=(::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeName const&);

        MCAPI ~WeightedBiomeName();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct WeightedBiomeNameVector {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk9c44a9;
        // NOLINTEND

    public:
        // prevent constructor by default
        WeightedBiomeNameVector& operator=(WeightedBiomeNameVector const&);
        WeightedBiomeNameVector(WeightedBiomeNameVector const&);
        WeightedBiomeNameVector();

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void fromVector(
            ::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeNameVector& instance,
            ::std::vector<::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeName>&
                entries
        );
        // NOLINTEND
    };

    struct WeightedTemperatureCategory {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 16> mUnk941ba8;
        // NOLINTEND

    public:
        // prevent constructor by default
        WeightedTemperatureCategory& operator=(WeightedTemperatureCategory const&);
        WeightedTemperatureCategory(WeightedTemperatureCategory const&);
        WeightedTemperatureCategory();

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk59dbee;
    ::ll::UntypedStorage<8, 32> mUnk2845b0;
    ::ll::UntypedStorage<8, 32> mUnk3d9a98;
    ::ll::UntypedStorage<8, 32> mUnkb714f6;
    ::ll::UntypedStorage<8, 32> mUnkcedb99;
    // NOLINTEND

public:
    // prevent constructor by default
    OverworldGenerationRulesBiomeJsonComponent(OverworldGenerationRulesBiomeJsonComponent const&);
    OverworldGenerationRulesBiomeJsonComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OverworldGenerationRulesBiomeJsonComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent&
    operator=(::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent&&);

    MCAPI ::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent&
    operator=(::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_HELP();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
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

} // namespace SharedTypes::v1_20_60