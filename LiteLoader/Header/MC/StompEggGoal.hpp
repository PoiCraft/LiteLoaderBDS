// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StompBlockGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StompEggGoal : public StompBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOMPEGGGOAL
public:
    class StompEggGoal& operator=(class StompEggGoal const &) = delete;
    StompEggGoal(class StompEggGoal const &) = delete;
    StompEggGoal() = delete;
#endif


public:
    /*0*/ virtual ~StompEggGoal();
    /*3*/ virtual void __unk_vfn_3();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*18*/ virtual void _createBreakProgressParticles(class Level &, class BlockSource &, class BlockPos);
    /*19*/ virtual void _createDestroyParticles(class Level &, class BlockSource &, class BlockPos);
    /*20*/ virtual void _playBreakProgressSound(class Level &, class BlockSource &, class BlockPos);
    /*21*/ virtual void _playDestroySound(class Level &, class BlockSource &, class BlockPos);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STOMPEGGGOAL
public:
#endif
    MCAPI StompEggGoal(class Mob &, float, int, int, float, int);


};