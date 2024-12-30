#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/ClientGameSetupResult.h"
#include "mc/client/game/ClientInstanceState.h"
#include "mc/client/game/ControlOptionType.h"
#include "mc/client/game/IClientInstance.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/MousePointerType.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/StoreNavigationOrigin.h"
#include "mc/client/gui/screens/controllers/InventoryTabIndex.h"
#include "mc/client/gui/screens/controllers/MarketplacePassTabIndex.h"
#include "mc/client/gui/screens/models/PlayScreenDefaultTab.h"
#include "mc/client/options/SplitScreenDirection.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/util/ClipboardProxy.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/file/LevelStorageState.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/StorageAreaStateListener.h"
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core_graphics/math/Rect.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/WYSIWYGState.h"
#include "mc/deps/renderer/MatrixStack.h"
#include "mc/input/ClientPlayMode.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/util/ProfanityFilterContext.h"
#include "mc/world/GameCallbacks.h"
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/player/PlayerListener.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class Actor;
class ActorBlockRenderer;
class ActorRenderDispatcher;
class ActorResourceDefinitionGroup;
class BlockActorRenderDispatcher;
class BlockCullingGroup;
class BlockSource;
class BlockTessellator;
class BlockTypeRegistry;
class BuildActionIntention;
class CachedScenes;
class CameraRegistry;
class ClientHitDetectCoordinator;
class ClientInputHandler;
class ClientInstanceEventCoordinator;
class ClientMoveInputHandler;
class ClientNetworkEventCoordinator;
class ClientNetworkSystem;
class ClientRequirementVerifier;
class ClientScriptEventCoordinator;
class ClientScriptManager;
class DateManager;
class DeferredLighting;
class DevConsoleLogger;
class DisconnectionRequestHandler;
class EntityContext;
class EntitySystems;
class FileDataRequest;
class FogDefinitionRegistry;
class FogManager;
class FontHandle;
class FrameUpdateContext;
class GameModuleClient;
class GameRenderer;
class GeometryGroup;
class GuiData;
class GuidedFlowManager;
class HitDetectSystem;
class HitResult;
class HolographicPlatform;
class HolosceneRenderer;
class IClientInstances;
class IConnectionEventing;
class IContentKeyProvider;
class IGameConnectionListener;
class IGameModuleApp;
class IMinecraftEventing;
class IMinecraftGame;
class IOptions;
class IResourcePackRepository;
class ISceneStack;
class ITTSEventManager;
class IUIRepository;
class ItemInHandRenderer;
class ItemRegistryRef;
class ItemRenderer;
class KeyboardManager;
class LatencyGraphDisplay;
class Level;
class LevelRenderer;
class LevelRendererCameraProxy;
class LightTexture;
class LocalPlayer;
class MarketplaceServicesManager;
class Minecraft;
class MinecraftGraphics;
class MinecraftInputHandler;
class MobEffectsLayout;
class MultiPlayerLevel;
class Option;
class Options;
class PackManifestFactory;
class PacketSender;
class PersonaRepository;
class PixelCalc;
class Player;
class PlayerReportHandler;
class ResourcePackManager;
class SceneFactory;
class SceneStack;
class ScreenContext;
class ScreenLoadTimeTracker;
class ShaderColor;
class SkinRepository;
class SkinRepositoryClientInterface;
class SoundEngine;
class StoreCatalogItem;
class StoreCatalogRepository;
class TaskGroup;
class TextToSpeechClient;
class Timer;
class ToastManager;
class TrialManager;
class UIEventCoordinator;
class UIProfanityContext;
class UserAuthentication;
class Vec2;
class Vec3;
class VoiceSystem;
class WeakEntityRef;
class WorldTransferAgent;
struct ActorUniqueID;
struct ClientHMDState;
struct DisconnectionScreenParams;
struct ListenerState;
struct LocalPlayerChangedConnector;
struct PacksInfoData;
struct ScreenshotOptions;
struct SplitScreenInfo;
namespace ApplicationSignal { class ClipboardCopy; }
namespace ApplicationSignal { class ClipboardPasteRequest; }
namespace Automation { class AutomationClient; }
namespace Bedrock::Http { class Status; }
namespace Core { class FilePathManager; }
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Editor { class IEditorManager; }
namespace Editor { class IEditorPlayer; }
namespace OreUI { class ITelemetry; }
namespace OreUI { class Router; }
namespace OreUI { class SceneProvider; }
namespace OreUI { class UIBlockThumbnailAtlasManager; }
namespace PlayerCapabilities { struct IClientController; }
namespace Realms { struct World; }
namespace Scripting { class ScriptEngine; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class User; }
namespace mce { class Camera; }
namespace mce { class Texture; }
namespace mce { class TextureGroup; }
namespace mce { class TexturePtr; }
namespace mce { class UUID; }
namespace mce { struct ViewportInfo; }
namespace persona { class PersonaPieceCollectionModel; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

class ClientInstance : public ::IClientInstance,
                       public ::Core::StorageAreaStateListener,
                       public ::GameCallbacks,
                       public ::PlayerListener,
                       public ::std::enable_shared_from_this<::ClientInstance> {
public:
    // ClientInstance inner types declare
    // clang-format off
    struct ClientDestroyBlockState;
    struct ClientRenderResources;
    struct PlayerJoinWorldTelemetryInfo;
    // clang-format on

    // ClientInstance inner types define
    struct ClientRenderResources {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk9600de;
        ::ll::UntypedStorage<8, 32> mUnkc84d55;
        // NOLINTEND

    public:
        // prevent constructor by default
        ClientRenderResources& operator=(ClientRenderResources const&);
        ClientRenderResources(ClientRenderResources const&);
        ClientRenderResources();
    };

    struct ClientDestroyBlockState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkff7778;
        ::ll::UntypedStorage<8, 8>  mUnk241918;
        ::ll::UntypedStorage<1, 1>  mUnkb9c8a1;
        ::ll::UntypedStorage<8, 8>  mUnk4fdef3;
        ::ll::UntypedStorage<8, 64> mUnk4fd828;
        ::ll::UntypedStorage<8, 64> mUnk738e7f;
        ::ll::UntypedStorage<8, 64> mUnk525e8f;
        // NOLINTEND

    public:
        // prevent constructor by default
        ClientDestroyBlockState& operator=(ClientDestroyBlockState const&);
        ClientDestroyBlockState(ClientDestroyBlockState const&);
        ClientDestroyBlockState();
    };

    struct PlayerJoinWorldTelemetryInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk36f41e;
        ::ll::UntypedStorage<4, 4>  mUnk3eee61;
        ::ll::UntypedStorage<8, 32> mUnkfe2ee6;
        ::ll::UntypedStorage<4, 4>  mUnkb8e462;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlayerJoinWorldTelemetryInfo& operator=(PlayerJoinWorldTelemetryInfo const&);
        PlayerJoinWorldTelemetryInfo(PlayerJoinWorldTelemetryInfo const&);
        PlayerJoinWorldTelemetryInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkeb8701;
    ::ll::UntypedStorage<8, 8>   mUnk40ac05;
    ::ll::UntypedStorage<8, 8>   mUnk9379d1;
    ::ll::UntypedStorage<8, 24>  mUnk421768;
    ::ll::UntypedStorage<8, 8>   mUnke2a76f;
    ::ll::UntypedStorage<8, 8>   mUnk599652;
    ::ll::UntypedStorage<1, 1>   mUnk13fce4;
    ::ll::UntypedStorage<8, 8>   mUnkd1e630;
    ::ll::UntypedStorage<8, 8>   mUnk703d29;
    ::ll::UntypedStorage<8, 8>   mUnk6d90fa;
    ::ll::UntypedStorage<8, 8>   mUnkdda4c5;
    ::ll::UntypedStorage<8, 8>   mUnk10c4c0;
    ::ll::UntypedStorage<8, 8>   mUnkace9a6;
    ::ll::UntypedStorage<8, 8>   mUnk59f993;
    ::ll::UntypedStorage<8, 8>   mUnk5310df;
    ::ll::UntypedStorage<8, 8>   mUnk12a970;
    ::ll::UntypedStorage<8, 16>  mUnkcde76f;
    ::ll::UntypedStorage<8, 8>   mUnk9fe1ff;
    ::ll::UntypedStorage<8, 8>   mUnk29790b;
    ::ll::UntypedStorage<8, 24>  mUnk10018d;
    ::ll::UntypedStorage<8, 24>  mUnk6d935d;
    ::ll::UntypedStorage<8, 24>  mUnk9bcffe;
    ::ll::UntypedStorage<8, 48>  mUnk8c3c07;
    ::ll::UntypedStorage<8, 8>   mUnkba00d2;
    ::ll::UntypedStorage<4, 4>   mUnkeecc5e;
    ::ll::UntypedStorage<4, 4>   mUnk6e6157;
    ::ll::UntypedStorage<1, 1>   mUnka6af0c;
    ::ll::UntypedStorage<4, 4>   mUnkfbfba1;
    ::ll::UntypedStorage<1, 1>   mUnkd6f5bb;
    ::ll::UntypedStorage<1, 1>   mUnkc69553;
    ::ll::UntypedStorage<1, 1>   mUnk20b577;
    ::ll::UntypedStorage<1, 1>   mUnka7e48d;
    ::ll::UntypedStorage<4, 4>   mUnk9e92ce;
    ::ll::UntypedStorage<4, 4>   mUnk233733;
    ::ll::UntypedStorage<1, 1>   mUnk48d2a2;
    ::ll::UntypedStorage<1, 1>   mUnk44a215;
    ::ll::UntypedStorage<1, 1>   mUnkabaefb;
    ::ll::UntypedStorage<8, 64>  mUnkc2143d;
    ::ll::UntypedStorage<8, 8>   mUnkfe7255;
    ::ll::UntypedStorage<1, 1>   mUnk11871e;
    ::ll::UntypedStorage<8, 32>  mUnkf675fa;
    ::ll::UntypedStorage<4, 24>  mUnk8d7d51;
    ::ll::UntypedStorage<8, 40>  mUnk4418d8;
    ::ll::UntypedStorage<8, 8>   mUnkd8008b;
    ::ll::UntypedStorage<8, 512> mUnk2b811b;
    ::ll::UntypedStorage<4, 20>  mUnk6f5e44;
    ::ll::UntypedStorage<4, 20>  mUnk76317a;
    ::ll::UntypedStorage<4, 12>  mUnkd1e9b9;
    ::ll::UntypedStorage<8, 32>  mUnk445360;
    ::ll::UntypedStorage<8, 16>  mUnke10317;
    ::ll::UntypedStorage<4, 4>   mUnk47ffc0;
    ::ll::UntypedStorage<8, 8>   mUnk1052cb;
    ::ll::UntypedStorage<8, 8>   mUnkc24d28;
    ::ll::UntypedStorage<8, 8>   mUnkadcd43;
    ::ll::UntypedStorage<8, 16>  mUnkdb25a3;
    ::ll::UntypedStorage<8, 16>  mUnked2a78;
    ::ll::UntypedStorage<8, 8>   mUnkdcfcea;
    ::ll::UntypedStorage<8, 8>   mUnk82dfd0;
    ::ll::UntypedStorage<8, 8>   mUnk984c7a;
    ::ll::UntypedStorage<8, 16>  mUnkb79e26;
    ::ll::UntypedStorage<8, 8>   mUnk149f78;
    ::ll::UntypedStorage<8, 8>   mUnk5a8bdb;
    ::ll::UntypedStorage<8, 8>   mUnk8fed4e;
    ::ll::UntypedStorage<8, 8>   mUnk32b0ff;
    ::ll::UntypedStorage<8, 8>   mUnkbbb9b5;
    ::ll::UntypedStorage<8, 8>   mUnk2b5396;
    ::ll::UntypedStorage<8, 16>  mUnk5da2d9;
    ::ll::UntypedStorage<1, 1>   mUnkfa0970;
    ::ll::UntypedStorage<8, 8>   mUnkf4ba26;
    ::ll::UntypedStorage<8, 8>   mUnk79da84;
    ::ll::UntypedStorage<8, 16>  mUnkca3a20;
    ::ll::UntypedStorage<8, 640> mUnkb70e05;
    ::ll::UntypedStorage<8, 8>   mUnk8d9725;
    ::ll::UntypedStorage<8, 8>   mUnkbc94b5;
    ::ll::UntypedStorage<1, 1>   mUnk563a7c;
    ::ll::UntypedStorage<8, 8>   mUnkda37dc;
    ::ll::UntypedStorage<4, 4>   mUnk97285b;
    ::ll::UntypedStorage<4, 4>   mUnke5e0bf;
    ::ll::UntypedStorage<8, 16>  mUnk968bec;
    ::ll::UntypedStorage<1, 1>   mUnk343fce;
    ::ll::UntypedStorage<1, 1>   mUnkbca286;
    ::ll::UntypedStorage<1, 1>   mUnk7610a3;
    ::ll::UntypedStorage<1, 1>   mUnk3a5c32;
    ::ll::UntypedStorage<1, 1>   mUnk3430d4;
    ::ll::UntypedStorage<1, 1>   mUnk9f2b54;
    ::ll::UntypedStorage<1, 1>   mUnk962bb4;
    ::ll::UntypedStorage<8, 424> mUnkcc66f1;
    ::ll::UntypedStorage<1, 1>   mUnke203b0;
    ::ll::UntypedStorage<1, 1>   mUnk1ef4d7;
    ::ll::UntypedStorage<1, 1>   mUnk29fbcb;
    ::ll::UntypedStorage<4, 4>   mUnkc07c6b;
    ::ll::UntypedStorage<1, 1>   mUnk923860;
    ::ll::UntypedStorage<8, 8>   mUnk108e78;
    ::ll::UntypedStorage<4, 4>   mUnk7d3d83;
    ::ll::UntypedStorage<8, 40>  mUnke83ed9;
    ::ll::UntypedStorage<8, 40>  mUnk3e9e2f;
    ::ll::UntypedStorage<8, 16>  mUnkcf1108;
    ::ll::UntypedStorage<8, 64>  mUnk393002;
    ::ll::UntypedStorage<8, 8>   mUnkb9e461;
    ::ll::UntypedStorage<8, 8>   mUnkbe2831;
    ::ll::UntypedStorage<8, 8>   mUnke03b83;
    ::ll::UntypedStorage<8, 8>   mUnkee44b0;
    ::ll::UntypedStorage<8, 8>   mUnka8bb72;
    ::ll::UntypedStorage<8, 8>   mUnk5e2ef9;
    ::ll::UntypedStorage<8, 16>  mUnkf8f09a;
    ::ll::UntypedStorage<4, 8>   mUnk973753;
    ::ll::UntypedStorage<4, 8>   mUnk600c92;
    ::ll::UntypedStorage<4, 4>   mUnk737de1;
    ::ll::UntypedStorage<8, 8>   mUnk6aa9fd;
    ::ll::UntypedStorage<8, 8>   mUnkd40519;
    ::ll::UntypedStorage<8, 24>  mUnk5c4c80;
    ::ll::UntypedStorage<8, 8>   mUnk1f7c97;
    ::ll::UntypedStorage<8, 16>  mUnk52193b;
    ::ll::UntypedStorage<8, 8>   mUnk8d9ec3;
    ::ll::UntypedStorage<8, 8>   mUnkc5b1ea;
    ::ll::UntypedStorage<8, 8>   mUnkb1ffcd;
    ::ll::UntypedStorage<8, 24>  mUnk7ffd34;
    ::ll::UntypedStorage<8, 16>  mUnk99ef24;
    ::ll::UntypedStorage<8, 16>  mUnk6182e1;
    ::ll::UntypedStorage<8, 16>  mUnk450d87;
    ::ll::UntypedStorage<8, 8>   mUnkc5852d;
    ::ll::UntypedStorage<8, 8>   mUnkc94ec9;
    ::ll::UntypedStorage<8, 56>  mUnk90f4d3;
    ::ll::UntypedStorage<8, 8>   mUnkf8bdff;
    ::ll::UntypedStorage<8, 24>  mUnkfbc948;
    ::ll::UntypedStorage<1, 1>   mUnkc75c08;
    ::ll::UntypedStorage<4, 4>   mUnkcef468;
    ::ll::UntypedStorage<4, 4>   mUnk573d1d;
    ::ll::UntypedStorage<8, 16>  mUnkdc75f9;
    ::ll::UntypedStorage<8, 80>  mUnk3892fa;
    ::ll::UntypedStorage<8, 16>  mUnka5c62e;
    ::ll::UntypedStorage<8, 24>  mUnk7433ce;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInstance& operator=(ClientInstance const&);
    ClientInstance(ClientInstance const&);
    ClientInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientInstance() /*override*/;

