/**
 * @file  TickingAreaView.hpp
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
 * @brief MC class TickingAreaView.
 *
 */
class TickingAreaView {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKINGAREAVIEW
public:
    class TickingAreaView& operator=(class TickingAreaView const &) = delete;
    TickingAreaView(class TickingAreaView const &) = delete;
    TickingAreaView() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   742146533
     */
    virtual ~TickingAreaView();
    /**
     * @vftbl  1
     * @symbol ?init@TickingAreaView@@UEAAXAEBUBounds@@_N@Z
     * @hash   -1007586397
     */
    virtual void init(struct Bounds const &, bool);
    /**
     * @vftbl  2
     * @symbol ?tick@TickingAreaView@@UEAAXAEBUTick@@AEAVBlockSource@@_N2@Z
     * @hash   1256222936
     */
    virtual void tick(struct Tick const &, class BlockSource &, bool, bool);
    /**
     * @vftbl  3
     * @symbol ?tickSeasons@TickingAreaView@@UEAAXAEAVBlockSource@@AEAVRandom@@@Z
     * @hash   -732920032
     */
    virtual void tickSeasons(class BlockSource &, class Random &);
    /**
     * @vftbl  4
     * @symbol ?getDimensionId@TickingAreaView@@UEBA?AV?$AutomaticID@VDimension@@H@@XZ
     * @hash   -918789520
     */
    virtual class AutomaticID<class Dimension, int> getDimensionId() const;
    /**
     * @vftbl  5
     * @symbol ?getBounds@TickingAreaView@@UEBAAEBUBounds@@XZ
     * @hash   87840105
     */
    virtual struct Bounds const & getBounds() const;
    /**
     * @vftbl  6
     * @symbol ?isCircle@TickingAreaView@@UEBA_NXZ
     * @hash   1585661339
     */
    virtual bool isCircle() const;
    /**
     * @vftbl  7
     * @symbol ?isDoneLoading@TickingAreaView@@UEBA_NXZ
     * @hash   610123761
     */
    virtual bool isDoneLoading() const;
    /**
     * @vftbl  8
     * @symbol ?checkInitialLoadDone@TickingAreaView@@UEAA_NUTick@@@Z
     * @hash   1135531085
     */
    virtual bool checkInitialLoadDone(struct Tick);
    /**
     * @vftbl  9
     * @symbol ?checkLoadedChunkNeighborsDone@TickingAreaView@@UEBA_NAEBVBlockSource@@_N@Z
     * @hash   1464751343
     */
    virtual bool checkLoadedChunkNeighborsDone(class BlockSource const &, bool) const;
    /**
     * @vftbl  10
     * @symbol ?move@TickingAreaView@@UEAAXAEBUBounds@@@Z
     * @hash   1034690440
     */
    virtual void move(struct Bounds const &);
    /**
     * @vftbl  11
     * @symbol ?createChildSource@TickingAreaView@@UEAA?AV?$unique_ptr@VChunkViewSource@@U?$default_delete@VChunkViewSource@@@std@@@std@@XZ
     * @hash   1603000194
     */
    virtual std::unique_ptr<class ChunkViewSource> createChildSource();
    /**
     * @vftbl  12
     * @symbol ?getAvailableChunk@TickingAreaView@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@@Z
     * @hash   -1760215713
     */
    virtual class std::shared_ptr<class LevelChunk> getAvailableChunk(class ChunkPos const &);
    /**
     * @symbol ??0TickingAreaView@@QEAA@AEAVChunkSource@@@Z
     * @hash   -1393089210
     */
    MCAPI TickingAreaView(class ChunkSource &);
    /**
     * @symbol ?unregisterChunkBuildOrderPolicy@TickingAreaView@@QEAAXAEAVChunkBuildOrderPolicyBase@@@Z
     * @hash   1843671294
     */
    MCAPI void unregisterChunkBuildOrderPolicy(class ChunkBuildOrderPolicyBase &);

//private:
    /**
     * @symbol ?_tickChunk@TickingAreaView@@AEAA_NAEBUTick@@AEAVBlockSource@@AEAVLevel@@AEBVChunkPos@@@Z
     * @hash   571463461
     */
    MCAPI bool _tickChunk(struct Tick const &, class BlockSource &, class Level &, class ChunkPos const &);

private:

};