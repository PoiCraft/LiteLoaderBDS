#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/IScriptWorldAfterEvents.h"
#include "mc/scripting/modules/minecraft/events/IScriptWorldBeforeEvents.h"
#include "mc/scripting/modules/minecraft/events/ScriptFilteredEventSignal.h"

// auto generated forward declare list
// clang-format off
class Level;
class Player;
struct ChatEvent;
struct ItemUseEvent;
struct ItemUseOnEvent;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptActorEventListener; }
namespace ScriptModuleMinecraft { class ScriptBlockEventListener; }
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
namespace ScriptModuleMinecraft { class ScriptItemEventListener; }
namespace ScriptModuleMinecraft { class ScriptLevelEventListener; }
namespace ScriptModuleMinecraft { class ScriptPlayerEventListener; }
namespace ScriptModuleMinecraft { class ScriptServerNetworkEventListener; }
namespace ScriptModuleMinecraft { struct EmptyFilter; }
namespace ScriptModuleMinecraft { struct ScriptActorCreateEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHitAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHitBlockAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHitEntityAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHurtAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorRemoveAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptChatSendBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptDataDrivenActorTriggerAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCompleteUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemReleaseUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStartUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStopUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerJoinAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerLeaveAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptTickEvent; }
namespace ScriptModuleMinecraft { struct ScriptWeatherChangedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptWorldInitializeAfterEvent; }
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorEventFilter; }
namespace ScriptModuleMinecraft::EventFilters { struct ScriptDataDrivenActorTriggerEventFilter; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptV010Events : public ::ScriptModuleMinecraft::IScriptWorldAfterEvents,
                         public ::ScriptModuleMinecraft::IScriptWorldBeforeEvents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                                            mScope;
    ::ll::TypedStorage<8, 16, ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptV010Events>> mHandle;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Level*>>                                                  mLevel;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptGlobalEventListeners*> mGlobalEventListeners;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptActorEventListener>> mActorEventListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptBlockEventListener>> mBlockEventListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptItemEventListener>>  mItemEventListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptLevelEventListener>> mLevelEventListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptPlayerEventListener>>
        mPlayerEventListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptServerNetworkEventListener>>
        mServerNetworkEventListener;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptTickEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mTickSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mWeatherChangeSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mWorldInitializeSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mPlayerJoinEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mPlayerLeaveEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptChatSendBeforeEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mBeforeChatSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptActorCreateEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mEntityCreateSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptActorHitAfterEvent,
            0,
            ::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilter>>>
        mEntityHitSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent,
            0,
            ::ScriptModuleMinecraft::EventFilters::ScriptDataDrivenActorTriggerEventFilter>>>
        mDataDrivenEntityEventSend;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptActorHurtAfterEvent,
            0,
            ::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilter>>>
        mEntityHurtSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptItemUseBeforeEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mItemBeforeUseEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mItemBeforeUseOnEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mItemUseOnEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptItemStartUseAfterEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mItemStartChargeEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mItemCompleteChargeEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mItemReleaseChargeEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptItemStopUseAfterEvent,
            0,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mItemStopChargeEventSignal;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptV010Events& operator=(ScriptV010Events const&);
    ScriptV010Events(ScriptV010Events const&);
    ScriptV010Events();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptV010Events() /*override*/;

    // vIndex: 1
    virtual ::Level& getLevel() const /*override*/;

    // vIndex: 3
    virtual void
    onWeatherChanged(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent>&
                         weatherChangedEvent) /*override*/;

    // vIndex: 4
    virtual void
    onWorldInitialize(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>&
                          worldInitializeEvent) /*override*/;

    // vIndex: 5
    virtual void onPlayerJoin(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>& playerJoinEvent
    ) /*override*/;

    // vIndex: 6
    virtual void onPlayerLeave(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>& playerLeaveEvent
    ) /*override*/;