    // vIndex: 1
    virtual void onInitMinecraftGame() /*override*/;

    // vIndex: 2
    virtual void onDestroyMinecraftGame() /*override*/;

    // vIndex: 3
    virtual void
    init(::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&, ::ClientNetworkSystem&, ::Timer&, ::Timer&, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&, int, ::IGameModuleApp&) /*override*/
        ;

    // vIndex: 4
    virtual void
        initSceneFactory(::std::unique_ptr<::SceneFactory>, ::std::unique_ptr<::OreUI::SceneProvider>) /*override*/;

    // vIndex: 5
    virtual void setUiRouter(::std::unique_ptr<::OreUI::Router>) /*override*/;

    // vIndex: 6
    virtual void initGraphics() /*override*/;

    // vIndex: 7
    virtual void stop() /*override*/;

    // vIndex: 8
    virtual void teardown() /*override*/;

    // vIndex: 9
    virtual void preShutDown() /*override*/;

    // vIndex: 10
    virtual void setGameConnectionInfo(::Social::GameConnectionInfo const&) /*override*/;

    // vIndex: 11
    virtual void onStartJoinGame(bool, ::std::string const&, int, ::Social::MultiplayerServiceIdentifier) /*override*/;

    // vIndex: 12
    virtual void onCancelJoinGame() /*override*/;

    // vIndex: 13
    virtual void requestLeaveGameAsync() /*override*/;

    // vIndex: 14
    virtual void requestLeaveGame(bool, bool) /*override*/;

    // vIndex: 15
    virtual void stopPlayScreen() /*override*/;

    // vIndex: 16
    virtual bool isLeaveGameDone() const /*override*/;

    // vIndex: 17
    virtual void setupPlayScreenForLeaveGame() /*override*/;

    // vIndex: 18
    virtual void resetPrimaryClient() /*override*/;

    // vIndex: 19
    virtual void resetGameSession() /*override*/;

    // vIndex: 20
    virtual void tick() /*override*/;

    // vIndex: 21
    virtual void frameUpdate(::FrameUpdateContext&) /*override*/;

    // vIndex: 23
    virtual void preFrameTick() /*override*/;

    // vIndex: 22
    virtual bool update(bool) /*override*/;

    // vIndex: 24
    virtual void endFrame() /*override*/;

    // vIndex: 25
    virtual float getFrameAlpha() /*override*/;

    // vIndex: 26
    virtual void startSubClientLateJoin(bool, ::std::unique_ptr<::GameModuleClient>) /*override*/;

    // vIndex: 28
    virtual void
    setupClientGame(::std::function<void(::ClientGameSetupResult)>&&, bool, ::std::unique_ptr<::GameModuleClient>) /*override*/
        ;

    // vIndex: 27
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::ClientGameSetupResult>>
    setupClientGame(bool, ::std::unique_ptr<::GameModuleClient>) /*override*/;

    // vIndex: 29
    virtual ::BlockSource* getRegion() /*override*/;

    // vIndex: 30
    virtual ::LocalPlayer* getLocalPlayer() const /*override*/;

    // vIndex: 31
    virtual void setupPrimaryClientEditorManager() /*override*/;

    // vIndex: 32
    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> getLocalEditorPlayer() const /*override*/;

    // vIndex: 33
    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorManager> getEditorManager() const /*override*/;

    // vIndex: 34
    virtual bool isPlayerInEditor() const /*override*/;

    // vIndex: 35
    virtual ::LocalPlayerChangedConnector getLocalPlayerChangedConnector() /*override*/;

    // vIndex: 36
    virtual ::WeakEntityRef getLocalUser() const /*override*/;

    // vIndex: 37
    virtual ::Actor* getCameraActor() const /*override*/;

    // vIndex: 38
    virtual void setCameraActor(::Actor*) /*override*/;

    // vIndex: 39
    virtual ::ListenerState const* getListenerState() const /*override*/;

    // vIndex: 40
    virtual ::Actor* getCameraTargetActor() const /*override*/;

    // vIndex: 41
    virtual void setCameraTargetActor(::Actor*) /*override*/;

    // vIndex: 42
    virtual ::WeakEntityRef getCameraEntity() const /*override*/;

    // vIndex: 43
    virtual void getRawCameraEntities(::WeakEntityRef&, ::WeakEntityRef&) const /*override*/;

    // vIndex: 44
    virtual void setRawCameraEntities(::WeakEntityRef, ::WeakEntityRef) /*override*/;

    // vIndex: 45
    virtual ::HitResult const& getLatestHitResult() const /*override*/;

    // vIndex: 46
    virtual bool isLeavingGame() const /*override*/;

    // vIndex: 47
    virtual bool isDestroyingGame() const /*override*/;

    // vIndex: 48
    virtual bool isShuttingDown() const /*override*/;

    // vIndex: 49
    virtual bool useLowFrequencyUIRender() const /*override*/;

    // vIndex: 50
    virtual bool isSplitScreenActive() const /*override*/;

    // vIndex: 51
    virtual bool isVRClient() const /*override*/;

    // vIndex: 52
    virtual bool isARClient() const /*override*/;

    // vIndex: 53
    virtual bool isARVRClient() const /*override*/;

    // vIndex: 54
    virtual bool isHoloviewerMode() const /*override*/;

    // vIndex: 55
    virtual bool isHoloscreenMode() const /*override*/;

    // vIndex: 56
    virtual bool isLivingroomMode() const /*override*/;

    // vIndex: 57
    virtual bool isExitingLevel() const /*override*/;

    // vIndex: 58
    virtual bool isNotVLRMode() const /*override*/;

    // vIndex: 59
    virtual bool isHoloRealityMode() const /*override*/;

    // vIndex: 60
    virtual bool isRealityFullVRMode() const /*override*/;

    // vIndex: 61
    virtual bool isInBedScreen() const /*override*/;

    // vIndex: 62
    virtual bool isInDeathScreen() const /*override*/;

    // vIndex: 63
    virtual bool isKeyboardEnabled() const /*override*/;

    // vIndex: 64
    virtual bool isVRTransitioning() const /*override*/;

    // vIndex: 65
    virtual bool hasCommands() const /*override*/;

    // vIndex: 66
    virtual float getHoloviewerScale() const /*override*/;

    // vIndex: 67
    virtual int getSplitScreenCount() const /*override*/;

    // vIndex: 68
    virtual bool isStereoRendering() const /*override*/;

    // vIndex: 69
    virtual bool isShowingLoadingScreen() const /*override*/;

    // vIndex: 70
    virtual bool shouldDisconnectOnAppSuspended() const /*override*/;

    // vIndex: 71
    virtual bool isGamePlayTipsEnabled() const /*override*/;

    // vIndex: 72
    virtual bool isPlatformNX() const /*override*/;

    // vIndex: 73
    virtual bool isLocalSplitscreenWith(::ActorUniqueID const&) const /*override*/;

    // vIndex: 74
    virtual bool isValidCrossPlatformSkin() const /*override*/;

    // vIndex: 75
    virtual bool isCurrentSkinPlatformLocked() const /*override*/;

    // vIndex: 76
    virtual bool isSelectedSkinInitialized() const /*override*/;

    // vIndex: 77
    virtual ::SplitScreenInfo getSplitScreenInfo() const /*override*/;

    // vIndex: 78
    virtual int getCurrentMaxGUIScaleIndex() const /*override*/;

    // vIndex: 79
    virtual float const& getRealityModeFrameFactor() const /*override*/;

