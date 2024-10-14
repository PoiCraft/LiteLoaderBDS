#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class ShipwreckStart : public ::StructureStart {
public:
    // prevent constructor by default
    ShipwreckStart& operator=(ShipwreckStart const&);
    ShipwreckStart(ShipwreckStart const&);
    ShipwreckStart();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShipwreckStart() = default;

    MCAPI ShipwreckStart(class BiomeSource const& source, class Random&, int x, int z, short seaLevel);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
