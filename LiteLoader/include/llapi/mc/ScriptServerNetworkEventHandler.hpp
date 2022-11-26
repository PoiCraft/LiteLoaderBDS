/**
 * @file  ScriptServerNetworkEventHandler.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"
#include "ScriptModuleMinecraft.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptServerNetworkEventHandler.
 *
 */
class ScriptServerNetworkEventHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSERVERNETWORKEVENTHANDLER
public:
    class ScriptServerNetworkEventHandler& operator=(class ScriptServerNetworkEventHandler const &) = delete;
    ScriptServerNetworkEventHandler(class ScriptServerNetworkEventHandler const &) = delete;
    ScriptServerNetworkEventHandler() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -727796194
     */
    virtual ~ScriptServerNetworkEventHandler();
    /**
     * @vftbl  1
     * @hash   1152046753
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?handleEvent@ScriptServerNetworkEventHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUChatEvent@@@Z
     * @hash   1169441525
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct ChatEvent &);

//private:
    /**
     * @symbol ?_handleChat@ScriptServerNetworkEventHandler@@AEBA_NAEAUChatEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VScriptWorldEvents@ScriptModuleMinecraft@@@4@@Z
     * @hash   481303168
     */
    MCAPI bool _handleChat(struct ChatEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldEvents>) const;

private:

};