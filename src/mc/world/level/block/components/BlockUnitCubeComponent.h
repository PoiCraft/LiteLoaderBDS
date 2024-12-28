#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { struct BlockSchematic; }
// clang-format on

struct BlockUnitCubeComponent {
public:
    // prevent constructor by default
    BlockUnitCubeComponent& operator=(BlockUnitCubeComponent const&);
    BlockUnitCubeComponent(BlockUnitCubeComponent const&);
    BlockUnitCubeComponent();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::shared_ptr<::ClientBlockPipeline::BlockSchematic>& mBlockSchematic();
    // NOLINTEND
};
