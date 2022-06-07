// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OpenDoorAnnotationComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPENDOORANNOTATIONCOMPONENT
public:
    class OpenDoorAnnotationComponent& operator=(class OpenDoorAnnotationComponent const &) = delete;
    OpenDoorAnnotationComponent(class OpenDoorAnnotationComponent const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OPENDOORANNOTATIONCOMPONENT
public:
#endif
    MCAPI OpenDoorAnnotationComponent(class OpenDoorAnnotationComponent &&);
    MCAPI OpenDoorAnnotationComponent();
    MCAPI void checkPath(class Mob &);
    MCAPI void initFromDefinition(class Actor &);
    MCAPI void onComponentRemoved(class EntityContext &);

//private:
    MCAPI void _cleanUp(class Mob const &);

private:


};