// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "LevelContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DropperContainerManagerModel : public LevelContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DROPPERCONTAINERMANAGERMODEL
public:
    class DropperContainerManagerModel& operator=(class DropperContainerManagerModel const&) = delete;
    DropperContainerManagerModel(class DropperContainerManagerModel const&) = delete;
    DropperContainerManagerModel() = delete;
#endif

public:
    /*0*/ virtual ~DropperContainerManagerModel();
    /*16*/ virtual class ContainerScreenContext _postInit();
    MCAPI DropperContainerManagerModel(enum ContainerID, class Player&, class BlockPos const&);

protected:

private:

};