    // vIndex: 80
    virtual void setRealityModeFrameFactor(float const&) /*override*/;

    // vIndex: 81
    virtual bool getRealityModeToggleTriggered() const /*override*/;

    // vIndex: 82
    virtual void setRealityModeToggleTriggered(bool) /*override*/;

    // vIndex: 83
    virtual bool getHandlingControllerDisconnect() /*override*/;

    // vIndex: 84
    virtual void setOpenControllerDisconnectScreen(bool) /*override*/;

    // vIndex: 85
    virtual ::ClientPlayMode getClientPlayMode() const /*override*/;

    // vIndex: 86
    virtual void setClientPlayMode(::ClientPlayMode const&) /*override*/;

    // vIndex: 87
    virtual bool getLivingRoomForCredits() const /*override*/;

    // vIndex: 88
    virtual void setLivingRoomForCredits(bool) /*override*/;

    // vIndex: 89
    virtual ::std::function<void()> getCreditsCallback() /*override*/;

    // vIndex: 90
    virtual void setCreditsCallback(::std::function<void()>) /*override*/;

    // vIndex: 91
    virtual void setupTransitionForCredits(::std::function<void()>) /*override*/;

    // vIndex: 92
    virtual void refreshScreenSizeData() /*override*/;

    // vIndex: 93
    virtual void onScreenSizeChanged(int, int, float) /*override*/;

    // vIndex: 94
    virtual void onGuiScaleOffsetChanged() /*override*/;

    // vIndex: 95
    virtual void onSafeZoneChanged() /*override*/;

    // vIndex: 96
    virtual bool hasDismissedNewPlayerFlow() const /*override*/;

    // vIndex: 97
    virtual void quit(::std::string const&, ::std::string const&) /*override*/;

    // vIndex: 98
    virtual ::IMinecraftGame& getMinecraftGame_DEPRECATED() const /*override*/;

    // vIndex: 99
    virtual ::IClientInstances& getClientInstances() const /*override*/;

    // vIndex: 100
    virtual ::Bedrock::NotNullNonOwnerPtr<::Automation::AutomationClient> getAutomationClient() const /*override*/;

    // vIndex: 101
    virtual ::IMinecraftEventing& getEventing() const /*override*/;

    // vIndex: 102
    virtual ::IConnectionEventing& getConnectionEventing() const /*override*/;

    // vIndex: 103
    virtual ::FontHandle getFontHandle() const /*override*/;

    // vIndex: 104
    virtual ::FontHandle getRuneFontHandle() const /*override*/;

    // vIndex: 105
    virtual ::FontHandle getUnicodeFontHandle() const /*override*/;

    // vIndex: 106
    virtual ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> getGeometryGroup() const /*override*/;

    // vIndex: 107
    virtual ::Bedrock::NotNullNonOwnerPtr<::BlockCullingGroup> getBlockCullingGroup() const /*override*/;

    // vIndex: 108
    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> getMultiplayerServiceManager() const
        /*override*/;

    // vIndex: 109
    virtual ::IResourcePackRepository& getResourcePackRepository() const /*override*/;

    // vIndex: 110
    virtual ::ResourcePackManager& getResourcePackManager() const /*override*/;

    // vIndex: 111
    virtual ::PackManifestFactory& getPackManifestFactory() /*override*/;

    // vIndex: 112
    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> getKeyProvider() const /*override*/;

    // vIndex: 113
    virtual ::PacksInfoData const& getHostSpecifiedPacks() const /*override*/;

    // vIndex: 114
    virtual ::std::shared_ptr<::SkinRepository> getSkinRepository() const /*override*/;

    // vIndex: 117
    virtual ::PersonaRepository& getPersonaRepository() const /*override*/;

    // vIndex: 118
    virtual ::MarketplaceServicesManager& getMarketplaceServicesManager() const /*override*/;

    // vIndex: 115
    virtual ::SkinRepositoryClientInterface& getSkinRepositoryClientInterface() const /*override*/;

    // vIndex: 116
    virtual ::persona::PersonaPieceCollectionModel& getPersonaPieceCollectionModel() /*override*/;

    // vIndex: 119
    virtual ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> getStoreCatalogRepository() /*override*/;

    // vIndex: 120
    virtual ::std::shared_ptr<::mce::TextureGroup> getTextureGroup() const /*override*/;

    // vIndex: 121
    virtual ::Bedrock::NotNullNonOwnerPtr<::mce::TextureGroup> getStoreCacheTextures() const /*override*/;

    // vIndex: 122
    virtual ::Bedrock::NotNullNonOwnerPtr<::MinecraftGraphics> getMinecraftGraphics() const /*override*/;

    // vIndex: 123
    virtual ::Bedrock::NotNullNonOwnerPtr<::IUIRepository> getUIRepository() const /*override*/;

    // vIndex: 124
    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> getUserManager() const /*override*/;

    // vIndex: 125
    virtual ::Bedrock::NotNullNonOwnerPtr<::TrialManager> getTrialManager() const /*override*/;

    // vIndex: 126
    virtual bool wantToQuit() const /*override*/;

    // vIndex: 127
    virtual bool isPrimaryLevelCrossPlatformMultiplayer() const /*override*/;

    // vIndex: 128
    virtual bool isPrimaryLevelMultiplayer() const /*override*/;

    // vIndex: 129
    virtual bool isAdhocEnabled() const /*override*/;

    // vIndex: 130
    virtual bool isMarketplaceDisabled() const /*override*/;

    // vIndex: 131
    virtual ::std::pair<::std::string, ::std::string> const getMarketplaceDisabledReasonWithErrorCode() const
        /*override*/;

    // vIndex: 132
    virtual void linkToOffer(::std::string const&, bool) /*override*/;

    // vIndex: 133
    virtual void linkToPage(::std::string const&) /*override*/;

    // vIndex: 134
    virtual void linkTo3PServerOffers(::std::string const&, ::std::string const&) /*override*/;

    // vIndex: 135
    virtual void navigateToMarketplaceInventoryScreen(::InventoryTabIndex) /*override*/;

    // vIndex: 136
    virtual void navigateToStoreHomeScreen() /*override*/;

    // vIndex: 137
    virtual void navigateToCoinPurchaseScreen(int, ::std::function<void(bool, int)>) /*override*/;

    // vIndex: 138
    virtual void navigateToPurchaseOfferScreen(::StoreCatalogItem&, ::StoreNavigationOrigin, bool const) /*override*/;

    // vIndex: 139
    virtual void navigateToDressingRoomOfferScreen(::std::string const&) /*override*/;

    // vIndex: 140
    virtual void navigateToProfileScreen() /*override*/;

    // vIndex: 141
    virtual void navigateToServersScreen(bool const) /*override*/;

    // vIndex: 142
    virtual void navigateToHowToPlayScreen(::std::string const&) /*override*/;

    // vIndex: 143
    virtual void navigateToGatheringInfoScreen(bool) /*override*/;

    // vIndex: 144
    virtual void navigateToMarketplacePassPDPScreen(::MarketplacePassTabIndex) /*override*/;

    // vIndex: 145
    virtual void navigateToRealmsStoriesTransitionScreen(::Realms::World const&) /*override*/;

    // vIndex: 146
    virtual void tryPushLeaveGameScreen() /*override*/;

    // vIndex: 147
    virtual void tryStartDayOneExperience() /*override*/;

    // vIndex: 148
    virtual bool isReadyToRender() const /*override*/;

    // vIndex: 149
    virtual void onDimensionChangedEvent() /*override*/;

    // vIndex: 150
    virtual void onGameEventNotification(::ui::GameEventNotification) /*override*/;

    // vIndex: 151
    virtual ::std::string getTopScreenName() const /*override*/;

    // vIndex: 152
    virtual void setLeaveGameInProgressAsReadyToContinue() /*override*/;

    // vIndex: 153
    virtual void stopDestroying() /*override*/;

    // vIndex: 154
    virtual void
        onClientCreatedLevel(::std::pair<::std::unique_ptr<::Level>, ::OwnerPtr<::EntityContext>>, ::OwnerPtr<::EntityContext>) /*override*/
        ;

    // vIndex: 155
    virtual uint64 getClientRandomId() const /*override*/;

    // vIndex: 156
    virtual ::UserAuthentication& getUserAuthentication() /*override*/;

    // vIndex: 157
    virtual ::std::weak_ptr<::UserAuthentication> getWeakUserAuthentication() /*override*/;

    // vIndex: 158
    virtual void registerToUserManager(::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&, int) /*override*/;

    // vIndex: 159
    virtual void resumeWithUserManager(::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&, int) /*override*/;

    // vIndex: 161
    virtual void createUserAuthentication(::std::string const&) /*override*/;

    // vIndex: 160
    virtual void createUserAuthentication(uint64, ::std::string const&) /*override*/;

    // vIndex: 162
    virtual ::std::string getPlatformId() const /*override*/;

    // vIndex: 163
    virtual ::std::string getPlatformOnlineId() const /*override*/;

    // vIndex: 164
    virtual bool isHoloCursorNeeded() const /*override*/;

    // vIndex: 165
    virtual bool useController() const /*override*/;

    // vIndex: 166
    virtual bool useTouchscreen() const /*override*/;

    // vIndex: 167
    virtual bool getMouseGrabbed() const /*override*/;

    // vIndex: 168
    virtual bool currentInputModeIsGamePadOrMotionController() const /*override*/;

    // vIndex: 169
    virtual bool currentInputModeIsMouseAndKeyboard() const /*override*/;

    // vIndex: 170
    virtual bool getForceMonoscopic() const /*override*/;

    // vIndex: 171
    virtual bool allowPicking() const /*override*/;

    // vIndex: 172
    virtual bool isShowingMenu() const /*override*/;

    // vIndex: 173
    virtual bool isShowingProgressScreen() const /*override*/;

    // vIndex: 174
    virtual bool isShowingWorldProgressScreen() const /*override*/;

    // vIndex: 175
    virtual bool isShowingRealmsProgressScreen() const /*override*/;

    // vIndex: 176
    virtual bool isShowingDeathScreen() const /*override*/;

    // vIndex: 177
    virtual bool isShowingServerForm() const /*override*/;

    // vIndex: 178
    virtual bool isScreenReplaceable() const /*override*/;

    // vIndex: 179
    virtual bool isInWorldAndNotShowingAnyMenuScreens() const /*override*/;

    // vIndex: 180
    virtual bool isWorldActive() const /*override*/;

    // vIndex: 181
    virtual bool isInRealm() /*override*/;

    // vIndex: 182
    virtual bool readyForShutdown() const /*override*/;

    // vIndex: 183
    virtual bool isPrimaryClient() const /*override*/;

    // vIndex: 184
    virtual bool isEduMode() const /*override*/;

    // vIndex: 185
    virtual bool isGamepadCursorEnabled() const /*override*/;

    // vIndex: 186
    virtual bool isInControlCustomization() const /*override*/;

    // vIndex: 188
    virtual ::Bedrock::NotNullNonOwnerPtr<::Minecraft> getServerData() /*override*/;

    // vIndex: 187
    virtual ::Bedrock::NotNullNonOwnerPtr<::Minecraft const> getServerData() const /*override*/;

    // vIndex: 190
    virtual ::MultiPlayerLevel* getLevel() /*override*/;

    // vIndex: 189
    virtual ::MultiPlayerLevel const* getLevel() const /*override*/;

    // vIndex: 191
    virtual bool hasLevel() const /*override*/;

    // vIndex: 192
    virtual bool isPreGame() const /*override*/;

    // vIndex: 193
    virtual bool isInMultiplayerGame() const /*override*/;

    // vIndex: 194
    virtual bool isMultiPlayerClient() const /*override*/;

    // vIndex: 196
    virtual ::IOptions& getOptions() /*override*/;

    // vIndex: 195
    virtual ::IOptions const& getOptions() const /*override*/;

    // vIndex: 198
    virtual ::std::shared_ptr<::Options> getOptionsPtr() /*override*/;

    // vIndex: 197
    virtual ::std::shared_ptr<::Options const> const getOptionsPtr() const /*override*/;

