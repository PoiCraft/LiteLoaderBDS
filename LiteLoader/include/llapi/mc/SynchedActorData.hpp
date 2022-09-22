/**
 * @file  SynchedActorData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "DataItem.hpp"
#define ACTOR_DATA_KEY_VALUE(key) constexpr int16_t key = (unsigned short)ActorDataIDs::key
namespace ActorDataKeys
{
ACTOR_DATA_KEY_VALUE(FLAGS);                               // Int64
ACTOR_DATA_KEY_VALUE(HEALTH);                              // Int (minecart/boat)
ACTOR_DATA_KEY_VALUE(VARIANT);                             // Int
ACTOR_DATA_KEY_VALUE(COLOR);                               // Byte
ACTOR_DATA_KEY_VALUE(NAMETAG);                             // String
ACTOR_DATA_KEY_VALUE(OWNER);                               // Int64
ACTOR_DATA_KEY_VALUE(TARGET);                              // Int64
ACTOR_DATA_KEY_VALUE(AIR);                                 // Short
ACTOR_DATA_KEY_VALUE(POTION_COLOR);                        // Int (ARGB!)
ACTOR_DATA_KEY_VALUE(POTION_AMBIENT);                      // Byte
ACTOR_DATA_KEY_VALUE(JUMP_DURATION);                       // Int64
ACTOR_DATA_KEY_VALUE(HURT_TIME);                           // Int (minecart/boat)
ACTOR_DATA_KEY_VALUE(HURT_DIRECTION);                      // Int (minecart/boat)
ACTOR_DATA_KEY_VALUE(PADDLE_TIME_LEFT);                    // Float
ACTOR_DATA_KEY_VALUE(PADDLE_TIME_RIGHT);                   // Float
ACTOR_DATA_KEY_VALUE(EXPERIENCE_VALUE);                    // Int (xp orb)
ACTOR_DATA_KEY_VALUE(DISPLAY_ITEM);                        // Int (id | (data << 16))
ACTOR_DATA_KEY_VALUE(HORSE_FLAGS);                         // Int
ACTOR_DATA_KEY_VALUE(WITHER_SKULL_IS_DANGEROUS);           // Byte
ACTOR_DATA_KEY_VALUE(MINECART_DISPLAY_OFFSET);             // Int
ACTOR_DATA_KEY_VALUE(ARROW_SHOOTER_ID);                    // Int64
ACTOR_DATA_KEY_VALUE(MINECART_HAS_DISPLAY);                // Byte (must be 1 for minecart to show block inside)
ACTOR_DATA_KEY_VALUE(HORSE_TYPE);
ACTOR_DATA_KEY_VALUE(SWELL);
ACTOR_DATA_KEY_VALUE(OLD_SWELL);
ACTOR_DATA_KEY_VALUE(SWELL_DIR);
ACTOR_DATA_KEY_VALUE(CHARGE_AMOUNT);
ACTOR_DATA_KEY_VALUE(ENDERMAN_HELD_RUNTIME_ID);            // Short
ACTOR_DATA_KEY_VALUE(ACTOR_AGE);                           // Short
ACTOR_DATA_KEY_VALUE(PLAYER_FLAGS);                        // Byte
ACTOR_DATA_KEY_VALUE(PLAYER_INDEX);
ACTOR_DATA_KEY_VALUE(PLAYER_BED_POSITION);                 // BlockPos
ACTOR_DATA_KEY_VALUE(FIREBALL_POWER_X);                    // Float
ACTOR_DATA_KEY_VALUE(FIREBALL_POWER_Y);                    // Float
ACTOR_DATA_KEY_VALUE(FIREBALL_POWER_Z);                    // Float
ACTOR_DATA_KEY_VALUE(AUX_POWER);
ACTOR_DATA_KEY_VALUE(FISH_X);
ACTOR_DATA_KEY_VALUE(FISH_Z);
ACTOR_DATA_KEY_VALUE(FISH_ANGLE);
ACTOR_DATA_KEY_VALUE(POTION_AUX_VALUE);                    // Short
ACTOR_DATA_KEY_VALUE(LEAD_HOLDER);                         // Int64
ACTOR_DATA_KEY_VALUE(SCALE);                               // Float
ACTOR_DATA_KEY_VALUE(INTERACTIVE_TAG);                     // String
ACTOR_DATA_KEY_VALUE(NPC_SKIN_ID);                         // String
ACTOR_DATA_KEY_VALUE(URL_TAG);                             // String
ACTOR_DATA_KEY_VALUE(MAX_AIR);                             // Short
ACTOR_DATA_KEY_VALUE(MARK_VARIANT);                        // Int
ACTOR_DATA_KEY_VALUE(CONTAINER_TYPE);                      // Byte
ACTOR_DATA_KEY_VALUE(CONTAINER_BASE_SIZE);                 // Int
ACTOR_DATA_KEY_VALUE(CONTAINER_EXTRA_SLOTS_PER_STRENGTH);  // Int
ACTOR_DATA_KEY_VALUE(BLOCK_TARGET);                        // BlockPos (ENDER CRYSTAL)
ACTOR_DATA_KEY_VALUE(WITHER_INVULNERABLE_TICKS);           // Int
ACTOR_DATA_KEY_VALUE(WITHER_TARGET_1);                     // Int64
ACTOR_DATA_KEY_VALUE(WITHER_TARGET_2);                     // Int64
ACTOR_DATA_KEY_VALUE(WITHER_TARGET_3);                     // Int64
ACTOR_DATA_KEY_VALUE(AERIAL_ATTACK);
ACTOR_DATA_KEY_VALUE(BOUNDING_BOX_WIDTH);                  // Float
ACTOR_DATA_KEY_VALUE(BOUNDING_BOX_HEIGHT);                 // Float
ACTOR_DATA_KEY_VALUE(FUSE_LENGTH);                         // Int
ACTOR_DATA_KEY_VALUE(RIDER_SEAT_POSITION);                 // Vec3
ACTOR_DATA_KEY_VALUE(RIDER_ROTATION_LOCKED);               // Byte
ACTOR_DATA_KEY_VALUE(RIDER_MAX_ROTATION);                  // Float
ACTOR_DATA_KEY_VALUE(RIDER_MIN_ROTATION);                  // Float
ACTOR_DATA_KEY_VALUE(AREA_EFFECT_CLOUD_RADIUS);            // Float
ACTOR_DATA_KEY_VALUE(AREA_EFFECT_CLOUD_WAITING);           // Int
ACTOR_DATA_KEY_VALUE(AREA_EFFECT_CLOUD_PARTICLE_ID);       // Int
ACTOR_DATA_KEY_VALUE(SHULKER_PEEK_ID);                     // Int
ACTOR_DATA_KEY_VALUE(SHULKER_ATTACH_FACE);                 // Byte
ACTOR_DATA_KEY_VALUE(SHULKER_ATTACHED);                    // Short
ACTOR_DATA_KEY_VALUE(SHULKER_ATTACH_POS);                  // BlockPos
ACTOR_DATA_KEY_VALUE(TRADING_PLAYER_EID);                  // Int64
ACTOR_DATA_KEY_VALUE(TRADING_CAREER);
ACTOR_DATA_KEY_VALUE(HAS_COMMAND_BLOCK);
ACTOR_DATA_KEY_VALUE(COMMAND_BLOCK_COMMAND);               // String
ACTOR_DATA_KEY_VALUE(COMMAND_BLOCK_LAST_OUTPUT);           // String
ACTOR_DATA_KEY_VALUE(COMMAND_BLOCK_TRACK_OUTPUT);          // Byte
ACTOR_DATA_KEY_VALUE(CONTROLLING_RIDER_SEAT_NUMBER);       // Byte
ACTOR_DATA_KEY_VALUE(STRENGTH);                            // Int
ACTOR_DATA_KEY_VALUE(MAX_STRENGTH);                        // Int
ACTOR_DATA_KEY_VALUE(SPELL_CASTING_COLOR);                 // Int
ACTOR_DATA_KEY_VALUE(LIMITED_LIFE);
ACTOR_DATA_KEY_VALUE(ARMOR_STAND_POSE_INDEX);              // Int
ACTOR_DATA_KEY_VALUE(ENDER_CRYSTAL_TIME_OFFSET);           // Int
ACTOR_DATA_KEY_VALUE(ALWAYS_SHOW_NAMETAG);                 // Byte
ACTOR_DATA_KEY_VALUE(COLOR_2);                             // Byte
ACTOR_DATA_KEY_VALUE(NAME_AUTHOR);
ACTOR_DATA_KEY_VALUE(SCORE_TAG);                           // String
ACTOR_DATA_KEY_VALUE(BALLOON_ATTACHED_ENTITY);             // Int64
ACTOR_DATA_KEY_VALUE(PUFFERFISH_SIZE);
ACTOR_DATA_KEY_VALUE(BUBBLE_TIME);
ACTOR_DATA_KEY_VALUE(AGENT);
ACTOR_DATA_KEY_VALUE(SITTING_AMOUNT);
ACTOR_DATA_KEY_VALUE(SITTING_AMOUNT_PREVIOUS);
ACTOR_DATA_KEY_VALUE(EATING_COUNTER);
ACTOR_DATA_KEY_VALUE(FLAGS_EXTENDED);
ACTOR_DATA_KEY_VALUE(LAYING_AMOUNT);
ACTOR_DATA_KEY_VALUE(LAYING_AMOUNT_PREVIOUS);
ACTOR_DATA_KEY_VALUE(DURATION);
ACTOR_DATA_KEY_VALUE(SPAWN_TIME);
ACTOR_DATA_KEY_VALUE(CHANGE_RATE);
ACTOR_DATA_KEY_VALUE(CHANGE_ON_PICKUP);
ACTOR_DATA_KEY_VALUE(PICKUP_COUNT);
ACTOR_DATA_KEY_VALUE(INTERACT_TEXT);
ACTOR_DATA_KEY_VALUE(TRADE_TIER);
ACTOR_DATA_KEY_VALUE(MAX_TRADE_TIER);
ACTOR_DATA_KEY_VALUE(TRADE_EXPERIENCE);
ACTOR_DATA_KEY_VALUE(SKIN_ID);                             // Int
ACTOR_DATA_KEY_VALUE(SPAWNING_FRAMES);
ACTOR_DATA_KEY_VALUE(COMMAND_BLOCK_TICK_DELAY);
ACTOR_DATA_KEY_VALUE(COMMAND_BLOCK_EXECUTE_ON_FIRST_TICK);
ACTOR_DATA_KEY_VALUE(AMBIENT_SOUND_INTERVAL);
/*
ACTOR_DATA_KEY_VALUE(AMBIENT_SOUND_EVENT_NAME);
ACTOR_DATA_KEY_VALUE(FALL_DAMAGE_MULTIPLIER);
ACTOR_DATA_KEY_VALUE(NAME_RAW_TEXT);
ACTOR_DATA_KEY_VALUE(CAN_RIDE_TARGET);
*/
} // namespace ActorDataIDs
#undef ACTOR_DATA_KEY_VALUE

