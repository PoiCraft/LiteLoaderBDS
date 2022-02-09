// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorDamageSource.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorDamageByActorSource : public ActorDamageSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDAMAGEBYACTORSOURCE
public:
    class ActorDamageByActorSource& operator=(class ActorDamageByActorSource const&) = delete;
    ActorDamageByActorSource(class ActorDamageByActorSource const&) = delete;
    ActorDamageByActorSource() = delete;
#endif

public:
    /*0*/ virtual ~ActorDamageByActorSource();
    /*1*/ virtual bool isEntitySource() const;
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*5*/ virtual struct std::pair<std::string, std::vector<std::string> > getDeathMessage(std::string, class Actor*) const;
    /*6*/ virtual bool getIsCreative() const;
    /*7*/ virtual bool getIsWorldBuilder() const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual enum ActorCategory getEntityCategories() const;
    /*11*/ virtual void __unk_vfn_11();
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual struct ActorUniqueID getDamagingEntityUniqueID() const;
    /*14*/ virtual enum ActorType getDamagingEntityType() const;
    /*15*/ virtual void __unk_vfn_15();
    /*16*/ virtual std::unique_ptr<class ActorDamageSource> clone() const;
    /*
    inline  ~ActorDamageByActorSource(){
         (ActorDamageByActorSource::*rv)();
        *((void**)&rv) = dlsym("??1ActorDamageByActorSource@@UEAA@XZ");
        return (this->*rv)();
    }
    inline enum ActorType getEntityType() const{
        enum ActorType (ActorDamageByActorSource::*rv)() const;
        *((void**)&rv) = dlsym("?getEntityType@ActorDamageByActorSource@@UEBA?AW4ActorType@@XZ");
        return (this->*rv)();
    }
    inline struct ActorUniqueID getEntityUniqueID() const{
        struct ActorUniqueID (ActorDamageByActorSource::*rv)() const;
        *((void**)&rv) = dlsym("?getEntityUniqueID@ActorDamageByActorSource@@UEBA?AUActorUniqueID@@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ActorDamageByActorSource(class Actor&, enum ActorDamageCause);

protected:

private:

};