    // vIndex: 199
    virtual void setUser(::std::shared_ptr<::Social::User> const&) /*override*/;

    // vIndex: 201
    virtual ::std::shared_ptr<::Social::User> getUser() /*override*/;

    // vIndex: 200
    virtual ::std::shared_ptr<::Social::User const> const getUser() const /*override*/;

    // vIndex: 202
    virtual ::Option const& getShowLearningPromptsOption() const /*override*/;

    // vIndex: 203
    virtual ::Option& getShowControlTipsOption() /*override*/;

    // vIndex: 204
    virtual ::Option& getShowControlTipsOverrideOption() /*override*/;

    // vIndex: 205
    virtual double getControlTipsTimeElapsed() const /*override*/;

    // vIndex: 206
    virtual void setControlTipsTimeElapsedStart() /*override*/;

    // vIndex: 207
    virtual ::GameRenderer& getGameRenderer() const /*override*/;

    // vIndex: 208
    virtual ::Bedrock::NonOwnerPointer<::HolosceneRenderer> getHolosceneRenderer() const /*override*/;

    // vIndex: 209
    virtual ::LevelRenderer* getLevelRenderer() const /*override*/;

    // vIndex: 210
    virtual ::LevelRendererCameraProxy* getLevelRendererCameraProxy() const /*override*/;

    // vIndex: 212
    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry> getCameraRegistry() /*override*/;

    // vIndex: 211
    virtual ::Bedrock::NonOwnerPointer<::CameraRegistry const> getCameraRegistry() const /*override*/;

    // vIndex: 213
    virtual ::Bedrock::NonOwnerPointer<::EntitySystems> getCameraSystems() /*override*/;

    // vIndex: 214
    virtual ::LightTexture* getLightTexture() /*override*/;

    // vIndex: 215
    virtual void setupLevelRendering(::MultiPlayerLevel&, ::WeakEntityRef) /*override*/;

    // vIndex: 216
    virtual ::mce::ViewportInfo const& getViewportInfo() const /*override*/;

    // vIndex: 217
    virtual void setViewportInfo(::mce::ViewportInfo const&) /*override*/;

    // vIndex: 218
    virtual ::Vec2 getNormalizedViewportSize() const /*override*/;

    // vIndex: 219
    virtual void updateChunkRadius() /*override*/;

    // vIndex: 220
    virtual void setUITexture(::mce::Texture*) /*override*/;

    // vIndex: 221
    virtual ::mce::Texture* getUITexture() /*override*/;

    // vIndex: 222
    virtual void setLevelTexture(::mce::Texture*) /*override*/;

    // vIndex: 223
    virtual ::mce::Texture* getLevelTexture() /*override*/;

    // vIndex: 224
    virtual void setUICursorTexture(::mce::TexturePtr) /*override*/;

    // vIndex: 225
    virtual ::mce::TexturePtr getUICursorTexture() const /*override*/;

    // vIndex: 226
    virtual ::mce::Camera& getCamera() /*override*/;

    // vIndex: 227
    virtual ::ShaderColor& getShaderColor() /*override*/;

    // vIndex: 228
    virtual ::ShaderColor& getDarkShaderColor() /*override*/;

    // vIndex: 229
    virtual void clearGraphicsCache() /*override*/;

    // vIndex: 230
    virtual void getNormalizedUICursorTransform(::MatrixStack::MatrixStackRef&, float) /*override*/;

    // vIndex: 231
    virtual bool shouldRenderUICursor() const /*override*/;

    // vIndex: 232
    virtual bool getRenderPlayerModel() const /*override*/;

    // vIndex: 233
    virtual ::DeferredLighting& getDeferredLighting() /*override*/;

    // vIndex: 234
    virtual float getGuiScale() const /*override*/;

    // vIndex: 235
    virtual ::Option const& getGuiScaleOption() const /*override*/;

    // vIndex: 236
    virtual int getGuiScaleOffset() const /*override*/;

    // vIndex: 237
    virtual void setGuiScaleOffset(int) /*override*/;

    // vIndex: 238
    virtual void renderImGui(::ScreenContext&, bool) /*override*/;

    // vIndex: 240
    virtual ::Bedrock::NotNullNonOwnerPtr<::GuiData> getGuiData() /*override*/;

    // vIndex: 239
    virtual ::Bedrock::NotNullNonOwnerPtr<::GuiData const> getGuiData() const /*override*/;

    // vIndex: 241
    virtual ::GuidedFlowManager& getGuidedFlowManager() /*override*/;

    // vIndex: 242
    virtual ::PixelCalc const& getDpadScale() const /*override*/;

    // vIndex: 243
    virtual ::Bedrock::NotNullNonOwnerPtr<::DateManager const> getDateManager() const /*override*/;

    // vIndex: 244
    virtual void addOverrideHoursToDateTime(uint const) /*override*/;

    // vIndex: 245
    virtual ::ToastManager& getToastManager() /*override*/;

    // vIndex: 246
    virtual ::ClipboardProxy<::ApplicationSignal::ClipboardCopy, ::ApplicationSignal::ClipboardPasteRequest>&
    getClipboardManager() /*override*/;

    // vIndex: 248
    virtual ::AbstractScene* getTopScene() /*override*/;

    // vIndex: 247
    virtual ::AbstractScene const* getTopScene() const /*override*/;

    // vIndex: 250
    virtual ::AbstractScene* getActiveScene() /*override*/;

    // vIndex: 249
    virtual ::AbstractScene const* getActiveScene() const /*override*/;

    // vIndex: 251
    virtual ::SceneFactory& getSceneFactory() const /*override*/;

    // vIndex: 252
    virtual ::OreUI::SceneProvider& getSceneProvider() const /*override*/;

    // vIndex: 254
    virtual ::ui::ScreenTechStackSelector& getScreenTechStackSelector() /*override*/;

    // vIndex: 256
    virtual ::Bedrock::NotNullNonOwnerPtr<::SceneStack const> getClientSceneStack() const /*override*/;

    // vIndex: 255
    virtual ::Bedrock::NotNullNonOwnerPtr<::SceneStack> getClientSceneStack() /*override*/;

    // vIndex: 257
    virtual ::OreUI::Router& getClientUIRouter() const /*override*/;

    // vIndex: 258
    virtual ::ISceneStack& getMainSceneStackInterface() /*override*/;

    // vIndex: 260
    virtual ::Bedrock::NotNullNonOwnerPtr<::SceneStack> getMainSceneStack() /*override*/;

    // vIndex: 259
    virtual ::Bedrock::NotNullNonOwnerPtr<::SceneStack const> getMainSceneStack() const /*override*/;

    // vIndex: 262
    virtual ::Bedrock::NotNullNonOwnerPtr<::SceneStack const> getCurrentSceneStack() const /*override*/;

    // vIndex: 261
    virtual ::Bedrock::NotNullNonOwnerPtr<::SceneStack> getCurrentSceneStack() /*override*/;

    // vIndex: 264
    virtual ::OreUI::Router& getCurrentUIRouter() /*override*/;

    // vIndex: 263
    virtual ::OreUI::Router const& getCurrentUIRouter() const /*override*/;

    // vIndex: 265
    virtual ::OreUI::ITelemetry& getOreUITelemetry() /*override*/;

    // vIndex: 253
    virtual ::WeakRef<::OreUI::UIBlockThumbnailAtlasManager> getOreUIBlockThumbnailAtlasManager() const /*override*/;

    // vIndex: 266
    virtual ::Bedrock::NotNullNonOwnerPtr<::SceneStack>
    prepareSceneFor(::ui::SceneType const, ::std::function<::std::shared_ptr<::AbstractScene>()>) /*override*/;

    // vIndex: 267
    virtual ::CachedScenes& getCachedScenes() /*override*/;

    // vIndex: 268
    virtual ::std::string getScreenName() const /*override*/;

    // vIndex: 269
    virtual ::std::string getScreenTelemetry() const /*override*/;

    // vIndex: 270
    virtual ::ui::SceneType getTopSceneType() const /*override*/;

    // vIndex: 271
    virtual ::MobEffectsLayout& getMobEffectsLayout() /*override*/;

    // vIndex: 273
    virtual ::std::string emoticonifyText(::std::string const&) const /*override*/;

    // vIndex: 272
    virtual ::std::string emoticonifyText(::std::string const&, bool) /*override*/;

    // vIndex: 274
    virtual void onMobEffectsChange() /*override*/;

    // vIndex: 275
    virtual void setUISizeAndScale(int, int, float) /*override*/;

    // vIndex: 276
    virtual void forEachVisibleScreen(::std::function<void(::AbstractScene&)>, bool) /*override*/;

    // vIndex: 277
    virtual void forEachScreen(::std::function<bool(::AbstractScene&)>, bool) /*override*/;

    // vIndex: 278
    virtual void forEachScreenConst(::std::function<bool(::AbstractScene const&)>, bool) const /*override*/;

    // vIndex: 279
    virtual bool updateSceneStack() /*override*/;

    // vIndex: 280
    virtual void
    forEachAlwaysAcceptInputScreen(::std::function<void(::AbstractScene&)>, ::AbstractScene const*) /*override*/;

    // vIndex: 281
    virtual void forEachAlwaysAcceptInputScreenWithTop(::std::function<void(::AbstractScene&)>) /*override*/;

    // vIndex: 282
    virtual void
    showPlayerProfile(::std::string const&, ::mce::UUID, ::std::string const&, ::std::string const&) /*override*/;

    // vIndex: 283
    virtual bool isInGameInputEnabled() const /*override*/;

    // vIndex: 284
    virtual void setInGameInputEnabled(bool) /*override*/;

    // vIndex: 285
    virtual ::Vec2 getSafeZoneScale() const /*override*/;

    // vIndex: 286
    virtual void
    verifySkinApproval(::std::string const&, ::std::function<void(::std::string)> const&, ::std::function<void()> const&)
        const /*override*/;

    // vIndex: 287
    virtual ::InputMode getCurrentInputMode() const /*override*/;

    // vIndex: 288
    virtual bool isTouchGameplayAllowed() const /*override*/;

    // vIndex: 289
    virtual ::Bedrock::NonOwnerPointer<::MinecraftInputHandler> getMinecraftInput() const /*override*/;

    // vIndex: 290
    virtual void setHoloInput(::std::unique_ptr<::HolographicPlatform>) /*override*/;

    // vIndex: 291
    virtual ::HolographicPlatform& getHoloInput() const /*override*/;

    // vIndex: 292
    virtual ::VoiceSystem& getVoiceSystem() const /*override*/;

    // vIndex: 293
    virtual ::KeyboardManager& getKeyboardManager() /*override*/;

    // vIndex: 294
    virtual void setVoiceSystem(::std::unique_ptr<::VoiceSystem>) /*override*/;

    // vIndex: 295
    virtual void setLastPointerLocation(float, float, float) /*override*/;

    // vIndex: 297
    virtual void clearTouchPointerLocations() /*override*/;

    // vIndex: 298
    virtual void clearTouchPointerLocation(int) /*override*/;

    // vIndex: 312
    virtual void updateTouchPointerLocation(int, float, float) /*override*/;

    // vIndex: 296
    virtual ::Vec3 getLastPointerLocation() /*override*/;

    // vIndex: 313
    virtual ::Vec2 getTouchPointerLocation(int) const /*override*/;

    // vIndex: 314
    virtual void updateActionPointerId(int) /*override*/;

    // vIndex: 315
    virtual int getActionPointerId() const /*override*/;

    // vIndex: 316
    virtual bool shouldUseLastPointerLocationOnFocusChange() /*override*/;

    // vIndex: 317
    virtual void adjustGazeCursorByMouse(float, float) /*override*/;

    // vIndex: 318
    virtual bool currentScreenShouldStealMouse() /*override*/;

    // vIndex: 319
    virtual ::BuildActionIntention& getInProgressBAI() const /*override*/;

    // vIndex: 320
    virtual bool newDictationDataAvailable() const /*override*/;

    // vIndex: 321
    virtual void clearDictationDataAvailable() /*override*/;

    // vIndex: 322
    virtual ::std::string const& getDictationText() const /*override*/;

