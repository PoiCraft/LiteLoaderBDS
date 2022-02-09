// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "PredictableProjectile.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FallingBlock : public PredictableProjectile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FALLINGBLOCK
public:
    class FallingBlock& operator=(class FallingBlock const&) = delete;
    FallingBlock(class FallingBlock const&) = delete;
    FallingBlock() = delete;
#endif

public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const&);
    /*14*/ virtual ~FallingBlock();
    /*20*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*32*/ virtual float getInterpolatedHeadRot(float) const;
    /*33*/ virtual float getInterpolatedBodyYaw(float) const;
    /*41*/ virtual void __unk_vfn_41();
    /*43*/ virtual void teleportTo(class Vec3 const&, bool, int, int);
    /*48*/ virtual void normalTick();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*78*/ virtual float getCameraOffset() const;
    /*79*/ virtual float getShadowHeightOffs();
    /*80*/ virtual float getShadowRadius() const;
    /*82*/ virtual void __unk_vfn_82();
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual void playerTouch(class Player&);
    /*93*/ virtual bool isPickable();
    /*94*/ virtual void __unk_vfn_94();
    /*95*/ virtual bool isSleeping() const;
    /*96*/ virtual void setSleeping(bool);
    /*97*/ virtual void __unk_vfn_97();
    /*99*/ virtual bool isBlocking() const;
    /*100*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*104*/ virtual void __unk_vfn_104();
    /*105*/ virtual bool isSurfaceMob() const;
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*112*/ virtual class Actor* findAttackTarget();
    /*113*/ virtual bool isValidTarget(class Actor*) const;
    /*116*/ virtual void adjustDamageAmount(int&) const;
    /*120*/ virtual void onTame();
    /*121*/ virtual void onFailedTame();
    /*128*/ virtual bool isJumping() const;
    /*130*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*137*/ virtual void animateHurt();
    /*140*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*152*/ virtual void awardKillScore(class Actor&, int);
    /*156*/ virtual enum ArmorMaterialType getArmorMaterialTypeInSlot(enum ArmorSlot) const;
    /*157*/ virtual enum ArmorTextureType getArmorMaterialTextureTypeInSlot(enum ArmorSlot) const;
    /*158*/ virtual float getArmorColorInSlot(enum ArmorSlot, int) const;
    /*160*/ virtual void setEquippedSlot(enum EquipmentSlot, class ItemStack const&);
    /*172*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*174*/ virtual bool canFreeze() const;
    /*179*/ virtual int getPortalWaitTime() const;
    /*181*/ virtual bool canChangeDimensions() const;
    /*182*/ virtual void __unk_vfn_182();
    /*184*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*186*/ virtual void causeFallDamage(float, float, class ActorDamageSource);
    /*191*/ virtual void onSynchedDataUpdate(int);
    /*193*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*194*/ virtual bool canBePulledIntoVehicle() const;
    /*195*/ virtual bool inCaravan() const;
    /*196*/ virtual void __unk_vfn_196();
    /*199*/ virtual bool canSynchronizeNewEntity() const;
    /*203*/ virtual void buildDebugInfo(std::string&) const;
    /*208*/ virtual int getDeathTime() const;
    /*219*/ virtual void swing();
    /*221*/ virtual void __unk_vfn_221();
    /*222*/ virtual void __unk_vfn_222();
    /*226*/ virtual float getYHeadRot() const;
    /*227*/ virtual bool isWorldBuilder() const;
    /*228*/ virtual bool isCreative() const;
    /*229*/ virtual bool isAdventure() const;
    /*233*/ virtual bool canDestroyBlock(class Block const&) const;
    /*234*/ virtual void __unk_vfn_234();
    /*240*/ virtual void stopSpinAttack();
    /*242*/ virtual void __unk_vfn_242();
    /*245*/ virtual void __unk_vfn_245();
    /*255*/ virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /*257*/ virtual void __unk_vfn_257();
    /*258*/ virtual bool _hurt(class ActorDamageSource const&, int, bool, bool);
    /*261*/ virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /*262*/ virtual void addAdditionalSaveData(class CompoundTag&);
    /*265*/ virtual void __unk_vfn_265();
    /*273*/ virtual void _onSizeUpdated();
    /*
    inline float getDeletionDelayTimeSeconds() const{
        float (FallingBlock::*rv)() const;
        *((void**)&rv) = dlsym("?getDeletionDelayTimeSeconds@FallingBlock@@UEBAMXZ");
        return (this->*rv)();
    }
    */
    MCAPI FallingBlock(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);
    MCAPI class Block const& getFallingBlock() const;
    MCAPI void setFallDamageAmount(float);
    MCAPI void setFallingBlock(class Block const&, bool);

protected:

private:
    MCAPI void _breakBlock();
    MCAPI void _waitRemoval();

};