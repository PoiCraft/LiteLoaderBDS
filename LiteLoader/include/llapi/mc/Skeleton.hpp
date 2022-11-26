/**
 * @file  Skeleton.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "HumanoidMonster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Skeleton.
 *
 */
class Skeleton : public HumanoidMonster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKELETON
public:
    class Skeleton& operator=(class Skeleton const &) = delete;
    Skeleton(class Skeleton const &) = delete;
    Skeleton() = delete;
#endif

public:
    /**
     * @vftbl  16
     * @hash   1585317655
     */
    virtual ~Skeleton();
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  50
     * @symbol ?normalTick@Skeleton@@UEAAXXZ
     * @hash   -425909554
     */
    virtual void normalTick();
    /**
     * @vftbl  52
     * @symbol ?passengerTick@Skeleton@@UEAAXXZ
     * @hash   735639153
     */
    virtual void passengerTick();
    /**
     * @vftbl  63
     * @hash   -89434495
     */
    virtual void __unk_vfn_63();
    /**
     * @vftbl  70
     * @hash   -63575907
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  84
     * @hash   -31252672
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @hash   -35939469
     */
    virtual void __unk_vfn_87();
    /**
     * @vftbl  90
     * @hash   -6317605
     */
    virtual void __unk_vfn_90();
    /**
     * @vftbl  98
     * @hash   -6386797
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  101
     * @hash   1421489202
     */
    virtual void __unk_vfn_101();
    /**
     * @vftbl  108
     * @hash   1435411209
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @hash   1456652192
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  111
     * @hash   1450118353
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl  113
     * @hash   1459422755
     */
    virtual void __unk_vfn_113();
    /**
     * @vftbl  116
     * @symbol ?setTarget@Skeleton@@UEAAXPEAVActor@@@Z
     * @hash   -2097704986
     */
    virtual void setTarget(class Actor *);
    /**
     * @vftbl  176
     * @symbol ?canFreeze@Skeleton@@UEBA_NXZ
     * @hash   -329261646
     */
    virtual bool canFreeze() const;
    /**
     * @vftbl  183
     * @hash   1602074556
     */
    virtual void __unk_vfn_183();
    /**
     * @vftbl  197
     * @hash   1692150047
     */
    virtual void __unk_vfn_197();
    /**
     * @vftbl  212
     * @symbol ?canBeAffected@Skeleton@@UEBA_NI@Z
     * @hash   -35780106
     */
    virtual bool canBeAffected(unsigned int) const;
    /**
     * @vftbl  222
     * @hash   -1937633230
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  223
     * @hash   -1919411709
     */
    virtual void __unk_vfn_223();
    /**
     * @vftbl  224
     * @symbol ?getDebugText@Skeleton@@EEAAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     * @hash   -1280743532
     */
    virtual void getDebugText(std::vector<std::string> &);
    /**
     * @vftbl  245
     * @hash   -1918058621
     */
    virtual void __unk_vfn_245();
    /**
     * @vftbl  248
     * @hash   -511059482
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  250
     * @symbol ?die@Skeleton@@UEAAXAEBVActorDamageSource@@@Z
     * @hash   -904661520
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @vftbl  266
     * @hash   -1809581902
     */
    virtual void __unk_vfn_266();
    /**
     * @vftbl  274
     * @hash   -1775342433
     */
    virtual void __unk_vfn_274();
    /**
     * @vftbl  281
     * @hash   -1807236101
     */
    virtual void __unk_vfn_281();
    /**
     * @vftbl  289
     * @hash   1042759315
     */
    virtual void __unk_vfn_289();
    /**
     * @vftbl  308
     * @hash   -1142300981
     */
    virtual void __unk_vfn_308();
    /**
     * @vftbl  311
     * @symbol ?doHurtTarget@Skeleton@@UEAA_NPEAVActor@@AEBW4ActorDamageCause@@@Z
     * @hash   -1057812207
     */
    virtual bool doHurtTarget(class Actor *, enum class ActorDamageCause const &);
    /**
     * @vftbl  312
     * @hash   -1061460700
     */
    virtual void __unk_vfn_312();
    /**
     * @vftbl  346
     * @hash   -979336523
     */
    virtual void __unk_vfn_346();
    /**
     * @vftbl  360
     * @hash   -927619347
     */
    virtual void __unk_vfn_360();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SKELETON
    /**
     * @symbol ?useNewAi@Skeleton@@UEBA_NXZ
     * @hash   1798760060
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @symbol ??0Skeleton@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   -568874535
     */
    MCAPI Skeleton(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?setWitherParent@Skeleton@@QEAAXPEAVWitherBoss@@@Z
     * @hash   1815968465
     */
    MCAPI void setWitherParent(class WitherBoss *);

//private:

private:
    /**
     * @symbol ?SPEED_MODIFIER_ATTACK_UUID@Skeleton@@0VUUID@mce@@B
     * @hash   310689647
     */
    MCAPI static class mce::UUID const SPEED_MODIFIER_ATTACK_UUID;

};