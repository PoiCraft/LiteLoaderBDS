/**
 * @file  EntityEnterVolumeSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EntityEnterVolumeSystem.
 *
 */
class EntityEnterVolumeSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYENTERVOLUMESYSTEM
public:
    class EntityEnterVolumeSystem& operator=(class EntityEnterVolumeSystem const &) = delete;
    EntityEnterVolumeSystem(class EntityEnterVolumeSystem const &) = delete;
    EntityEnterVolumeSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   390418060
     */
    virtual ~EntityEnterVolumeSystem();
    /**
     * @vftbl  1
     * @hash   -1316591615
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@EntityEnterVolumeSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   1994981182
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @symbol ??0EntityEnterVolumeSystem@@QEAA@V?$not_null@V?$NonOwnerPointer@$$CBVILevel@@@Bedrock@@@gsl@@@Z
     * @hash   643060139
     */
    MCAPI EntityEnterVolumeSystem(class gsl::not_null<class Bedrock::NonOwnerPointer<class ILevel const>>);

//private:
    /**
     * @symbol ?_tick@EntityEnterVolumeSystem@@AEBAXAEAVEntityContext@@AEAVVolumeBoundsComponent@@@Z
     * @hash   -1400573065
     */
    MCAPI void _tick(class EntityContext &, class VolumeBoundsComponent &) const;

private:

};