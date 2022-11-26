/**
 * @file  StructureSettings.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructureSettings.
 *
 */
class StructureSettings {

#define AFTER_EXTRA
// Add Member There
private:
char filler[104];

public:
inline StructureSettings(BlockPos const& size, bool ignoreEntities, bool ignoreBlocks)
    : StructureSettings()
{
    setIgnoreBlocks(ignoreBlocks);
    setIgnoreEntities(ignoreEntities);
    setStructureSize(size);
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURESETTINGS
public:
    StructureSettings(class StructureSettings const &) = delete;
#endif

public:
    /**
     * @symbol ??0StructureSettings@@QEAA@XZ
     * @hash   -688208206
     */
    MCAPI StructureSettings();
    /**
     * @symbol ??0StructureSettings@@QEAA@$$QEAV0@@Z
     * @hash   -2008421851
     */
    MCAPI StructureSettings(class StructureSettings &&);
    /**
     * @symbol ?getAnimationMode@StructureSettings@@QEBA?AW4AnimationMode@@XZ
     * @hash   -1682398980
     */
    MCAPI enum class AnimationMode getAnimationMode() const;
    /**
     * @symbol ?getAnimationSeconds@StructureSettings@@QEBAMXZ
     * @hash   -1592988664
     */
    MCAPI float getAnimationSeconds() const;
    /**
     * @symbol ?getAnimationTicks@StructureSettings@@QEBAIXZ
     * @hash   1048653026
     */
    MCAPI unsigned int getAnimationTicks() const;
    /**
     * @symbol ?getIgnoreBlocks@StructureSettings@@QEBA_NXZ
     * @hash   -1144534798
     */
    MCAPI bool getIgnoreBlocks() const;
    /**
     * @symbol ?getIgnoreEntities@StructureSettings@@QEBA_NXZ
     * @hash   -847074110
     */
    MCAPI bool getIgnoreEntities() const;
    /**
     * @symbol ?getIgnoreJigsawBlocks@StructureSettings@@QEBA_NXZ
     * @hash   -2094839598
     */
    MCAPI bool getIgnoreJigsawBlocks() const;
    /**
     * @symbol ?getIntegritySeed@StructureSettings@@QEBAIXZ
     * @hash   -1509280816
     */
    MCAPI unsigned int getIntegritySeed() const;
    /**
     * @symbol ?getIntegrityValue@StructureSettings@@QEBAMXZ
     * @hash   -855698790
     */
    MCAPI float getIntegrityValue() const;
    /**
     * @symbol ?getIsWaterLogged@StructureSettings@@QEBA_NXZ
     * @hash   -196040812
     */
    MCAPI bool getIsWaterLogged() const;
    /**
     * @symbol ?getLastTouchedByPlayerID@StructureSettings@@QEBA?AUActorUniqueID@@XZ
     * @hash   1877999750
     */
    MCAPI struct ActorUniqueID getLastTouchedByPlayerID() const;
    /**
     * @symbol ?getMirror@StructureSettings@@QEBA?AW4Mirror@@XZ
     * @hash   -1266873860
     */
    MCAPI enum class Mirror getMirror() const;
    /**
     * @symbol ?getPaletteName@StructureSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -56108996
     */
    MCAPI std::string const & getPaletteName() const;
    /**
     * @symbol ?getPivot@StructureSettings@@QEBAAEBVVec3@@XZ
     * @hash   -1033390782
     */
    MCAPI class Vec3 const & getPivot() const;
    /**
     * @symbol ?getReloadActorEquipment@StructureSettings@@QEBA_NXZ
     * @hash   -1403203806
     */
    MCAPI bool getReloadActorEquipment() const;
    /**
     * @symbol ?getRotation@StructureSettings@@QEBA?AW4Rotation@@XZ
     * @hash   892697870
     */
    MCAPI enum class Rotation getRotation() const;
    /**
     * @symbol ?getStructureOffset@StructureSettings@@QEBAAEBVBlockPos@@XZ
     * @hash   1659984210
     */
    MCAPI class BlockPos const & getStructureOffset() const;
    /**
     * @symbol ?getStructureSize@StructureSettings@@QEBAAEBVBlockPos@@XZ
     * @hash   1048887826
     */
    MCAPI class BlockPos const & getStructureSize() const;
    /**
     * @symbol ?isAnimated@StructureSettings@@QEBA_NXZ
     * @hash   -1885253836
     */
    MCAPI bool isAnimated() const;
    /**
     * @symbol ??4StructureSettings@@QEAAAEAV0@AEBV0@@Z
     * @hash   -1395511124
     */
    MCAPI class StructureSettings & operator=(class StructureSettings const &);
    /**
     * @symbol ??4StructureSettings@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   -2005530432
     */
    MCAPI class StructureSettings & operator=(class StructureSettings &&);
    /**
     * @symbol ?setAllowNonTickingPlayerAndTickingAreaChunks@StructureSettings@@QEAAX_N@Z
     * @hash   -68697320
     */
    MCAPI void setAllowNonTickingPlayerAndTickingAreaChunks(bool);
    /**
     * @symbol ?setAnimationMode@StructureSettings@@QEAAXW4AnimationMode@@@Z
     * @hash   75802448
     */
    MCAPI void setAnimationMode(enum class AnimationMode);
    /**
     * @symbol ?setAnimationSeconds@StructureSettings@@QEAAXM@Z
     * @hash   -1730573174
     */
    MCAPI void setAnimationSeconds(float);
    /**
     * @symbol ?setAnimationTicks@StructureSettings@@QEAAXI@Z
     * @hash   1754927304
     */
    MCAPI void setAnimationTicks(unsigned int);
    /**
     * @symbol ?setIgnoreBlocks@StructureSettings@@QEAAX_N@Z
     * @hash   1490139626
     */
    MCAPI void setIgnoreBlocks(bool);
    /**
     * @symbol ?setIgnoreEntities@StructureSettings@@QEAAX_N@Z
     * @hash   -679321702
     */
    MCAPI void setIgnoreEntities(bool);
    /**
     * @symbol ?setIgnoreJigsawBlocks@StructureSettings@@QEAAX_N@Z
     * @hash   -934645222
     */
    MCAPI void setIgnoreJigsawBlocks(bool);
    /**
     * @symbol ?setIntegritySeed@StructureSettings@@QEAAXI@Z
     * @hash   1630262170
     */
    MCAPI void setIntegritySeed(unsigned int);
    /**
     * @symbol ?setIntegrityValue@StructureSettings@@QEAAXM@Z
     * @hash   620133976
     */
    MCAPI void setIntegrityValue(float);
    /**
     * @symbol ?setIsWaterLogged@StructureSettings@@QEAAX_N@Z
     * @hash   1595630264
     */
    MCAPI void setIsWaterLogged(bool);
    /**
     * @symbol ?setLastTouchedByPlayerID@StructureSettings@@QEAAXUActorUniqueID@@@Z
     * @hash   87013996
     */
    MCAPI void setLastTouchedByPlayerID(struct ActorUniqueID);
    /**
     * @symbol ?setMirror@StructureSettings@@QEAAXW4Mirror@@@Z
     * @hash   1346024742
     */
    MCAPI void setMirror(enum class Mirror);
    /**
     * @symbol ?setPaletteName@StructureSettings@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1020893912
     */
    MCAPI void setPaletteName(std::string);
    /**
     * @symbol ?setPivot@StructureSettings@@QEAAXAEBVVec3@@@Z
     * @hash   926601238
     */
    MCAPI void setPivot(class Vec3 const &);
    /**
     * @symbol ?setReloadActorEquipment@StructureSettings@@QEAAX_N@Z
     * @hash   668116842
     */
    MCAPI void setReloadActorEquipment(bool);
    /**
     * @symbol ?setRotation@StructureSettings@@QEAAXW4Rotation@@@Z
     * @hash   -5005352
     */
    MCAPI void setRotation(enum class Rotation);
    /**
     * @symbol ?setStructureOffset@StructureSettings@@QEAAXAEBVBlockPos@@@Z
     * @hash   375706022
     */
    MCAPI void setStructureOffset(class BlockPos const &);
    /**
     * @symbol ?setStructureSize@StructureSettings@@QEAAXAEBVBlockPos@@@Z
     * @hash   -778812090
     */
    MCAPI void setStructureSize(class BlockPos const &);
    /**
     * @symbol ?shouldAllowNonTickingPlayerAndTickingAreaChunks@StructureSettings@@QEBA_NXZ
     * @hash   1294879282
     */
    MCAPI bool shouldAllowNonTickingPlayerAndTickingAreaChunks() const;
    /**
     * @symbol ??1StructureSettings@@QEAA@XZ
     * @hash   455548146
     */
    MCAPI ~StructureSettings();
    /**
     * @symbol ?DEFAULT_STRUCTURE_OFFSET@StructureSettings@@2VBlockPos@@B
     * @hash   -337731405
     */
    MCAPI static class BlockPos const DEFAULT_STRUCTURE_OFFSET;
    /**
     * @symbol ?DEFAULT_STRUCTURE_SIZE@StructureSettings@@2VBlockPos@@B
     * @hash   1706158527
     */
    MCAPI static class BlockPos const DEFAULT_STRUCTURE_SIZE;

};