    // vIndex: 1
    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptChatSendBeforeEvent>>
    onBeforeChat(::ChatEvent const& chatEvent, ::Player const& player) /*override*/;

    // vIndex: 11
    virtual void
    onActorRemoved(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> const& removedActor, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent>&) /*override*/
        ;

    // vIndex: 12
    virtual void
    onActorHitEntity(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>&
                         actorHitEntityEvent) /*override*/;

    // vIndex: 13
    virtual void onActorHitBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>& actorHitBlockEvent
    ) /*override*/;

    // vIndex: 15
    virtual void onDataDrivenActorEventSend(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>&
            dataDrivenActorEventSend
    ) /*override*/;

    // vIndex: 16
    virtual void
    onActorHurt(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHurtAfterEvent>& hurtEvent
    ) /*override*/;

    // vIndex: 13
    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseBeforeEvent>>
    onBeforeItemUse(::Player const& player, ::ItemUseEvent const& itemEvent) /*override*/;

    // vIndex: 14
    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>>
    onBeforeItemUseOn(::Player const& player, ::ItemUseOnEvent const& itemEvent) /*override*/;

    // vIndex: 40
    virtual void
    onItemUseOn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>& itemEvent
    ) /*override*/;

    // vIndex: 43
    virtual void onItemStartUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>& itemEvent
    ) /*override*/;

    // vIndex: 44
    virtual void onItemCompleteUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>& itemEvent
    ) /*override*/;

    // vIndex: 45
    virtual void onItemReleaseUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>& itemEvent
    ) /*override*/;

    // vIndex: 46
    virtual void
    onItemStopUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>& itemEvent
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptV010Events(::ScriptModuleMinecraft::ScriptV010Events&&);

    MCAPI ScriptV010Events(::Scripting::WeakLifetimeScope const& scope, ::gsl::not_null<::Level*> level);

    MCAPI ::ScriptModuleMinecraft::ScriptV010Events& operator=(::ScriptModuleMinecraft::ScriptV010Events&&);

    MCAPI void registerListener(
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptV010Events> handle,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners&                      globalEventListeners
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptV010Events&&);

    MCAPI void* $ctor(::Scripting::WeakLifetimeScope const& scope, ::gsl::not_null<::Level*> level);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Level& $getLevel() const;

    MCAPI void
    $onWeatherChanged(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWeatherChangedAfterEvent>&
                          weatherChangedEvent);

    MCAPI void
    $onWorldInitialize(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>&
                           worldInitializeEvent);

    MCAPI void $onPlayerJoin(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>& playerJoinEvent
    );

    MCAPI void $onPlayerLeave(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>& playerLeaveEvent
    );

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptChatSendBeforeEvent>>
    $onBeforeChat(::ChatEvent const& chatEvent, ::Player const& player);

    MCAPI void
    $onActorRemoved(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> const& removedActor, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent>&);

    MCAPI void
    $onActorHitEntity(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>&
                          actorHitEntityEvent);

    MCAPI void $onActorHitBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>& actorHitBlockEvent
    );

    MCAPI void $onDataDrivenActorEventSend(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>&
            dataDrivenActorEventSend
    );

    MCAPI void
    $onActorHurt(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHurtAfterEvent>& hurtEvent);

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseBeforeEvent>>
    $onBeforeItemUse(::Player const& player, ::ItemUseEvent const& itemEvent);

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>>
    $onBeforeItemUseOn(::Player const& player, ::ItemUseOnEvent const& itemEvent);

    MCAPI void
    $onItemUseOn(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>& itemEvent);

    MCAPI void $onItemStartUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>& itemEvent
    );

    MCAPI void $onItemCompleteUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>& itemEvent
    );

    MCAPI void $onItemReleaseUse(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemReleaseUseAfterEvent>& itemEvent
    );

    MCAPI void
    $onItemStopUse(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStopUseAfterEvent>& itemEvent
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForIScriptWorldAfterEvents();

    MCAPI static void** $vftableForIScriptWorldBeforeEvents();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
