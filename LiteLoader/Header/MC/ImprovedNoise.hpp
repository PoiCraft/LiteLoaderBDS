// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ImprovedNoise {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMPROVEDNOISE
public:
    class ImprovedNoise& operator=(class ImprovedNoise const &) = delete;
    ImprovedNoise(class ImprovedNoise const &) = delete;
    ImprovedNoise() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IMPROVEDNOISE
public:
#endif
    MCAPI ImprovedNoise(class IRandom &, struct YBlendingBugSettings);
    MCAPI float _getValue(class Vec3 const &) const;
    MCAPI void _readArea(float *, class Vec3 const &, int, int, int, class Vec3 const &, float) const;

//private:
    MCAPI void _blendCubeCorners(class Vec3 const &, int, int, int, float, float &, float &, float &, float &) const;
    MCAPI void _init(class Vec3 const &, class IRandom &, struct YBlendingBugSettings);

private:


};