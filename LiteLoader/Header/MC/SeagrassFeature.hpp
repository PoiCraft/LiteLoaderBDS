// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SeagrassFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEAGRASSFEATURE
public:
    class SeagrassFeature& operator=(class SeagrassFeature const &) = delete;
    SeagrassFeature(class SeagrassFeature const &) = delete;
    SeagrassFeature() = delete;
#endif


public:
    /*0*/ virtual ~SeagrassFeature();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SEAGRASSFEATURE
public:
#endif


};