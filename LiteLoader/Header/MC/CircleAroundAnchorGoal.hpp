// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CircleAroundAnchorGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CIRCLEAROUNDANCHORGOAL
public:
    class CircleAroundAnchorGoal& operator=(class CircleAroundAnchorGoal const &) = delete;
    CircleAroundAnchorGoal(class CircleAroundAnchorGoal const &) = delete;
    CircleAroundAnchorGoal() = delete;
#endif


public:
    /*0*/ virtual ~CircleAroundAnchorGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CIRCLEAROUNDANCHORGOAL
public:
#endif
    MCAPI CircleAroundAnchorGoal(class Mob &);

//private:
    MCAPI float _calculateHeightOffset() const;
    MCAPI void _selectNext();
    MCAPI void _setAnchorAboveTarget();

private:


};