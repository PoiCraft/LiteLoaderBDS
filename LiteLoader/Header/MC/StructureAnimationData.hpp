// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StructureAnimationData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREANIMATIONDATA
public:
    class StructureAnimationData& operator=(class StructureAnimationData const &) = delete;
    StructureAnimationData(class StructureAnimationData const &) = delete;
    StructureAnimationData() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTUREANIMATIONDATA
public:
#endif
    MCAPI StructureAnimationData(std::unique_ptr<class CommandArea>, unsigned __int64, std::string const &, class StructureSettings const &, unsigned char, class BlockPos const &);
    MCAPI bool allBlocksPlaced() const;
    MCAPI unsigned int getBlocksExpectedToPlace(unsigned __int64) const;
    MCAPI unsigned int getBlocksPlaced() const;
    MCAPI class BlockPos const & getPosition() const;
    MCAPI unsigned int getQueueID() const;
    MCAPI class BlockSource & getRegion() const;
    MCAPI std::string const & getStructureName() const;
    MCAPI class StructureSettings const & getStructureSettings() const;
    MCAPI unsigned char getStructureVersion() const;
    MCAPI class AutomaticID<class Dimension, int> const & getTargetDimension() const;
    MCAPI unsigned int getTotalBlocks() const;
    MCAPI class CompoundTag & serialize(class CompoundTag &);
    MCAPI void setBlocksPlaced(unsigned int);
    MCAPI void setCmdArea(std::unique_ptr<class CommandArea>);
    MCAPI void setQueueID(unsigned int);
    MCAPI void setTargetDimension(class AutomaticID<class Dimension, int> const &);
    MCAPI ~StructureAnimationData();
    MCAPI static class StructureAnimationData load(std::string const &, class CompoundTag const &);


};