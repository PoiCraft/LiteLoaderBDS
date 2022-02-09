// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FlintAndSteelItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLINTANDSTEELITEM
public:
    class FlintAndSteelItem& operator=(class FlintAndSteelItem const&) = delete;
    FlintAndSteelItem(class FlintAndSteelItem const&) = delete;
    FlintAndSteelItem() = delete;
#endif

public:
    /*0*/ virtual ~FlintAndSteelItem();
    /*2*/ virtual void tearDown();
    /*3*/ virtual int getMaxUseDuration(class ItemStack const*) const;
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual bool isArmor() const;
    /*9*/ virtual bool isBlockPlanterItem() const;
    /*10*/ virtual void __unk_vfn_10();
    /*12*/ virtual void __unk_vfn_12();
    /*14*/ virtual bool isDyeable() const;
    /*15*/ virtual bool isDye() const;
    /*17*/ virtual void __unk_vfn_17();
    /*18*/ virtual bool isFood() const;
    /*19*/ virtual void __unk_vfn_19();
    /*20*/ virtual bool isUseable() const;
    /*21*/ virtual class ItemComponent* getComponent(class HashedString const&) const;
    /*24*/ virtual class FuelItemComponent* getFuel() const;
    /*38*/ virtual enum BlockShape getBlockShape() const;
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual int getLevelDataForAuxValue(int) const;
    /*43*/ virtual short getMaxDamage() const;
    /*44*/ virtual void __unk_vfn_44();
    /*46*/ virtual bool isGlint(class ItemStackBase const&) const;
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual int getPatternIndex() const;
    /*49*/ virtual void __unk_vfn_49();
    /*50*/ virtual bool isWearableThroughLootTable(class CompoundTag const*) const;
    /*51*/ virtual bool canDestroyInCreative() const;
    /*52*/ virtual bool isDestructive(int) const;
    /*53*/ virtual bool isLiquidClipItem(int) const;
    /*54*/ virtual bool shouldInteractionWithBlockBypassLiquid(class Block const&) const;
    /*55*/ virtual bool requiresInteract() const;
    /*57*/ virtual bool isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;
    /*58*/ virtual int getEnchantSlot() const;
    /*59*/ virtual int getEnchantValue() const;
    /*60*/ virtual int getArmorValue() const;
    /*61*/ virtual void __unk_vfn_61();
    /*62*/ virtual bool isValidAuxValue(int) const;
    /*64*/ virtual void __unk_vfn_64();
    /*65*/ virtual void __unk_vfn_65();
    /*66*/ virtual void __unk_vfn_66();
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;
    /*69*/ virtual bool hasCustomColor(class CompoundTag const*) const;
    /*70*/ virtual void __unk_vfn_70();
    /*71*/ virtual void clearColor(class ItemStackBase&) const;
    /*72*/ virtual void clearColor(class CompoundTag*) const;
    /*73*/ virtual void setColor(class ItemStackBase&, class mce::Color const&) const;
    /*74*/ virtual void __unk_vfn_74();
    /*75*/ virtual void __unk_vfn_75();
    /*77*/ virtual void __unk_vfn_77();
    /*78*/ virtual void __unk_vfn_78();
    /*80*/ virtual bool canUseOnSimTick() const;
    /*82*/ virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /*85*/ virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const;
    /*86*/ virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;
    /*87*/ virtual void hitActor(class ItemStack&, class Actor&, class Mob&) const;
    /*88*/ virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&) const;
    /*89*/ virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*) const;
    /*90*/ virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;
    /*91*/ virtual std::string buildDescriptionName(class ItemStackBase const&) const;
    /*97*/ virtual unsigned char getMaxStackSize(class ItemDescriptor const&) const;
    /*98*/ virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool) const;
    /*99*/ virtual void refreshedInContainer(class ItemStackBase const&, class Level&) const;
    /*103*/ virtual void fixupCommon(class ItemStackBase&, class Level&) const;
    /*106*/ virtual enum InHandUpdateType getInHandUpdateType(class Player const&, class ItemInstance const&, class ItemInstance const&, bool, bool) const;
    /*107*/ virtual enum InHandUpdateType getInHandUpdateType(class Player const&, class ItemStack const&, class ItemStack const&, bool, bool) const;
    /*108*/ virtual bool validFishInteraction(int) const;
    /*111*/ virtual std::string getInteractText(class Player const&) const;
    /*112*/ virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;
    /*116*/ virtual int getIconYOffset() const;
    /*120*/ virtual bool canBeCharged() const;
    /*121*/ virtual void playSoundIncrementally(class ItemStack const&, class Mob&) const;
    /*122*/ virtual void __unk_vfn_122();
    /*125*/ virtual std::string getAuxValuesDescription() const;
    /*127*/ virtual bool _calculatePlacePos(class ItemStackBase&, class Actor&, unsigned char&, class BlockPos&) const;
    /*128*/ virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos, unsigned char, class Vec3 const&) const;
    MCAPI FlintAndSteelItem(std::string const&, int);

protected:

private:

};