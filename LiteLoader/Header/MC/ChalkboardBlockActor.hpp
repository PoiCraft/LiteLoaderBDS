// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ChalkboardBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHALKBOARDBLOCKACTOR
public:
    class ChalkboardBlockActor& operator=(class ChalkboardBlockActor const &) = delete;
    ChalkboardBlockActor(class ChalkboardBlockActor const &) = delete;
    ChalkboardBlockActor() = delete;
#endif


public:
    /*0*/ virtual ~ChalkboardBlockActor();
    /*1*/ virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /*2*/ virtual bool save(class CompoundTag &) const;
    /*7*/ virtual void tick(class BlockSource &);
    /*8*/ virtual void onChanged(class BlockSource &);
    /*12*/ virtual void __unk_vfn_12();
    /*16*/ virtual void __unk_vfn_16();
    /*17*/ virtual float getShadowRadius(class BlockSource &) const;
    /*25*/ virtual std::string getImmersiveReaderText(class BlockSource &);
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /*35*/ virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHALKBOARDBLOCKACTOR
public:
#endif
    MCAPI ChalkboardBlockActor(class BlockPos const &);
    MCAPI enum ChalkboardSize const getChalkboardSize() const;
    MCAPI bool getLocked() const;
    MCAPI int getTextCharCount() const;
    MCAPI void setText(std::string const &);
    MCAPI void validate(class BlockSource &);
    MCAPI static std::vector<class BlockPos> calculateAllBlocks(class BlockPos const &, enum ChalkboardSize, int);
    MCAPI static bool canCreateChalkboard(class Actor *, class BlockSource &, class BlockPos const &, enum ChalkboardSize, unsigned char, int, std::vector<class BlockPos> &, class ItemStack const &, bool);
    MCAPI static class ChalkboardBlockActor * convertFromEntity(class BlockSource &, class CompoundTag const &);
    MCAPI static class ChalkboardBlockActor * createChalkboard(class Actor *, class BlockSource &, class BlockPos const &, enum ChalkboardSize, unsigned char, int, bool, class ItemStack const &, std::string);

//private:
    MCAPI static struct ChalkboardBlockActor::ChalkboardFinder _findChalkboard(class BlockSource &, class BlockPos const &);

private:


};