    // vIndex: 323
    virtual ::PacketSender& getPacketSender() /*override*/;

    // vIndex: 325
    virtual ::ClientNetworkSystem& getClientNetworkSystem() /*override*/;

    // vIndex: 324
    virtual ::ClientNetworkSystem const& getClientNetworkSystem() const /*override*/;

    // vIndex: 331
    virtual ::glm::vec2 getGamepadCursorPosition() const /*override*/;

    // vIndex: 299
    virtual void updateControlOptionState(uint, bool) /*override*/;

    // vIndex: 300
    virtual void clearActiveControlOptions() /*override*/;

    // vIndex: 301
    virtual ::std::set<uint> const& getActiveControlOptions() const /*override*/;

    // vIndex: 302
    virtual ::std::vector<::OptionID> getActiveOptionIDs(::ControlOptionType) const /*override*/;

    // vIndex: 303
    virtual void setNumberOfActiveConfigs(int) /*override*/;

    // vIndex: 304
    virtual int getNumberOfActiveConfigs() const /*override*/;

    // vIndex: 305
    virtual bool isNoConfigSelected() const /*override*/;

    // vIndex: 306
    virtual void setNumberOfEnabledConfigs(int) /*override*/;

    // vIndex: 307
    virtual int getNumberOfEnabledConfigs() const /*override*/;

    // vIndex: 308
    virtual void setWYSIWYGState(::WYSIWYGState) /*override*/;

    // vIndex: 309
    virtual ::WYSIWYGState getWYSIWYGState() const /*override*/;

    // vIndex: 310
    virtual void setOtherConfigsExistInThisCategory(bool) /*override*/;

    // vIndex: 311
    virtual bool getOtherConfigsExistInThisCategory() const /*override*/;

    // vIndex: 326
    virtual void setMoveTurnInput(::std::unique_ptr<::ClientMoveInputHandler>) /*override*/;

    // vIndex: 327
    virtual void setupPersistentControls(::InputMode) /*override*/;

    // vIndex: 328
    virtual void resetPlayerMovement() /*override*/;

    // vIndex: 329
    virtual void suspendPredictedMovement() /*override*/;

    // vIndex: 330
    virtual void onClientInputInitComplete() /*override*/;

    // vIndex: 332
    virtual void setClientInputHandler(::std::unique_ptr<::ClientInputHandler>) /*override*/;

    // vIndex: 333
    virtual ::ClientInputHandler* getInput() const /*override*/;

    // vIndex: 334
    virtual int getControllerId() const /*override*/;

    // vIndex: 335
    virtual bool hasConnectedController() const /*override*/;

    // vIndex: 336
    virtual ::SubClientId getClientSubId() const /*override*/;

    // vIndex: 337
    virtual void setSuspendInput(bool) /*override*/;

    // vIndex: 338
    virtual void setSuspendDirectionalInput(bool) /*override*/;

    // vIndex: 339
    virtual void setDisableInput(bool) /*override*/;

    // vIndex: 340
    virtual void grabMouse() /*override*/;

    // vIndex: 341
    virtual void releaseMouse() /*override*/;

    // vIndex: 342
    virtual void refocusMouse(bool) /*override*/;

    // vIndex: 343
    virtual void setMouseType(::ui::MousePointerType) /*override*/;

    // vIndex: 344
    virtual void resetBai(int) /*override*/;

    // vIndex: 345
    virtual void clearInProgressBAI() /*override*/;

    // vIndex: 346
    virtual ::Bedrock::NotNullNonOwnerPtr<::SoundEngine> getSoundEngine() const /*override*/;

    // vIndex: 347
    virtual void play(::std::string const&, ::Vec3 const&, float, float) /*override*/;

    // vIndex: 348
    virtual void playUI(::std::string const&, float, float) /*override*/;

    // vIndex: 349
    virtual void muteAudio() /*override*/;

    // vIndex: 350
    virtual void unMuteAudio() /*override*/;

    // vIndex: 351
    virtual void fadeOutMusic() const /*override*/;

    // vIndex: 352
    virtual ::TaskGroup& getTaskGroup() /*override*/;

    // vIndex: 353
    virtual void onFullVanillaPackOnStack() /*override*/;

    // vIndex: 354
    virtual bool isFullVanillaPackOnStack() const /*override*/;

    // vIndex: 355
    virtual void onPlayerLoaded(::Player&) /*override*/;

    // vIndex: 356
    virtual void setClientGameMode(::GameType) /*override*/;

    // vIndex: 357
    virtual void resetToDefaultGameMode() /*override*/;

    // vIndex: 358
    virtual ::IGameConnectionListener& getGameConnectionListener() /*override*/;

    // vIndex: 359
    virtual void connectToThirdPartyServer(::std::string const&, ::std::string const&, int) /*override*/;

    // vIndex: 360
    virtual void startExternalNetworkWorld(::Social::GameConnectionInfo, ::std::string const&, bool) /*override*/;

    // vIndex: 361
    virtual bool isReadyToReconnect() const /*override*/;

    // vIndex: 362
    virtual bool checkForPiracy() /*override*/;

    // vIndex: 363
    virtual void updateChatFilterStatus(::UIProfanityContext&) /*override*/;

    // vIndex: 364
    virtual void updateControllerHandling() /*override*/;

    // vIndex: 3
    virtual void onPlayerDestruction(::Player&) /*override*/;

    // vIndex: 365
    virtual void setBehaviorCommandCallback(::std::function<void(::std::string const&, ::BehaviorStatus)>) /*override*/;

    // vIndex: 366
    virtual void setBehaviorCommandStatus(::std::string const&, ::BehaviorStatus) /*override*/;

    // vIndex: 367
    virtual void setConnectGamepadScreenActive(bool) /*override*/;

    // vIndex: 368
    virtual ::Core::PathBuffer<::std::string> requestScreenshot(::ScreenshotOptions&) /*override*/;

    // vIndex: 369
    virtual ::Bedrock::NotNullNonOwnerPtr<::DevConsoleLogger> getDevConsoleLogger() const /*override*/;

    // vIndex: 370
    virtual ::std::shared_ptr<::FileDataRequest>
    requestImageFromUrl(::std::string const&, ::std::function<void(::Bedrock::Http::Status, ::Core::Path const&, uint64)>) /*override*/
        ;

    // vIndex: 415
    virtual void setActiveFileStorageArea(::std::shared_ptr<::Core::FileStorageArea>) /*override*/;

    // vIndex: 1
    virtual void onExtendDiskSpace(
        bool const                                bSet,
        ::std::weak_ptr<::Core::FileStorageArea>& fileStorageAreaWeakPtr,
        uint64                                    freeSpace,
        ::std::function<void()>                   onHandledEventCallback
    ) /*override*/;

    // vIndex: 2
    virtual void onLowDiskSpace(bool const bSet) /*override*/;

    // vIndex: 3
    virtual void onOutOfDiskSpace(bool const bSet) /*override*/;

    // vIndex: 4
    virtual void onCriticalDiskError(bool const bSet, ::Core::LevelStorageState const& errorCode) /*override*/;

    // vIndex: 1
    virtual void onLevelCorrupt() /*override*/;

    // vIndex: 2
    virtual void onCriticalScriptError(char const*, char const*) /*override*/;

    // vIndex: 3
    virtual void onGameModeChanged() /*override*/;

    // vIndex: 4
    virtual void onBeforeSimTick() /*override*/;

    // vIndex: 5
    virtual void onTick(int, int) /*override*/;

    // vIndex: 6
    virtual void onInternetUpdate() /*override*/;

    // vIndex: 7
    virtual void onGameSessionReset() /*override*/;

    // vIndex: 8
    virtual void onLevelExit() /*override*/;

    // vIndex: 9
    virtual void onRequestResourceReload() /*override*/;

    // vIndex: 10
    virtual void updateScreens() /*override*/;

    // vIndex: 371
    virtual void initializeRenderResources() /*override*/;

    // vIndex: 372
    virtual void postInitRenderResources() /*override*/;

    // vIndex: 373
    virtual void onAppSuspended() /*override*/;

    // vIndex: 374
    virtual void onAppSuspensionDisconnect() /*override*/;

    // vIndex: 375
    virtual void onAppResumed() /*override*/;

    // vIndex: 376
    virtual void
    onActiveResourcePacksChanged(::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const&) /*override*/;

    // vIndex: 377
    virtual void
    reloadEntityRenderers(::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const&) /*override*/;

    // vIndex: 378
    virtual ::BlockTessellator& getBlockTessellator() /*override*/;

    // vIndex: 379
    virtual ::BlockActorRenderDispatcher& getBlockEntityRenderDispatcher() /*override*/;

    // vIndex: 380
    virtual ::std::shared_ptr<::ActorRenderDispatcher> getEntityRenderDispatcher() /*override*/;

    // vIndex: 381
    virtual ::ActorBlockRenderer& getEntityBlockRenderer() /*override*/;

    // vIndex: 382
    virtual ::ItemInHandRenderer* getItemInHandRenderer() /*override*/;

    // vIndex: 383
    virtual ::ItemRenderer* getItemRenderer() /*override*/;

    // vIndex: 384
    virtual ::std::deque<::std::string>& getSentMessageHistory() /*override*/;

    // vIndex: 385
    virtual ::std::deque<::std::string>& getDevConsoleMessageHistory() /*override*/;

    // vIndex: 386
    virtual ::Bedrock::NotNullNonOwnerPtr<::UIProfanityContext> getUIProfanityContext() const /*override*/;

    // vIndex: 387
    virtual void initTTSClient(::std::shared_ptr<::TextToSpeechClient>) /*override*/;

    // vIndex: 389
    virtual ::std::shared_ptr<::TextToSpeechClient> getTTSClient() /*override*/;

    // vIndex: 388
    virtual ::std::shared_ptr<::TextToSpeechClient const> getTTSClient() const /*override*/;

    // vIndex: 390
    virtual ::std::shared_ptr<::ITTSEventManager> getTTSEventManager() /*override*/;

    // vIndex: 391
    virtual void
    addTTSMessage(::std::string const&, ::ProfanityFilterContext, bool, ::std::string const&, bool, bool) /*override*/;

    // vIndex: 392
    virtual void initCommands() /*override*/;

    // vIndex: 393
    virtual uint getUserId() const /*override*/;

    // vIndex: 394
    virtual bool isPrimaryUser() const /*override*/;

    // vIndex: 395
    virtual double getServerConnectionTime() const /*override*/;

    // vIndex: 397
    virtual ::ClientHMDState& getHMDState() /*override*/;

    // vIndex: 396
    virtual ::ClientHMDState const& getHMDState() const /*override*/;

    // vIndex: 398
    virtual void setServerPingTime(int) /*override*/;

    // vIndex: 399
    virtual int getServerPingTime() const /*override*/;

    // vIndex: 400
    virtual void setDefaultPlayscreenTab(::PlayScreenDefaultTab) /*override*/;

    // vIndex: 401
    virtual void setClientInstanceState(::ClientInstanceState const&) /*override*/;

    // vIndex: 402
    virtual void setUIEventCoordinator(::std::unique_ptr<::UIEventCoordinator>&&) /*override*/;

    // vIndex: 403
    virtual ::Bedrock::NotNullNonOwnerPtr<::UIEventCoordinator> getUIEventCoordinator() /*override*/;

    // vIndex: 404
    virtual ::Bedrock::NotNullNonOwnerPtr<::ClientInstanceEventCoordinator> getEventCoordinator() /*override*/;

    // vIndex: 405
    virtual ::ClientNetworkEventCoordinator& getClientNetworkEventCoordinator() /*override*/;

    // vIndex: 406
    virtual ::ClientScriptEventCoordinator& getClientScriptEventCoordinator() /*override*/;

    // vIndex: 407
    virtual void computeScreenCoordsFromScreenNormCoords(float, float, short&, short&) /*override*/;

    // vIndex: 408
    virtual ::std::chrono::steady_clock::time_point getNoBlockBreakUntil() /*override*/;

    // vIndex: 409
    virtual void setNoBlockBreakUntil(::std::chrono::steady_clock::time_point) /*override*/;

