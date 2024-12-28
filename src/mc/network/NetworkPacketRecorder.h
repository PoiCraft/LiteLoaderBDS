#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"

class NetworkPacketRecorder : public ::NetworkPeer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk24b0b3;
    ::ll::UntypedStorage<8, 8>  mUnke97719;
    ::ll::UntypedStorage<8, 16> mUnk15c0b2;
    ::ll::UntypedStorage<1, 1>  mUnkb36a7d;
    ::ll::UntypedStorage<1, 1>  mUnk85f337;
    ::ll::UntypedStorage<1, 1>  mUnk4bc6fb;
    ::ll::UntypedStorage<8, 24> mUnk2a9aea;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkPacketRecorder& operator=(NetworkPacketRecorder const&);
    NetworkPacketRecorder(NetworkPacketRecorder const&);
    NetworkPacketRecorder();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void sendPacket(::std::string const&, ::NetworkPeer::Reliability, ::Compressibility) /*override*/;

    // vIndex: 2
    virtual ::NetworkPeer::DataStatus
    receivePacket(::std::string&, ::std::shared_ptr<::std::chrono::steady_clock::time_point> const&) /*override*/;

    // vIndex: 3
    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;

    // vIndex: 0
    virtual ~NetworkPacketRecorder() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $sendPacket(::std::string const&, ::NetworkPeer::Reliability, ::Compressibility);

    MCAPI ::NetworkPeer::DataStatus
    $receivePacket(::std::string&, ::std::shared_ptr<::std::chrono::steady_clock::time_point> const&);

    MCAPI ::NetworkPeer::NetworkStatus $getNetworkStatus() const;
    // NOLINTEND
};
