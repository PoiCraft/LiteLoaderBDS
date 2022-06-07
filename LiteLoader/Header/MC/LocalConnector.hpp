// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Social.hpp"
#include "Connector.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LocalConnector {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOCALCONNECTOR
public:
    class LocalConnector& operator=(class LocalConnector const &) = delete;
    LocalConnector(class LocalConnector const &) = delete;
    LocalConnector() = delete;
#endif


public:
    /*0*/ virtual ~LocalConnector();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual std::string getLocalIp();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual class Social::GameConnectionInfo const & getConnectedGameInfo() const;
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual struct Connector::NatPunchInfo getNatPunchInfo() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOCALCONNECTOR
public:
    MCVAPI void addConnectionStateListener(class Connector::ConnectionStateListener *);
    MCVAPI unsigned short getIPv4Port() const;
    MCVAPI unsigned short getIPv6Port() const;
    MCVAPI std::vector<std::string> getLocalIps() const;
    MCVAPI unsigned short getPort() const;
    MCVAPI std::vector<struct RakNet::SystemAddress> getRefinedLocalIps() const;
    MCVAPI bool isIPv4Supported() const;
    MCVAPI bool isIPv6Supported() const;
    MCVAPI void removeConnectionStateListener(class Connector::ConnectionStateListener *);
    MCVAPI void setupNatPunch(bool);
    MCVAPI void startNatPunchingClient(std::string const &, unsigned short);
#endif
    MCAPI LocalConnector(class LocalConnector::ConnectionCallbacks &, class NetworkIdentifier const &);
    MCAPI void disconnect();
    MCAPI void host(class NetworkIdentifier const &);
    MCAPI void runEvents();

//private:

private:
    MCAPI static class LocalConnectivitySystem sLocalConnectivitySystem;


};