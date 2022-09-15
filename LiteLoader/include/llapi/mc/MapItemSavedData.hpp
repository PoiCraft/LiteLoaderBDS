/**
 * @file  MapItemSavedData.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MapDecoration.hpp"
#include "MapItemTrackedActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MapItemSavedData.
 *
 */
class MapItemSavedData {

#define AFTER_EXTRA
// Add Member There
public:
struct ChunkBounds {
    ChunkBounds() = delete;
    ChunkBounds(ChunkBounds const&) = delete;
    ChunkBounds(ChunkBounds const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPITEMSAVEDDATA
public:
    class MapItemSavedData& operator=(class MapItemSavedData const &) = delete;
    MapItemSavedData(class MapItemSavedData const &) = delete;
    MapItemSavedData() = delete;
#endif

public:
    /**
     * @symbol ??0MapItemSavedData@@QEAA@UActorUniqueID@@@Z
     * @hash   631815099
     */
    MCAPI MapItemSavedData(struct ActorUniqueID);
    /**
     * @symbol ?addTrackedMapEntity@MapItemSavedData@@QEAA?AV?$shared_ptr@VMapItemTrackedActor@@@std@@AEAVActor@@W4Type@MapDecoration@@@Z
     * @hash   1805087251
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> addTrackedMapEntity(class Actor &, enum MapDecoration::Type);
    /**
     * @symbol ?addTrackedMapEntity@MapItemSavedData@@QEAA?AV?$shared_ptr@VMapItemTrackedActor@@@std@@AEBVBlockPos@@AEAVBlockSource@@W4Type@MapDecoration@@@Z
     * @hash   1205039368
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> addTrackedMapEntity(class BlockPos const &, class BlockSource &, enum MapDecoration::Type);
    /**
     * @symbol ?areClientPixelsDirty@MapItemSavedData@@QEBA_NXZ
     * @hash   1647482006
     */
    MCAPI bool areClientPixelsDirty() const;
    /**
     * @symbol ?copyMapData@MapItemSavedData@@QEAAXAEBV1@@Z
     * @hash   -997152183
     */
    MCAPI void copyMapData(class MapItemSavedData const &);
    /**
     * @symbol ?deserialize@MapItemSavedData@@QEAAXAEBVCompoundTag@@@Z
     * @hash   -724627068
     */
    MCAPI void deserialize(class CompoundTag const &);
    /**
     * @symbol ?enableUnlimitedTracking@MapItemSavedData@@QEAAXXZ
     * @hash   1852808163
     */
    MCAPI void enableUnlimitedTracking();
    /**
     * @symbol ?getClientPixels@MapItemSavedData@@QEAAAEAV?$vector@UClientTerrainPixel@@V?$allocator@UClientTerrainPixel@@@std@@@std@@XZ
     * @hash   -1267638106
     */
    MCAPI std::vector<struct ClientTerrainPixel> & getClientPixels();
    /**
     * @symbol ?getClientSamplingLock@MapItemSavedData@@QEAAPEAVSpinLock@@XZ
     * @hash   -972173887
     */
    MCAPI class SpinLock * getClientSamplingLock();
    /**
     * @symbol ?getFullDataPacket@MapItemSavedData@@QEBA?AV?$unique_ptr@VPacket@@U?$default_delete@VPacket@@@std@@@std@@XZ
     * @hash   -221353830
     */
    MCAPI std::unique_ptr<class Packet> getFullDataPacket() const;
    /**
     * @symbol ?getMapId@MapItemSavedData@@QEBA?AUActorUniqueID@@XZ
     * @hash   -308648578
     */
    MCAPI struct ActorUniqueID getMapId() const;
    /**
     * @symbol ?getParentMapId@MapItemSavedData@@QEBA?AUActorUniqueID@@XZ
     * @hash   112876058
     */
    MCAPI struct ActorUniqueID getParentMapId() const;
    /**
     * @symbol ?getPixels@MapItemSavedData@@QEBA?AV?$buffer_span@I@@XZ
     * @hash   2023149920
     */
    MCAPI class buffer_span<unsigned int> getPixels() const;
    /**
     * @symbol ?getTrackedMapEntity@MapItemSavedData@@QEAA?AV?$shared_ptr@VMapItemTrackedActor@@@std@@AEAVActor@@@Z
     * @hash   -1081409526
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> getTrackedMapEntity(class Actor &);
    /**
     * @symbol ?getTrackedMapEntity@MapItemSavedData@@QEAA?AV?$shared_ptr@VMapItemTrackedActor@@@std@@AEBVBlockPos@@AEAVBlockSource@@@Z
     * @hash   -1661412233
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> getTrackedMapEntity(class BlockPos const &, class BlockSource &);
    /**
     * @symbol ?getUpdatePacket@MapItemSavedData@@QEBA?AV?$unique_ptr@VPacket@@U?$default_delete@VPacket@@@std@@@std@@AEBVItemStack@@AEAVLevel@@AEAVActor@@@Z
     * @hash   -1936244627
     */
    MCAPI std::unique_ptr<class Packet> getUpdatePacket(class ItemStack const &, class Level &, class Actor &) const;
    /**
     * @symbol ?getUpdatePacket@MapItemSavedData@@QEBA?AV?$unique_ptr@VPacket@@U?$default_delete@VPacket@@@std@@@std@@AEAVLevel@@AEBVBlockPos@@@Z
     * @hash   1627419036
     */
    MCAPI std::unique_ptr<class Packet> getUpdatePacket(class Level &, class BlockPos const &) const;
    /**
     * @symbol ?hasParentMap@MapItemSavedData@@QEBA_NXZ
     * @hash   -802862310
     */
    MCAPI bool hasParentMap() const;
    /**
     * @symbol ?isAdjacent@MapItemSavedData@@QEBA_NAEBV1@H@Z
     * @hash   -1289885469
     */
    MCAPI bool isAdjacent(class MapItemSavedData const &, int) const;
    /**
     * @symbol ?isChunkAllEmpty@MapItemSavedData@@QEBA_NUChunkBounds@1@@Z
     * @hash   -685538820
     */
    MCAPI bool isChunkAllEmpty(struct MapItemSavedData::ChunkBounds) const;
    /**
     * @symbol ?isFullyExplored@MapItemSavedData@@QEBA_NXZ
     * @hash   -68615874
     */
    MCAPI bool isFullyExplored() const;
    /**
     * @symbol ?isLocked@MapItemSavedData@@QEBA_NXZ
     * @hash   556048386
     */
    MCAPI bool isLocked() const;
    /**
     * @symbol ?removeTrackedMapEntity@MapItemSavedData@@QEAAXAEBVBlockPos@@@Z
     * @hash   1891351550
     */
    MCAPI void removeTrackedMapEntity(class BlockPos const &);
    /**
     * @symbol ?save@MapItemSavedData@@QEAAXAEAVLevelStorage@@@Z
     * @hash   1020353400
     */
    MCAPI void save(class LevelStorage &);
    /**
     * @symbol ?serialize@MapItemSavedData@@QEBAXAEAVCompoundTag@@@Z
     * @hash   -1486416536
     */
    MCAPI void serialize(class CompoundTag &) const;
    /**
     * @symbol ?setClientPixelsDirty@MapItemSavedData@@QEAAX_N@Z
     * @hash   1091840338
     */
    MCAPI void setClientPixelsDirty(bool);
    /**
     * @symbol ?setDirtyForSaveAndPixelData@MapItemSavedData@@QEAAXXZ
     * @hash   -1753906445
     */
    MCAPI void setDirtyForSaveAndPixelData();
    /**
     * @symbol ?setLocked@MapItemSavedData@@QEAAXXZ
     * @hash   -1043110877
     */
    MCAPI void setLocked();
    /**
     * @symbol ?setMapSection@MapItemSavedData@@QEAAXV?$buffer_span@I@@UChunkBounds@1@@Z
     * @hash   1520173302
     */
    MCAPI void setMapSection(class buffer_span<unsigned int>, struct MapItemSavedData::ChunkBounds);
    /**
     * @symbol ?setOrigin@MapItemSavedData@@QEAAXVVec3@@HV?$AutomaticID@VDimension@@H@@_N2AEBVBlockPos@@@Z
     * @hash   -881696182
     */
    MCAPI void setOrigin(class Vec3, int, class AutomaticID<class Dimension, int>, bool, bool, class BlockPos const &);
    /**
     * @symbol ?setPixel@MapItemSavedData@@QEAA_NIII@Z
     * @hash   -1251401869
     */
    MCAPI bool setPixel(unsigned int, unsigned int, unsigned int);
    /**
     * @symbol ?setPixelDirty@MapItemSavedData@@QEAAXII@Z
     * @hash   1051585643
     */
    MCAPI void setPixelDirty(unsigned int, unsigned int);
    /**
     * @symbol ?setScale@MapItemSavedData@@QEAAXH@Z
     * @hash   2118470982
     */
    MCAPI void setScale(int);
    /**
     * @symbol ?setScaleAndParentMapId@MapItemSavedData@@QEAAXHUActorUniqueID@@@Z
     * @hash   -1145877635
     */
    MCAPI void setScaleAndParentMapId(int, struct ActorUniqueID);
    /**
     * @symbol ?tickByBlock@MapItemSavedData@@QEAAXAEBVBlockPos@@AEAVBlockSource@@@Z
     * @hash   -1467106891
     */
    MCAPI void tickByBlock(class BlockPos const &, class BlockSource &);
    /**
     * @symbol ?tickCarriedBy@MapItemSavedData@@QEAAXAEAVActor@@PEBVCompoundTag@@@Z
     * @hash   1595557184
     */
    MCAPI void tickCarriedBy(class Actor &, class CompoundTag const *);
    /**
     * @symbol ?trySave@MapItemSavedData@@QEAAXAEAVLevelStorage@@@Z
     * @hash   1617043568
     */
    MCAPI void trySave(class LevelStorage &);
    /**
     * @symbol ??1MapItemSavedData@@QEAA@XZ
     * @hash   -159120948
     */
    MCAPI ~MapItemSavedData();
    /**
     * @symbol ?getSerializationKey@MapItemSavedData@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@@Z
     * @hash   -514043703
     */
    MCAPI static std::string getSerializationKey(struct ActorUniqueID);

//private:
    /**
     * @symbol ?_addDecoration@MapItemSavedData@@AEAAXW4Type@MapDecoration@@AEAVLevel@@AEBUUniqueId@MapItemTrackedActor@@AEBVVec3@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVColor@mce@@@Z
     * @hash   -748820563
     */
    MCAPI void _addDecoration(enum MapDecoration::Type, class Level &, struct MapItemTrackedActor::UniqueId const &, class Vec3 const &, std::string const &, class mce::Color const &);
    /**
     * @symbol ?_addTrackedMapEntity@MapItemSavedData@@AEAA?AV?$shared_ptr@VMapItemTrackedActor@@@std@@AEBUUniqueId@MapItemTrackedActor@@AEAVBlockSource@@W4Type@MapDecoration@@@Z
     * @hash   1205605149
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> _addTrackedMapEntity(struct MapItemTrackedActor::UniqueId const &, class BlockSource &, enum MapDecoration::Type);
    /**
     * @symbol ?_deserializeData@MapItemSavedData@@AEAAXAEBVCompoundTag@@@Z
     * @hash   144598230
     */
    MCAPI void _deserializeData(class CompoundTag const &);
    /**
     * @symbol ?_findTrackedMapEntity@MapItemSavedData@@AEBA?AV?$shared_ptr@VMapItemTrackedActor@@@std@@AEBVBlockPos@@@Z
     * @hash   1652492674
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> _findTrackedMapEntity(class BlockPos const &) const;
    /**
     * @symbol ?_removeDecoration@MapItemSavedData@@AEAAXAEBUUniqueId@MapItemTrackedActor@@@Z
     * @hash   449394169
     */
    MCAPI void _removeDecoration(struct MapItemTrackedActor::UniqueId const &);
    /**
     * @symbol ?_removeTrackedMapEntity@MapItemSavedData@@AEAAXAEBUUniqueId@MapItemTrackedActor@@@Z
     * @hash   220142068
     */
    MCAPI void _removeTrackedMapEntity(struct MapItemTrackedActor::UniqueId const &);
    /**
     * @symbol ?_updateTrackedEntityDecoration@MapItemSavedData@@AEAA_NAEAVBlockSource@@V?$shared_ptr@VMapItemTrackedActor@@@std@@@Z
     * @hash   1580143239
     */
    MCAPI bool _updateTrackedEntityDecoration(class BlockSource &, class std::shared_ptr<class MapItemTrackedActor>);
    /**
     * @symbol ?_updateTrackedEntityDecorations@MapItemSavedData@@AEAAXAEAVBlockSource@@@Z
     * @hash   1529198380
     */
    MCAPI void _updateTrackedEntityDecorations(class BlockSource &);
    /**
     * @symbol ?_updateTrackedPlayerDecorations@MapItemSavedData@@AEAAXAEAVBlockSource@@AEAVPlayer@@AEAVVec3@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVColor@mce@@V?$AutomaticID@VDimension@@H@@AEAW4Type@MapDecoration@@@Z
     * @hash   731732970
     */
    MCAPI void _updateTrackedPlayerDecorations(class BlockSource &, class Player &, class Vec3 &, std::string &, class mce::Color &, class AutomaticID<class Dimension, int>, enum MapDecoration::Type &);

private:

};