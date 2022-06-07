// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class HomeComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOMECOMPONENT
public:
    class HomeComponent& operator=(class HomeComponent const &) = delete;
    HomeComponent(class HomeComponent const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HOMECOMPONENT
public:
#endif
    MCAPI HomeComponent();
    MCAPI void addAdditionalSaveData(class CompoundTag &);
    MCAPI class AutomaticID<class Dimension, int> getHomeDimension() const;
    MCAPI class BlockPos getHomePos() const;
    MCAPI int getRestrictionRadius() const;
    MCAPI bool hasRestriction() const;
    MCAPI bool hasValidHomePos() const;
    MCAPI bool isWithinRestriction(class BlockPos const &) const;
    MCAPI class HomeComponent & operator=(class HomeComponent &&);
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    MCAPI void setHome(class BlockPos const &, class AutomaticID<class Dimension, int> const &);
    MCAPI void tick(class Actor &);


};