    // vIndex: 410
    virtual void setDictation(::std::string const&) /*override*/;

    // vIndex: 411
    virtual void setNewDictationString(bool) /*override*/;

    // vIndex: 414
    virtual ::GameCallbacks& getGameCallbacks() /*override*/;

    // vIndex: 412
    virtual ::GameModuleClient* getGameModule() /*override*/;

    // vIndex: 413
    virtual ::ClientHitDetectCoordinator& getHitEventCoordinator() /*override*/;

    // vIndex: 416
    virtual void sendClientEnteredLevel() /*override*/;

    // vIndex: 417
    virtual ::HitDetectSystem* getHitDetectSystem() /*override*/;

    // vIndex: 418
    virtual bool isPlaying() const /*override*/;

    // vIndex: 419
    virtual ::ClientInstanceState getClientInstanceState() const /*override*/;

    // vIndex: 420
    virtual ::LatencyGraphDisplay* getLatencyGraphDisplay() const /*override*/;

    // vIndex: 421
    virtual ::PlayerCapabilities::IClientController const& getClientCapabilities() const /*override*/;

    // vIndex: 422
    virtual ::cg::math::Rect<float>
    calculateViewPortModifiers(::SubClientId const, uint64 const, ::SplitScreenDirection const) const /*override*/;

    // vIndex: 423
    virtual ::std::weak_ptr<::IClientInstance> getWeakPtrToThis() /*override*/;

    // vIndex: 424
    virtual ::ClientRequirementVerifier const& getClientRequirementVerifier() const /*override*/;

    // vIndex: 426
    virtual ::Bedrock::NotNullNonOwnerPtr<::FogDefinitionRegistry const> getFogDefinitionRegistry() const /*override*/;

    // vIndex: 425
    virtual ::Bedrock::NotNullNonOwnerPtr<::FogDefinitionRegistry> getFogDefinitionRegistry() /*override*/;

    // vIndex: 428
    virtual ::Bedrock::NotNullNonOwnerPtr<::FogManager const> getFogManager() const /*override*/;

    // vIndex: 427
    virtual ::Bedrock::NotNullNonOwnerPtr<::FogManager> getFogManager() /*override*/;

    // vIndex: 429
    virtual ::Bedrock::NotNullNonOwnerPtr<::ScreenLoadTimeTracker> getScreenLoadTimeTracker() /*override*/;

    // vIndex: 430
    virtual ::ItemRegistryRef getItemRegistry() const /*override*/;

    // vIndex: 431
    virtual ::std::weak_ptr<::BlockTypeRegistry> getBlockRegistry() const /*override*/;

    // vIndex: 432
    virtual ::Bedrock::NotNullNonOwnerPtr<::DisconnectionRequestHandler> getDisconnectionRequestHandler() const
        /*override*/;

    // vIndex: 433
    virtual float getRemoteServerTimeMs() const /*override*/;

    // vIndex: 434
    virtual void setRemoteServerTimeMs(float) /*override*/;

    // vIndex: 435
    virtual float getRemoteServerNetworkTimeMs() const /*override*/;

    // vIndex: 436
    virtual void setRemoteServerNetworkTimeMs(float) /*override*/;

    // vIndex: 437
    virtual ::Bedrock::NonOwnerPointer<::ClientScriptManager> getClientScriptManager() /*override*/;

    // vIndex: 438
    virtual ::Scripting::ScriptEngine* getScriptingEngine() /*override*/;

    // vIndex: 439
    virtual ::Bedrock::NonOwnerPointer<::WorldTransferAgent> const getWorldTransferAgent() const /*override*/;

    // vIndex: 440
    virtual ::Bedrock::NotNullNonOwnerPtr<::PlayerReportHandler> getPlayerReportHandler() /*override*/;

    // vIndex: 442
    virtual void flagDisconnectionAndNotify(::Connection::DisconnectFailReason) /*override*/;

    // vIndex: 441
    virtual void flagDisconnectionAndNotify(::DisconnectionScreenParams const&) /*override*/;

    // vIndex: 443
    virtual void setClientUpdateAndRenderThrottling(bool, int, float) /*override*/;

    // vIndex: 444
    virtual bool isClientUpdateAndRenderThrottlingEnabled() const /*override*/;

    // vIndex: 445
    virtual int getClientUpdateAndRenderThrottlingThreshold() const /*override*/;

    // vIndex: 446
    virtual float getClientUpdateAndRenderThrottlingScalar() const /*override*/;

    // vIndex: 447
    virtual bool isUserBanned() const /*override*/;

    // vIndex: 448
    virtual double getGameUpdateDurationInSeconds() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onInitMinecraftGame();

    MCAPI void $onDestroyMinecraftGame();

    MCAPI void
    $init(::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&, ::ClientNetworkSystem&, ::Timer&, ::Timer&, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&, int, ::IGameModuleApp&);

    MCAPI void $initSceneFactory(::std::unique_ptr<::SceneFactory>, ::std::unique_ptr<::OreUI::SceneProvider>);

    MCAPI void $setUiRouter(::std::unique_ptr<::OreUI::Router>);

    MCAPI void $initGraphics();

    MCAPI void $stop();

    MCAPI void $teardown();

    MCAPI void $preShutDown();

    MCAPI void $setGameConnectionInfo(::Social::GameConnectionInfo const&);

    MCAPI void $onStartJoinGame(bool, ::std::string const&, int, ::Social::MultiplayerServiceIdentifier);

    MCAPI void $onCancelJoinGame();

    MCAPI void $requestLeaveGameAsync();

    MCAPI void $requestLeaveGame(bool, bool);

    MCAPI void $stopPlayScreen();

    MCAPI bool $isLeaveGameDone() const;

    MCAPI void $setupPlayScreenForLeaveGame();

    MCAPI void $resetPrimaryClient();

    MCAPI void $resetGameSession();

    MCAPI void $tick();

    MCAPI void $frameUpdate(::FrameUpdateContext&);

    MCAPI void $preFrameTick();

    MCAPI bool $update(bool);

    MCAPI void $endFrame();

    MCAPI float $getFrameAlpha();

    MCAPI void $startSubClientLateJoin(bool, ::std::unique_ptr<::GameModuleClient>);

    MCAPI void
    $setupClientGame(::std::function<void(::ClientGameSetupResult)>&&, bool, ::std::unique_ptr<::GameModuleClient>);

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::ClientGameSetupResult>>
    $setupClientGame(bool, ::std::unique_ptr<::GameModuleClient>);

    MCAPI ::BlockSource* $getRegion();

    MCAPI ::LocalPlayer* $getLocalPlayer() const;

    MCAPI void $setupPrimaryClientEditorManager();

    MCAPI ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> $getLocalEditorPlayer() const;

    MCAPI ::Bedrock::NonOwnerPointer<::Editor::IEditorManager> $getEditorManager() const;

    MCAPI bool $isPlayerInEditor() const;

    MCAPI ::LocalPlayerChangedConnector $getLocalPlayerChangedConnector();

    MCAPI ::WeakEntityRef $getLocalUser() const;

    MCAPI ::Actor* $getCameraActor() const;

    MCAPI void $setCameraActor(::Actor*);

    MCAPI ::ListenerState const* $getListenerState() const;

    MCAPI ::Actor* $getCameraTargetActor() const;

    MCAPI void $setCameraTargetActor(::Actor*);

    MCAPI ::WeakEntityRef $getCameraEntity() const;

    MCAPI void $getRawCameraEntities(::WeakEntityRef&, ::WeakEntityRef&) const;

    MCAPI void $setRawCameraEntities(::WeakEntityRef, ::WeakEntityRef);

    MCAPI ::HitResult const& $getLatestHitResult() const;

    MCAPI bool $isLeavingGame() const;

    MCAPI bool $isDestroyingGame() const;

    MCAPI bool $isShuttingDown() const;

    MCAPI bool $useLowFrequencyUIRender() const;

    MCAPI bool $isSplitScreenActive() const;

    MCAPI bool $isVRClient() const;

    MCAPI bool $isARClient() const;

    MCAPI bool $isARVRClient() const;

    MCAPI bool $isHoloviewerMode() const;

    MCAPI bool $isHoloscreenMode() const;

    MCAPI bool $isLivingroomMode() const;

    MCAPI bool $isExitingLevel() const;

    MCAPI bool $isNotVLRMode() const;

    MCAPI bool $isHoloRealityMode() const;

    MCAPI bool $isRealityFullVRMode() const;

    MCAPI bool $isInBedScreen() const;

    MCAPI bool $isInDeathScreen() const;

    MCAPI bool $isKeyboardEnabled() const;

    MCAPI bool $isVRTransitioning() const;

    MCAPI bool $hasCommands() const;

    MCAPI float $getHoloviewerScale() const;

    MCAPI int $getSplitScreenCount() const;

    MCAPI bool $isStereoRendering() const;

    MCAPI bool $isShowingLoadingScreen() const;

    MCAPI bool $shouldDisconnectOnAppSuspended() const;

    MCAPI bool $isGamePlayTipsEnabled() const;

    MCAPI bool $isPlatformNX() const;

    MCAPI bool $isLocalSplitscreenWith(::ActorUniqueID const&) const;

    MCAPI bool $isValidCrossPlatformSkin() const;

    MCAPI bool $isCurrentSkinPlatformLocked() const;

    MCAPI bool $isSelectedSkinInitialized() const;

    MCAPI ::SplitScreenInfo $getSplitScreenInfo() const;

    MCAPI int $getCurrentMaxGUIScaleIndex() const;

    MCAPI float const& $getRealityModeFrameFactor() const;

    MCAPI void $setRealityModeFrameFactor(float const&);

    MCAPI bool $getRealityModeToggleTriggered() const;

    MCAPI void $setRealityModeToggleTriggered(bool);

    MCAPI bool $getHandlingControllerDisconnect();

    MCAPI void $setOpenControllerDisconnectScreen(bool);

    MCAPI ::ClientPlayMode $getClientPlayMode() const;

    MCAPI void $setClientPlayMode(::ClientPlayMode const&);

    MCAPI bool $getLivingRoomForCredits() const;

    MCAPI void $setLivingRoomForCredits(bool);

    MCAPI ::std::function<void()> $getCreditsCallback();

    MCAPI void $setCreditsCallback(::std::function<void()>);

    MCAPI void $setupTransitionForCredits(::std::function<void()>);

    MCAPI void $refreshScreenSizeData();

    MCAPI void $onScreenSizeChanged(int, int, float);

    MCAPI void $onGuiScaleOffsetChanged();

    MCAPI void $onSafeZoneChanged();

    MCAPI bool $hasDismissedNewPlayerFlow() const;

    MCAPI void $quit(::std::string const&, ::std::string const&);

    MCAPI ::IMinecraftGame& $getMinecraftGame_DEPRECATED() const;

    MCAPI ::IClientInstances& $getClientInstances() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Automation::AutomationClient> $getAutomationClient() const;

    MCAPI ::IMinecraftEventing& $getEventing() const;

    MCAPI ::IConnectionEventing& $getConnectionEventing() const;

    MCAPI ::FontHandle $getFontHandle() const;

    MCAPI ::FontHandle $getRuneFontHandle() const;

    MCAPI ::FontHandle $getUnicodeFontHandle() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> $getGeometryGroup() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::BlockCullingGroup> $getBlockCullingGroup() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> $getMultiplayerServiceManager() const;

    MCAPI ::IResourcePackRepository& $getResourcePackRepository() const;

    MCAPI ::ResourcePackManager& $getResourcePackManager() const;

    MCAPI ::PackManifestFactory& $getPackManifestFactory();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> $getKeyProvider() const;

    MCAPI ::PacksInfoData const& $getHostSpecifiedPacks() const;

    MCAPI ::std::shared_ptr<::SkinRepository> $getSkinRepository() const;

    MCAPI ::PersonaRepository& $getPersonaRepository() const;

    MCAPI ::MarketplaceServicesManager& $getMarketplaceServicesManager() const;

    MCAPI ::SkinRepositoryClientInterface& $getSkinRepositoryClientInterface() const;

