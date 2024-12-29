#include "ll/api/event/player/PlayerJumpEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/packet/PlayerAuthInputPacket.h"
namespace ll::event::inline player {
LL_AUTO_TYPE_INSTANCE_HOOK(
    PlayerJumpEventHook,
    HookPriority::Normal,
    ServerNetworkHandler,
    &ServerNetworkHandler::$handle,
    void,
    ::NetworkIdentifier const&     source,
    ::PlayerAuthInputPacket const& packet
) {
    if (ServerPlayer* player = _getServerPlayer(source, packet.mClientSubId)) {
        if (packet.getInput(::PlayerAuthInputPacket::InputData::StartJumping)) {
            EventBus::getInstance().publish(PlayerJumpEvent(*(Player*)player));
        }
    }
    return origin(source, packet);
}

static std::unique_ptr<EmitterBase> emitterFactory();
class PlayerJumpEventEmitter : public Emitter<emitterFactory, PlayerJumpEvent> {
    memory::HookRegistrar<PlayerJumpEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<PlayerJumpEventEmitter>(); }

} // namespace ll::event::inline player
