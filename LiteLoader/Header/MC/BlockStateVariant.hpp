// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BlockStateVariant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSTATEVARIANT
public:
    class BlockStateVariant& operator=(class BlockStateVariant const &) = delete;
    BlockStateVariant(class BlockStateVariant const &) = delete;
    BlockStateVariant() = delete;
#endif


public:
    /*0*/ virtual ~BlockStateVariant();
    /*1*/ virtual void toNBT(class CompoundTag &, int) const;
    /*2*/ virtual bool fromNBT(class CompoundTag const &, int &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKSTATEVARIANT
public:
#endif


};