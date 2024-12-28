#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BiomeSource;
class BlockPos;
class ChunkPos;
class Dimension;
class HashedString;
class IPreliminarySurfaceProvider;
class Random;
class StructureStart;
// clang-format on

class AncientCityFeature : public ::StructureFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1c9344;
    // NOLINTEND

public:
    // prevent constructor by default
    AncientCityFeature& operator=(AncientCityFeature const&);
    AncientCityFeature(AncientCityFeature const&);
    AncientCityFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual bool
    isFeatureChunk(::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& chunkPos, uint levelSeed, ::IPreliminarySurfaceProvider const&, ::Dimension const&) /*override*/
        ;

    // vIndex: 3
    virtual bool getNearestGeneratedFeature(
        ::Dimension&                           dimension,
        ::BiomeSource const&                   biomeSource,
        ::BlockPos const&                      origin,
        ::BlockPos&                            pos,
        ::IPreliminarySurfaceProvider const&   preliminarySurfaceLevel,
        bool                                   mustBeInNewChunks,
        ::std::optional<::HashedString> const& biomeTag
    ) /*override*/;

    // vIndex: 5
    virtual ::std::unique_ptr<::StructureStart>
    createStructureStart(::Dimension& dimension, ::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& chunkPos, ::IPreliminarySurfaceProvider const&) /*override*/
        ;

    // vIndex: 0
    virtual ~AncientCityFeature() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AncientCityFeature(uint seed, ::BaseGameVersion const& baseGameVersion);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint seed, ::BaseGameVersion const& baseGameVersion);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool
    $isFeatureChunk(::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& chunkPos, uint levelSeed, ::IPreliminarySurfaceProvider const&, ::Dimension const&);

    MCAPI bool $getNearestGeneratedFeature(
        ::Dimension&                           dimension,
        ::BiomeSource const&                   biomeSource,
        ::BlockPos const&                      origin,
        ::BlockPos&                            pos,
        ::IPreliminarySurfaceProvider const&   preliminarySurfaceLevel,
        bool                                   mustBeInNewChunks,
        ::std::optional<::HashedString> const& biomeTag
    );

    MCAPI ::std::unique_ptr<::StructureStart>
    $createStructureStart(::Dimension& dimension, ::BiomeSource const& biomeSource, ::Random& random, ::ChunkPos const& chunkPos, ::IPreliminarySurfaceProvider const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