    MCAPI ::persona::PersonaPieceCollectionModel& $getPersonaPieceCollectionModel();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> $getStoreCatalogRepository();

    MCAPI ::std::shared_ptr<::mce::TextureGroup> $getTextureGroup() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::mce::TextureGroup> $getStoreCacheTextures() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::MinecraftGraphics> $getMinecraftGraphics() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IUIRepository> $getUIRepository() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> $getUserManager() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::TrialManager> $getTrialManager() const;

    MCAPI bool $wantToQuit() const;

    MCAPI bool $isPrimaryLevelCrossPlatformMultiplayer() const;

    MCAPI bool $isPrimaryLevelMultiplayer() const;

    MCAPI bool $isAdhocEnabled() const;

    MCAPI bool $isMarketplaceDisabled() const;

    MCAPI ::std::pair<::std::string, ::std::string> const $getMarketplaceDisabledReasonWithErrorCode() const;

    MCAPI void $linkToOffer(::std::string const&, bool);

    MCAPI void $linkToPage(::std::string const&);

    MCAPI void $linkTo3PServerOffers(::std::string const&, ::std::string const&);

    MCAPI void $navigateToMarketplaceInventoryScreen(::InventoryTabIndex);

    MCAPI void $navigateToStoreHomeScreen();

    MCAPI void $navigateToCoinPurchaseScreen(int, ::std::function<void(bool, int)>);

    MCAPI void $navigateToPurchaseOfferScreen(::StoreCatalogItem&, ::StoreNavigationOrigin, bool const);

    MCAPI void $navigateToDressingRoomOfferScreen(::std::string const&);

    MCAPI void $navigateToProfileScreen();

    MCAPI void $navigateToServersScreen(bool const);

    MCAPI void $navigateToHowToPlayScreen(::std::string const&);

    MCAPI void $navigateToGatheringInfoScreen(bool);

    MCAPI void $navigateToMarketplacePassPDPScreen(::MarketplacePassTabIndex);

    MCAPI void $navigateToRealmsStoriesTransitionScreen(::Realms::World const&);

    MCAPI void $tryPushLeaveGameScreen();

    MCAPI void $tryStartDayOneExperience();

    MCAPI bool $isReadyToRender() const;

    MCAPI void $onDimensionChangedEvent();

    MCAPI void $onGameEventNotification(::ui::GameEventNotification);

    MCAPI ::std::string $getTopScreenName() const;

    MCAPI void $setLeaveGameInProgressAsReadyToContinue();

    MCAPI void $stopDestroying();

    MCAPI void
        $onClientCreatedLevel(::std::pair<::std::unique_ptr<::Level>, ::OwnerPtr<::EntityContext>>, ::OwnerPtr<::EntityContext>);

    MCAPI uint64 $getClientRandomId() const;

    MCAPI ::UserAuthentication& $getUserAuthentication();

    MCAPI ::std::weak_ptr<::UserAuthentication> $getWeakUserAuthentication();

    MCAPI void $registerToUserManager(::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&, int);

    MCAPI void $resumeWithUserManager(::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const&, int);

    MCAPI void $createUserAuthentication(::std::string const&);

    MCAPI void $createUserAuthentication(uint64, ::std::string const&);

    MCAPI ::std::string $getPlatformId() const;

    MCAPI ::std::string $getPlatformOnlineId() const;

    MCAPI bool $isHoloCursorNeeded() const;

    MCAPI bool $useController() const;

    MCAPI bool $useTouchscreen() const;

    MCAPI bool $getMouseGrabbed() const;

    MCAPI bool $currentInputModeIsGamePadOrMotionController() const;

    MCAPI bool $currentInputModeIsMouseAndKeyboard() const;

    MCAPI bool $getForceMonoscopic() const;

    MCAPI bool $allowPicking() const;

    MCAPI bool $isShowingMenu() const;

    MCAPI bool $isShowingProgressScreen() const;

    MCAPI bool $isShowingWorldProgressScreen() const;

    MCAPI bool $isShowingRealmsProgressScreen() const;

    MCAPI bool $isShowingDeathScreen() const;

    MCAPI bool $isShowingServerForm() const;

    MCAPI bool $isScreenReplaceable() const;

    MCAPI bool $isInWorldAndNotShowingAnyMenuScreens() const;

    MCAPI bool $isWorldActive() const;

    MCAPI bool $isInRealm();

    MCAPI bool $readyForShutdown() const;

    MCAPI bool $isPrimaryClient() const;

    MCAPI bool $isEduMode() const;

    MCAPI bool $isGamepadCursorEnabled() const;

    MCAPI bool $isInControlCustomization() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Minecraft> $getServerData();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Minecraft const> $getServerData() const;

    MCAPI ::MultiPlayerLevel* $getLevel();

    MCAPI ::MultiPlayerLevel const* $getLevel() const;

    MCAPI bool $hasLevel() const;

    MCAPI bool $isPreGame() const;

    MCAPI bool $isInMultiplayerGame() const;

    MCAPI bool $isMultiPlayerClient() const;

    MCAPI ::IOptions& $getOptions();

    MCAPI ::IOptions const& $getOptions() const;

    MCAPI ::std::shared_ptr<::Options> $getOptionsPtr();

    MCAPI ::std::shared_ptr<::Options const> const $getOptionsPtr() const;

    MCAPI void $setUser(::std::shared_ptr<::Social::User> const&);

    MCAPI ::std::shared_ptr<::Social::User> $getUser();

    MCAPI ::std::shared_ptr<::Social::User const> const $getUser() const;

    MCAPI ::Option const& $getShowLearningPromptsOption() const;

    MCAPI ::Option& $getShowControlTipsOption();

    MCAPI ::Option& $getShowControlTipsOverrideOption();

    MCAPI double $getControlTipsTimeElapsed() const;

    MCAPI void $setControlTipsTimeElapsedStart();

    MCAPI ::GameRenderer& $getGameRenderer() const;

    MCAPI ::Bedrock::NonOwnerPointer<::HolosceneRenderer> $getHolosceneRenderer() const;

    MCAPI ::LevelRenderer* $getLevelRenderer() const;

    MCAPI ::LevelRendererCameraProxy* $getLevelRendererCameraProxy() const;

    MCAPI ::Bedrock::NonOwnerPointer<::CameraRegistry> $getCameraRegistry();

    MCAPI ::Bedrock::NonOwnerPointer<::CameraRegistry const> $getCameraRegistry() const;

    MCAPI ::Bedrock::NonOwnerPointer<::EntitySystems> $getCameraSystems();

    MCAPI ::LightTexture* $getLightTexture();

    MCAPI void $setupLevelRendering(::MultiPlayerLevel&, ::WeakEntityRef);

    MCAPI ::mce::ViewportInfo const& $getViewportInfo() const;

    MCAPI void $setViewportInfo(::mce::ViewportInfo const&);

    MCAPI ::Vec2 $getNormalizedViewportSize() const;

    MCAPI void $updateChunkRadius();

    MCAPI void $setUITexture(::mce::Texture*);

    MCAPI ::mce::Texture* $getUITexture();

    MCAPI void $setLevelTexture(::mce::Texture*);

    MCAPI ::mce::Texture* $getLevelTexture();

    MCAPI void $setUICursorTexture(::mce::TexturePtr);

    MCAPI ::mce::TexturePtr $getUICursorTexture() const;

    MCAPI ::mce::Camera& $getCamera();

    MCAPI ::ShaderColor& $getShaderColor();

    MCAPI ::ShaderColor& $getDarkShaderColor();

    MCAPI void $clearGraphicsCache();

    MCAPI void $getNormalizedUICursorTransform(::MatrixStack::MatrixStackRef&, float);

    MCAPI bool $shouldRenderUICursor() const;

    MCAPI bool $getRenderPlayerModel() const;

    MCAPI ::DeferredLighting& $getDeferredLighting();

    MCAPI float $getGuiScale() const;

    MCAPI ::Option const& $getGuiScaleOption() const;

    MCAPI int $getGuiScaleOffset() const;

    MCAPI void $setGuiScaleOffset(int);

    MCAPI void $renderImGui(::ScreenContext&, bool);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::GuiData> $getGuiData();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::GuiData const> $getGuiData() const;

    MCAPI ::GuidedFlowManager& $getGuidedFlowManager();

    MCAPI ::PixelCalc const& $getDpadScale() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::DateManager const> $getDateManager() const;

    MCAPI void $addOverrideHoursToDateTime(uint const);

    MCAPI ::ToastManager& $getToastManager();

    MCAPI ::ClipboardProxy<::ApplicationSignal::ClipboardCopy, ::ApplicationSignal::ClipboardPasteRequest>&
    $getClipboardManager();

    MCAPI ::AbstractScene* $getTopScene();

    MCAPI ::AbstractScene const* $getTopScene() const;

    MCAPI ::AbstractScene* $getActiveScene();

    MCAPI ::AbstractScene const* $getActiveScene() const;

    MCAPI ::SceneFactory& $getSceneFactory() const;

    MCAPI ::OreUI::SceneProvider& $getSceneProvider() const;

    MCAPI ::ui::ScreenTechStackSelector& $getScreenTechStackSelector();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::SceneStack const> $getClientSceneStack() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::SceneStack> $getClientSceneStack();

    MCAPI ::OreUI::Router& $getClientUIRouter() const;

    MCAPI ::ISceneStack& $getMainSceneStackInterface();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::SceneStack> $getMainSceneStack();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::SceneStack const> $getMainSceneStack() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::SceneStack const> $getCurrentSceneStack() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::SceneStack> $getCurrentSceneStack();

    MCAPI ::OreUI::Router& $getCurrentUIRouter();

    MCAPI ::OreUI::Router const& $getCurrentUIRouter() const;

    MCAPI ::OreUI::ITelemetry& $getOreUITelemetry();

    MCAPI ::WeakRef<::OreUI::UIBlockThumbnailAtlasManager> $getOreUIBlockThumbnailAtlasManager() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::SceneStack>
    $prepareSceneFor(::ui::SceneType const, ::std::function<::std::shared_ptr<::AbstractScene>()>);

    MCAPI ::CachedScenes& $getCachedScenes();

    MCAPI ::std::string $getScreenName() const;

    MCAPI ::std::string $getScreenTelemetry() const;

    MCAPI ::ui::SceneType $getTopSceneType() const;

    MCAPI ::MobEffectsLayout& $getMobEffectsLayout();

    MCAPI ::std::string $emoticonifyText(::std::string const&) const;

    MCAPI ::std::string $emoticonifyText(::std::string const&, bool);

    MCAPI void $onMobEffectsChange();

    MCAPI void $setUISizeAndScale(int, int, float);

    MCAPI void $forEachVisibleScreen(::std::function<void(::AbstractScene&)>, bool);

    MCAPI void $forEachScreen(::std::function<bool(::AbstractScene&)>, bool);

    MCAPI void $forEachScreenConst(::std::function<bool(::AbstractScene const&)>, bool) const;

    MCAPI bool $updateSceneStack();

    MCAPI void $forEachAlwaysAcceptInputScreen(::std::function<void(::AbstractScene&)>, ::AbstractScene const*);

    MCAPI void $forEachAlwaysAcceptInputScreenWithTop(::std::function<void(::AbstractScene&)>);

    MCAPI void $showPlayerProfile(::std::string const&, ::mce::UUID, ::std::string const&, ::std::string const&);

    MCAPI bool $isInGameInputEnabled() const;

    MCAPI void $setInGameInputEnabled(bool);

    MCAPI ::Vec2 $getSafeZoneScale() const;

    MCAPI void
    $verifySkinApproval(::std::string const&, ::std::function<void(::std::string)> const&, ::std::function<void()> const&)
        const;

    MCAPI ::InputMode $getCurrentInputMode() const;

    MCAPI bool $isTouchGameplayAllowed() const;

    MCAPI ::Bedrock::NonOwnerPointer<::MinecraftInputHandler> $getMinecraftInput() const;

    MCAPI void $setHoloInput(::std::unique_ptr<::HolographicPlatform>);

    MCAPI ::HolographicPlatform& $getHoloInput() const;

