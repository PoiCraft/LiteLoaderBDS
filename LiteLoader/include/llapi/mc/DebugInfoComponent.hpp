/**
 * @file  DebugInfoComponent.hpp
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
 * @brief MC class DebugInfoComponent.
 *
 */
class DebugInfoComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEBUGINFOCOMPONENT
public:
    class DebugInfoComponent& operator=(class DebugInfoComponent const &) = delete;
    DebugInfoComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -754584026
     */
    virtual ~DebugInfoComponent();
    /**
     * @vftbl  1
     * @symbol ?onEvent@?$EventListenerDispatcher@VActorEventListener@@@@MEAA?AW4EventResult@@AEBUActorNotificationEvent@@@Z
     * @hash   -531964404
     */
    virtual enum class EventResult onEvent(struct ActorNotificationEvent const &);
    /**
     * @vftbl  2
     * @hash   -1051662174
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1050738653
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1049815132
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @hash   -1048891611
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @hash   -1047968090
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @hash   -1047044569
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @hash   -1046121048
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1045197527
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @hash   -29097149
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @hash   -28173628
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @hash   -27250107
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @hash   -26326586
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @hash   -25403065
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  15
     * @hash   -24479544
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl  16
     * @hash   -23556023
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  17
     * @hash   -22632502
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl  18
     * @hash   -21708981
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  19
     * @hash   -20785460
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  20
     * @hash   -467998
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl  21
     * @hash   455523
     */
    virtual void __unk_vfn_21();
    /**
     * @vftbl  22
     * @hash   1379044
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl  23
     * @hash   2302565
     */
    virtual void __unk_vfn_23();
    /**
     * @vftbl  24
     * @hash   3226086
     */
    virtual void __unk_vfn_24();
    /**
     * @vftbl  25
     * @hash   4149607
     */
    virtual void __unk_vfn_25();
    /**
     * @vftbl  26
     * @hash   5073128
     */
    virtual void __unk_vfn_26();
    /**
     * @vftbl  27
     * @hash   5996649
     */
    virtual void __unk_vfn_27();
    /**
     * @vftbl  28
     * @hash   6920170
     */
    virtual void __unk_vfn_28();
    /**
     * @vftbl  29
     * @hash   7843691
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol ?onEvent@DebugInfoComponent@@UEAA?AW4EventResult@@AEBUActorDefinitionTriggeredEvent@@@Z
     * @hash   241051138
     */
    virtual enum class EventResult onEvent(struct ActorDefinitionTriggeredEvent const &);
    /**
     * @symbol ??0DebugInfoComponent@@QEAA@AEBV0@@Z
     * @hash   -369717999
     */
    MCAPI DebugInfoComponent(class DebugInfoComponent const &);
    /**
     * @symbol ??0DebugInfoComponent@@QEAA@$$QEAV0@@Z
     * @hash   -1888587407
     */
    MCAPI DebugInfoComponent(class DebugInfoComponent &&);
    /**
     * @symbol ?addListener@DebugInfoComponent@@QEAAXAEBVHashedString@@VNetworkIdentifier@@W4SubClientId@@@Z
     * @hash   866450690
     */
    MCAPI void addListener(class HashedString const &, class NetworkIdentifier, enum class SubClientId);
    /**
     * @symbol ?listenersEmpty@DebugInfoComponent@@QEBA_NXZ
     * @hash   715561362
     */
    MCAPI bool listenersEmpty() const;
    /**
     * @symbol ??4DebugInfoComponent@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   1457050612
     */
    MCAPI class DebugInfoComponent & operator=(class DebugInfoComponent &&);
    /**
     * @symbol ?removeListener@DebugInfoComponent@@QEAAXAEBVHashedString@@VNetworkIdentifier@@W4SubClientId@@@Z
     * @hash   1209059264
     */
    MCAPI void removeListener(class HashedString const &, class NetworkIdentifier, enum class SubClientId);

};