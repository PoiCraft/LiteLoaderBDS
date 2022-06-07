// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LayEggGoal : public BaseMoveToGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LAYEGGGOAL
public:
    class LayEggGoal& operator=(class LayEggGoal const &) = delete;
    LayEggGoal(class LayEggGoal const &) = delete;
    LayEggGoal() = delete;
#endif


public:
    /*0*/ virtual ~LayEggGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*11*/ virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /*14*/ virtual void _moveToBlock();
    /*17*/ virtual bool findTargetBlock();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LAYEGGGOAL
public:
#endif
    MCAPI LayEggGoal(class Mob &, float, int, int, float, std::vector<class ItemDescriptor> const &, std::vector<enum MaterialType> const &, bool, bool, float, class ItemDescriptor const &, class DefinitionTrigger const &, std::string const &);

//protected:
    MCAPI bool _isTargetBlock(class BlockLegacy const &) const;
    MCAPI void _layEgg(class BlockPos const &);

protected:


};