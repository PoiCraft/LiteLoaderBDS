#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/source/BiomeSource.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeArea;
class BlockPos;
class BoundingBox;
class ChunkLocalNoiseCache;
class LevelChunk;
struct GetBiomeOptions;
// clang-format on

class BiomeSource3d : public ::BiomeSource {
public:
    // BiomeSource3d inner types declare
    // clang-format off
    struct BiomeData;
    // clang-format on

    // BiomeSource3d inner types define
    struct BiomeData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnke73044;
        ::ll::UntypedStorage<1, 1> mUnk1e6a91;
        // NOLINTEND

    public:
        // prevent constructor by default
        BiomeData& operator=(BiomeData const&);
        BiomeData(BiomeData const&);
        BiomeData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnkd8b875;
    ::ll::UntypedStorage<2, 4>   mUnkdca619;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeSource3d& operator=(BiomeSource3d const&);
    BiomeSource3d(BiomeSource3d const&);
    BiomeSource3d();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void fillBiomes(::LevelChunk& levelChunk, ::ChunkLocalNoiseCache const& chunkLocalNoiseCache) const
        /*override*/;

    // vIndex: 3
    virtual ::BiomeArea getBiomeArea(::BoundingBox const& box, uint scale) const /*override*/;

    // vIndex: 2
    virtual ::BiomeArea
    getBiomeArea(::BoundingBox const& box, uint scale, ::GetBiomeOptions const& getBiomeOptionsIn) const /*override*/;

    // vIndex: 4
    virtual bool containsOnly(int xo, int yo, int zo, int r, ::gsl::span<uint64 const> allowed) const /*override*/;

    // vIndex: 7
    virtual ::Biome const* getBiome(::BlockPos const& blockPos) const /*override*/;

    // vIndex: 6
    virtual ::Biome const* getBiome(::GetBiomeOptions const& getBiomeOptions) const /*override*/;

    // vIndex: 5
    virtual ::Biome const* getBiome(int blockX, int blockY, int blockZ) const /*override*/;

    // vIndex: 8
    virtual bool has(uint64 id) const /*override*/;

    // vIndex: 9
    virtual bool hasByHashId(uint64 id) const /*override*/;

    // vIndex: 0
    virtual ~BiomeSource3d() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $fillBiomes(::LevelChunk& levelChunk, ::ChunkLocalNoiseCache const& chunkLocalNoiseCache) const;

    MCAPI ::BiomeArea $getBiomeArea(::BoundingBox const& box, uint scale) const;

    MCAPI ::BiomeArea
    $getBiomeArea(::BoundingBox const& box, uint scale, ::GetBiomeOptions const& getBiomeOptionsIn) const;

    MCAPI bool $containsOnly(int xo, int yo, int zo, int r, ::gsl::span<uint64 const> allowed) const;

    MCAPI ::Biome const* $getBiome(::BlockPos const& blockPos) const;

    MCAPI ::Biome const* $getBiome(::GetBiomeOptions const& getBiomeOptions) const;

    MCAPI ::Biome const* $getBiome(int blockX, int blockY, int blockZ) const;

    MCAPI bool $has(uint64 id) const;

    MCAPI bool $hasByHashId(uint64 id) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