#undef BEFORE_EXTRA

/**
 * @brief MC class SynchedActorData.
 *
 */
class SynchedActorData {

#define AFTER_EXTRA
// Add Member Therepublic:
    //using DataList = std::vector<std::unique_ptr<DataItem>>;
    std::vector<std::unique_ptr<DataItem>> mItemsArray; // 0
private:
    unsigned short mMinDirtyId; // 24
    unsigned short mMaxDirtyId; // 26
public:
    template <typename T>
    MCAPI void define(unsigned short, T const&);
    template <typename T>
    MCAPI void set(unsigned short, T const&);
    inline std::vector<std::unique_ptr<DataItem>>& getItemArray()
    {
        return mItemsArray;
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SYNCHEDACTORDATA
public:
    class SynchedActorData& operator=(class SynchedActorData const &) = delete;
    SynchedActorData(class SynchedActorData const &) = delete;
#endif

public:
    /**
     * @hash   152630415
     * @symbol ??0SynchedActorData@@QEAA@XZ
     */
    MCAPI SynchedActorData();
    /**
     * @hash   -213085009
     * @symbol ??0SynchedActorData@@QEAA@$$QEAV0@@Z
     */
    MCAPI SynchedActorData(class SynchedActorData &&);
    /**
     * @hash   1135182
     * @symbol ?_clone@SynchedActorData@@QEBA?AV1@XZ
     */
    MCAPI class SynchedActorData _clone() const;
    /**
     * @hash   220807458
     * @symbol ?getFloat@SynchedActorData@@QEBAMG@Z
     */
    MCAPI float getFloat(unsigned short) const;
    /**
     * @hash   88722104
     * @symbol ?getInt8@SynchedActorData@@QEBACG@Z
     */
    MCAPI signed char getInt8(unsigned short) const;
    /**
     * @hash   75925595
     * @symbol ?getStatusFlag@SynchedActorData@@QEBA_NW4ActorFlags@@@Z
     */
    MCAPI bool getStatusFlag(enum ActorFlags) const;
    /**
     * @hash   -908788872
     * @symbol ?getVec3@SynchedActorData@@QEBA?AVVec3@@G@Z
     */
    MCAPI class Vec3 getVec3(unsigned short) const;
    /**
     * @hash   -575228185
     * @symbol ?markDirty@SynchedActorData@@QEAAXG@Z
     */
    MCAPI void markDirty(unsigned short);
    /**
     * @hash   1536093650
     * @symbol ??4SynchedActorData@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class SynchedActorData & operator=(class SynchedActorData &&);
    /**
     * @hash   1249899012
     * @symbol ??8SynchedActorData@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class SynchedActorData const &) const;
    /**
     * @hash   608604999
     * @symbol ?setStatusFlag@SynchedActorData@@QEAAXW4ActorFlags@@_N@Z
     */
    MCAPI void setStatusFlag(enum ActorFlags, bool);
    /**
     * @hash   -1613377795
     * @symbol ??1SynchedActorData@@QEAA@XZ
     */
    MCAPI ~SynchedActorData();

//private:
    /**
     * @hash   1379152058
     * @symbol ?_find@SynchedActorData@@AEBAPEAVDataItem@@G@Z
     */
    MCAPI class DataItem * _find(unsigned short) const;
    /**
     * @hash   -966383240
     * @symbol ?_get@SynchedActorData@@AEAAAEAVDataItem@@G@Z
     */
    MCAPI class DataItem & _get(unsigned short);
    /**
     * @hash   356047854
     * @symbol ?_resizeToContain@SynchedActorData@@AEAAXG@Z
     */
    MCAPI void _resizeToContain(unsigned short);

private:

};