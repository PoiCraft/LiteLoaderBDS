/**
 * @file  ManagedWanderingTraderDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ManagedWanderingTraderDescription.
 *
 */
class ManagedWanderingTraderDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MANAGEDWANDERINGTRADERDESCRIPTION
public:
    class ManagedWanderingTraderDescription& operator=(class ManagedWanderingTraderDescription const &) = delete;
    ManagedWanderingTraderDescription(class ManagedWanderingTraderDescription const &) = delete;
    ManagedWanderingTraderDescription() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@ManagedWanderingTraderDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@MobEffectChangeDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MANAGEDWANDERINGTRADERDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ManagedWanderingTraderDescription();
#endif

};
