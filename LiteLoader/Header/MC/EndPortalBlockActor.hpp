// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EndPortalBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDPORTALBLOCKACTOR
public:
    class EndPortalBlockActor& operator=(class EndPortalBlockActor const &) = delete;
    EndPortalBlockActor(class EndPortalBlockActor const &) = delete;
    EndPortalBlockActor() = delete;
#endif


public:
    /*0*/ virtual ~EndPortalBlockActor();
    /*12*/ virtual void __unk_vfn_12();
    /*16*/ virtual void __unk_vfn_16();
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDPORTALBLOCKACTOR
public:
#endif
    MCAPI EndPortalBlockActor(class BlockPos const &);


};