    MCAPI ::VoiceSystem& $getVoiceSystem() const;

    MCAPI ::KeyboardManager& $getKeyboardManager();

    MCAPI void $setVoiceSystem(::std::unique_ptr<::VoiceSystem>);

    MCAPI void $setLastPointerLocation(float, float, float);

    MCAPI void $clearTouchPointerLocations();

    MCAPI void $clearTouchPointerLocation(int);

    MCAPI void $updateTouchPointerLocation(int, float, float);

    MCAPI ::Vec3 $getLastPointerLocation();

    MCAPI ::Vec2 $getTouchPointerLocation(int) const;

    MCAPI void $updateActionPointerId(int);

    MCAPI int $getActionPointerId() const;

    MCAPI bool $shouldUseLastPointerLocationOnFocusChange();

    MCAPI void $adjustGazeCursorByMouse(float, float);

    MCAPI bool $currentScreenShouldStealMouse();

    MCAPI ::BuildActionIntention& $getInProgressBAI() const;

    MCAPI bool $newDictationDataAvailable() const;

    MCAPI void $clearDictationDataAvailable();

    MCAPI ::std::string const& $getDictationText() const;

    MCAPI ::PacketSender& $getPacketSender();

    MCAPI ::ClientNetworkSystem& $getClientNetworkSystem();

    MCAPI ::ClientNetworkSystem const& $getClientNetworkSystem() const;

    MCAPI ::glm::vec2 $getGamepadCursorPosition() const;

    MCAPI void $updateControlOptionState(uint, bool);

    MCAPI void $clearActiveControlOptions();

    MCAPI ::std::set<uint> const& $getActiveControlOptions() const;

    MCAPI ::std::vector<::OptionID> $getActiveOptionIDs(::ControlOptionType) const;

    MCAPI void $setNumberOfActiveConfigs(int);

    MCAPI int $getNumberOfActiveConfigs() const;

    MCAPI bool $isNoConfigSelected() const;

    MCAPI void $setNumberOfEnabledConfigs(int);

    MCAPI int $getNumberOfEnabledConfigs() const;

    MCAPI void $setWYSIWYGState(::WYSIWYGState);

    MCAPI ::WYSIWYGState $getWYSIWYGState() const;

    MCAPI void $setOtherConfigsExistInThisCategory(bool);

    MCAPI bool $getOtherConfigsExistInThisCategory() const;

    MCAPI void $setMoveTurnInput(::std::unique_ptr<::ClientMoveInputHandler>);

    MCAPI void $setupPersistentControls(::InputMode);

    MCAPI void $resetPlayerMovement();

    MCAPI void $suspendPredictedMovement();

    MCAPI void $onClientInputInitComplete();

    MCAPI void $setClientInputHandler(::std::unique_ptr<::ClientInputHandler>);

    MCAPI ::ClientInputHandler* $getInput() const;

    MCAPI int $getControllerId() const;

    MCAPI bool $hasConnectedController() const;

    MCAPI ::SubClientId $getClientSubId() const;

    MCAPI void $setSuspendInput(bool);

    MCAPI void $setSuspendDirectionalInput(bool);

    MCAPI void $setDisableInput(bool);

    MCAPI void $grabMouse();

    MCAPI void $releaseMouse();

    MCAPI void $refocusMouse(bool);

    MCAPI void $setMouseType(::ui::MousePointerType);

    MCAPI void $resetBai(int);

    MCAPI void $clearInProgressBAI();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::SoundEngine> $getSoundEngine() const;

    MCAPI void $play(::std::string const&, ::Vec3 const&, float, float);

    MCAPI void $playUI(::std::string const&, float, float);

    MCAPI void $muteAudio();

    MCAPI void $unMuteAudio();

    MCAPI void $fadeOutMusic() const;

    MCAPI ::TaskGroup& $getTaskGroup();

    MCAPI void $onFullVanillaPackOnStack();

    MCAPI bool $isFullVanillaPackOnStack() const;

    MCAPI void $onPlayerLoaded(::Player&);

    MCAPI void $setClientGameMode(::GameType);

    MCAPI void $resetToDefaultGameMode();

    MCAPI ::IGameConnectionListener& $getGameConnectionListener();

    MCAPI void $connectToThirdPartyServer(::std::string const&, ::std::string const&, int);

    MCAPI void $startExternalNetworkWorld(::Social::GameConnectionInfo, ::std::string const&, bool);

    MCAPI bool $isReadyToReconnect() const;

    MCAPI bool $checkForPiracy();

    MCAPI void $updateChatFilterStatus(::UIProfanityContext&);

    MCAPI void $updateControllerHandling();

    MCAPI void $onPlayerDestruction(::Player&);

    MCAPI void $setBehaviorCommandCallback(::std::function<void(::std::string const&, ::BehaviorStatus)>);

    MCAPI void $setBehaviorCommandStatus(::std::string const&, ::BehaviorStatus);

    MCAPI void $setConnectGamepadScreenActive(bool);

    MCAPI ::Core::PathBuffer<::std::string> $requestScreenshot(::ScreenshotOptions&);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::DevConsoleLogger> $getDevConsoleLogger() const;

    MCAPI ::std::shared_ptr<::FileDataRequest>
    $requestImageFromUrl(::std::string const&, ::std::function<void(::Bedrock::Http::Status, ::Core::Path const&, uint64)>);

    MCAPI void $setActiveFileStorageArea(::std::shared_ptr<::Core::FileStorageArea>);

    MCAPI void $onExtendDiskSpace(
        bool const                                bSet,
        ::std::weak_ptr<::Core::FileStorageArea>& fileStorageAreaWeakPtr,
        uint64                                    freeSpace,
        ::std::function<void()>                   onHandledEventCallback
    );

    MCAPI void $onLowDiskSpace(bool const bSet);

    MCAPI void $onOutOfDiskSpace(bool const bSet);

    MCAPI void $onCriticalDiskError(bool const bSet, ::Core::LevelStorageState const& errorCode);

    MCAPI void $onLevelCorrupt();

    MCAPI void $onCriticalScriptError(char const*, char const*);

    MCAPI void $onGameModeChanged();

    MCAPI void $onBeforeSimTick();

    MCAPI void $onTick(int, int);

    MCAPI void $onInternetUpdate();

    MCAPI void $onGameSessionReset();

    MCAPI void $onLevelExit();

    MCAPI void $onRequestResourceReload();

    MCAPI void $updateScreens();

    MCAPI void $initializeRenderResources();

    MCAPI void $postInitRenderResources();

    MCAPI void $onAppSuspended();

    MCAPI void $onAppSuspensionDisconnect();

    MCAPI void $onAppResumed();

    MCAPI void $onActiveResourcePacksChanged(::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const&);

    MCAPI void $reloadEntityRenderers(::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const&);

    MCAPI ::BlockTessellator& $getBlockTessellator();

    MCAPI ::BlockActorRenderDispatcher& $getBlockEntityRenderDispatcher();

    MCAPI ::std::shared_ptr<::ActorRenderDispatcher> $getEntityRenderDispatcher();

    MCAPI ::ActorBlockRenderer& $getEntityBlockRenderer();

    MCAPI ::ItemInHandRenderer* $getItemInHandRenderer();

    MCAPI ::ItemRenderer* $getItemRenderer();

    MCAPI ::std::deque<::std::string>& $getSentMessageHistory();

    MCAPI ::std::deque<::std::string>& $getDevConsoleMessageHistory();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::UIProfanityContext> $getUIProfanityContext() const;

    MCAPI void $initTTSClient(::std::shared_ptr<::TextToSpeechClient>);

    MCAPI ::std::shared_ptr<::TextToSpeechClient> $getTTSClient();

    MCAPI ::std::shared_ptr<::TextToSpeechClient const> $getTTSClient() const;

    MCAPI ::std::shared_ptr<::ITTSEventManager> $getTTSEventManager();

    MCAPI void $addTTSMessage(::std::string const&, ::ProfanityFilterContext, bool, ::std::string const&, bool, bool);

    MCAPI void $initCommands();

    MCAPI uint $getUserId() const;

    MCAPI bool $isPrimaryUser() const;

    MCAPI double $getServerConnectionTime() const;

    MCAPI ::ClientHMDState& $getHMDState();

    MCAPI ::ClientHMDState const& $getHMDState() const;

    MCAPI void $setServerPingTime(int);

    MCAPI int $getServerPingTime() const;

    MCAPI void $setDefaultPlayscreenTab(::PlayScreenDefaultTab);

    MCAPI void $setClientInstanceState(::ClientInstanceState const&);

    MCAPI void $setUIEventCoordinator(::std::unique_ptr<::UIEventCoordinator>&&);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::UIEventCoordinator> $getUIEventCoordinator();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ClientInstanceEventCoordinator> $getEventCoordinator();

    MCAPI ::ClientNetworkEventCoordinator& $getClientNetworkEventCoordinator();

    MCAPI ::ClientScriptEventCoordinator& $getClientScriptEventCoordinator();

    MCAPI void $computeScreenCoordsFromScreenNormCoords(float, float, short&, short&);

    MCAPI ::std::chrono::steady_clock::time_point $getNoBlockBreakUntil();

    MCAPI void $setNoBlockBreakUntil(::std::chrono::steady_clock::time_point);

    MCAPI void $setDictation(::std::string const&);

    MCAPI void $setNewDictationString(bool);

    MCAPI ::GameCallbacks& $getGameCallbacks();

    MCAPI ::GameModuleClient* $getGameModule();

    MCAPI ::ClientHitDetectCoordinator& $getHitEventCoordinator();

    MCAPI void $sendClientEnteredLevel();

    MCAPI ::HitDetectSystem* $getHitDetectSystem();

    MCAPI bool $isPlaying() const;

    MCAPI ::ClientInstanceState $getClientInstanceState() const;

    MCAPI ::LatencyGraphDisplay* $getLatencyGraphDisplay() const;

    MCAPI ::PlayerCapabilities::IClientController const& $getClientCapabilities() const;

    MCAPI ::cg::math::Rect<float>
    $calculateViewPortModifiers(::SubClientId const, uint64 const, ::SplitScreenDirection const) const;

    MCAPI ::std::weak_ptr<::IClientInstance> $getWeakPtrToThis();

    MCAPI ::ClientRequirementVerifier const& $getClientRequirementVerifier() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FogDefinitionRegistry const> $getFogDefinitionRegistry() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FogDefinitionRegistry> $getFogDefinitionRegistry();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FogManager const> $getFogManager() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FogManager> $getFogManager();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ScreenLoadTimeTracker> $getScreenLoadTimeTracker();

    MCAPI ::ItemRegistryRef $getItemRegistry() const;

    MCAPI ::std::weak_ptr<::BlockTypeRegistry> $getBlockRegistry() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::DisconnectionRequestHandler> $getDisconnectionRequestHandler() const;

    MCAPI float $getRemoteServerTimeMs() const;

    MCAPI void $setRemoteServerTimeMs(float);

    MCAPI float $getRemoteServerNetworkTimeMs() const;

    MCAPI void $setRemoteServerNetworkTimeMs(float);

    MCAPI ::Bedrock::NonOwnerPointer<::ClientScriptManager> $getClientScriptManager();

    MCAPI ::Scripting::ScriptEngine* $getScriptingEngine();

    MCAPI ::Bedrock::NonOwnerPointer<::WorldTransferAgent> const $getWorldTransferAgent() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::PlayerReportHandler> $getPlayerReportHandler();

    MCAPI void $flagDisconnectionAndNotify(::Connection::DisconnectFailReason);

    MCAPI void $flagDisconnectionAndNotify(::DisconnectionScreenParams const&);

    MCAPI void $setClientUpdateAndRenderThrottling(bool, int, float);

    MCAPI bool $isClientUpdateAndRenderThrottlingEnabled() const;

    MCAPI int $getClientUpdateAndRenderThrottlingThreshold() const;

    MCAPI float $getClientUpdateAndRenderThrottlingScalar() const;

    MCAPI bool $isUserBanned() const;

    MCAPI double $getGameUpdateDurationInSeconds() const;
    // NOLINTEND
};