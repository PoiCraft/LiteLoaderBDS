#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetworkEnableDisableListener.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/network/RakNetConnector.h"
#include "mc/network/RakPeerHelper.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/platform/ErrorInfo.h"

// auto generated forward declare list
// clang-format off
class CompressedNetworkPeer;
class EncryptedNetworkPeer;
class IPacketObserver;
class NetEventCallback;
class NetworkConnection;
class NetworkIdentifier;
class NetworkPeer;
class NetworkStatistics;
class Packet;
class PacketSender;
class RemoteConnector;
class ResourcePackFileUploadManager;
class ServerLocator;
class WeakEntityRef;
// clang-format on

class NetworkSystem : public ::RakNetConnector::ConnectionCallbacks,
                      public ::RakPeerHelper::IPSupportInterface,
                      public ::NetworkEnableDisableListener {
public:
    // NetworkSystem inner types declare
    // clang-format off
    struct Dependencies;
    struct IncomingPacketQueue;
    // clang-format on

    // NetworkSystem inner types define
    struct Dependencies {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk9c4ba3;
        ::ll::UntypedStorage<8, 40> mUnk414dc8;
        ::ll::UntypedStorage<8, 8>  mUnke8cab9;
        ::ll::UntypedStorage<8, 8>  mUnkdd05b9;
        ::ll::UntypedStorage<8, 24> mUnk331fbf;
        ::ll::UntypedStorage<8, 24> mUnkf4c1a6;
        ::ll::UntypedStorage<4, 24> mUnkfbdc8b;
        // NOLINTEND

    public:
        // prevent constructor by default
        Dependencies& operator=(Dependencies const&);
        Dependencies(Dependencies const&);
        Dependencies();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Dependencies();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct IncomingPacketQueue {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk601258;
        ::ll::UntypedStorage<8, 80> mUnk83a39b;
        // NOLINTEND

    public:
        // prevent constructor by default
        IncomingPacketQueue& operator=(IncomingPacketQueue const&);
        IncomingPacketQueue(IncomingPacketQueue const&);
        IncomingPacketQueue();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5bafd9;
    ::ll::UntypedStorage<8, 24> mUnk61fe2a;
    ::ll::UntypedStorage<8, 8>  mUnkb013f4;
    ::ll::UntypedStorage<8, 8>  mUnk4f704b;
    ::ll::UntypedStorage<8, 8>  mUnk5a14ca;
    ::ll::UntypedStorage<8, 80> mUnk3e85f1;
    ::ll::UntypedStorage<8, 8>  mUnk66bc0b;
    ::ll::UntypedStorage<8, 16> mUnk28a780;
    ::ll::UntypedStorage<8, 8>  mUnk6b882c;
    ::ll::UntypedStorage<8, 24> mUnk7aff31;
    ::ll::UntypedStorage<8, 8>  mUnk9115c6;
    ::ll::UntypedStorage<8, 32> mUnk3b9a02;
    ::ll::UntypedStorage<8, 32> mUnka48e1c;
    ::ll::UntypedStorage<8, 80> mUnk71a258;
    ::ll::UntypedStorage<8, 8>  mUnk55fc57;
    ::ll::UntypedStorage<8, 32> mUnkacc61e;
    ::ll::UntypedStorage<1, 1>  mUnkb3ee22;
    ::ll::UntypedStorage<2, 2>  mUnkee3efc;
    ::ll::UntypedStorage<2, 2>  mUnk5e3f1d;
    ::ll::UntypedStorage<1, 1>  mUnk148327;
    ::ll::UntypedStorage<8, 8>  mUnk71c9a9;
    ::ll::UntypedStorage<8, 8>  mUnk7efe4a;
    ::ll::UntypedStorage<1, 1>  mUnk214764;
    ::ll::UntypedStorage<4, 24> mUnk7bbd3c;
    ::ll::UntypedStorage<8, 40> mUnk96d90d;
    ::ll::UntypedStorage<1, 1>  mUnk248b46;
    ::ll::UntypedStorage<4, 4>  mUnkc0317f;
    ::ll::UntypedStorage<4, 4>  mUnkfaec22;
    ::ll::UntypedStorage<4, 4>  mUnk25fcb3;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkSystem& operator=(NetworkSystem const&);
    NetworkSystem(NetworkSystem const&);
    NetworkSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool useIPv4Only() const /*override*/;

    // vIndex: 2
    virtual bool useIPv6Only() const /*override*/;

    // vIndex: 3
    virtual ushort getDefaultGamePort() const /*override*/;

    // vIndex: 4
    virtual ushort getDefaultGamePortv6() const /*override*/;

    // vIndex: 0
    virtual ~NetworkSystem() /*override*/;

    // vIndex: 1
    virtual void _onDisable() /*override*/;

    // vIndex: 2
    virtual void _onEnable() /*override*/;

    // vIndex: 1
    virtual bool
    onNewIncomingConnection(::NetworkIdentifier const& id, ::std::shared_ptr<::NetworkPeer>&& peer) /*override*/;

    // vIndex: 2
    virtual bool
    onNewOutgoingConnection(::NetworkIdentifier const& id, ::std::shared_ptr<::NetworkPeer>&& peer) /*override*/;

    // vIndex: 3
    virtual void onConnectionClosed(
        ::NetworkIdentifier const&               id,
        ::Connection::DisconnectFailReason const discoReason,
        ::std::string const&                     reasonMessage,
        bool                                     skipDisconnectMessage
    ) /*override*/;

    // vIndex: 4
    virtual void onAllConnectionsClosed(
        ::Connection::DisconnectFailReason discoReason,
        ::std::string const&               reasonMessage,
        bool                               skipDisconnectMessage
    ) /*override*/;

    // vIndex: 5
    virtual void onAllRemoteConnectionsClosed(
        ::Connection::DisconnectFailReason discoReason,
        ::std::string const&               reasonMessage,
        bool                               skipDisconnectMessage
    ) /*override*/;

    // vIndex: 6
    virtual void onOutgoingConnectionFailed(
        ::Connection::DisconnectFailReason discoReason,
        ::std::string const&               reasonMessage
    ) /*override*/;

    // vIndex: 7
    virtual void onWebsocketRequest(
        ::std::string const&    serverAddress,
        ::std::string const&    payload,
        ::std::function<void()> errorCallback
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit NetworkSystem(::NetworkSystem::Dependencies&& deps);

    MCAPI ::NetworkConnection* _getConnectionFromId(::NetworkIdentifier const& id) const;

    MCAPI void _handlePacketViolation(
        ::Bedrock::ErrorInfo<::std::error_code> const& error,
        ::PacketViolationResponse                      violationResponse,
        ::MinecraftPacketIds                           violatingPacketId,
        ::NetworkIdentifier const&                     netId,
        ::NetworkConnection&                           connection,
        ::SubClientId                                  clientSubId
    );

    MCAPI bool _isUsingNetherNetTransportLayer() const;

    MCAPI void _sendInternal(::NetworkIdentifier const& id, ::Packet const& packet, ::std::string const& data);

    MCAPI bool
    _sortAndPacketizeEvents(::NetworkConnection& connection, ::std::chrono::steady_clock::time_point endTime);

    MCAPI void disconnect();

    MCAPI void enableAsyncFlush(::NetworkIdentifier const& id);

    MCAPI ::std::weak_ptr<::CompressedNetworkPeer> getCompressedPeerForUser(::NetworkIdentifier const& id);

    MCAPI ::std::vector<::std::unique_ptr<::NetworkConnection>> const& getConnections() const;

    MCAPI ::std::weak_ptr<::EncryptedNetworkPeer> getEncryptedPeerForUser(::NetworkIdentifier const& id);

    MCAPI ::NetworkStatistics const* getNetworkStatistics() const;

    MCAPI ::NetworkPeer* getPeerForUser(::NetworkIdentifier const& id);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::RemoteConnector const> getRemoteConnector() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::RemoteConnector> getRemoteConnector();

    MCAPI ::ResourcePackFileUploadManager& getResourcePackUploadManager(
        ::PacketSender&            packetSender,
        ::NetworkIdentifier const& source,
        ::std::string const&       resourceName
    );

    MCAPI ::ServerLocator& getServerLocator();

    MCAPI bool isServer() const;

    MCAPI void registerServerInstance(::NetEventCallback& callback);

    MCAPI void runEvents(bool networkIsCritical);

    MCAPI void send(::NetworkIdentifier const& id, ::Packet const& packet, ::SubClientId senderSubId);

    MCAPI void setCloseConnection(::NetworkIdentifier const& id);

    MCAPI void setPacketObserver(::IPacketObserver* packetObserver);

    MCAPI void unregisterClientOrServerInstance(::SubClientId const& subID);

    MCAPI void update(::std::vector<::WeakEntityRef> const* userList);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::NetworkSystem::Dependencies&& deps);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $useIPv4Only() const;

    MCAPI bool $useIPv6Only() const;

    MCAPI ushort $getDefaultGamePort() const;

    MCAPI ushort $getDefaultGamePortv6() const;

    MCAPI void $_onDisable();

    MCAPI void $_onEnable();

    MCAPI bool $onNewIncomingConnection(::NetworkIdentifier const& id, ::std::shared_ptr<::NetworkPeer>&& peer);

    MCAPI bool $onNewOutgoingConnection(::NetworkIdentifier const& id, ::std::shared_ptr<::NetworkPeer>&& peer);

    MCAPI void $onConnectionClosed(
        ::NetworkIdentifier const&               id,
        ::Connection::DisconnectFailReason const discoReason,
        ::std::string const&                     reasonMessage,
        bool                                     skipDisconnectMessage
    );

    MCAPI void $onAllConnectionsClosed(
        ::Connection::DisconnectFailReason discoReason,
        ::std::string const&               reasonMessage,
        bool                               skipDisconnectMessage
    );

    MCAPI void $onAllRemoteConnectionsClosed(
        ::Connection::DisconnectFailReason discoReason,
        ::std::string const&               reasonMessage,
        bool                               skipDisconnectMessage
    );

    MCAPI void
    $onOutgoingConnectionFailed(::Connection::DisconnectFailReason discoReason, ::std::string const& reasonMessage);

    MCAPI void $onWebsocketRequest(
        ::std::string const&    serverAddress,
        ::std::string const&    payload,
        ::std::function<void()> errorCallback
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForConnectionCallbacks();

    MCAPI static void** $vftableForIPSupportInterface();

    MCAPI static void** $vftableForNetworkEnableDisableListener();
    // NOLINTEND
};
