// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ClientReplayStatePolicy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ServerCorrectionPolicy : public ClientReplayStatePolicy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERCORRECTIONPOLICY
public:
    class ServerCorrectionPolicy& operator=(class ServerCorrectionPolicy const &) = delete;
    ServerCorrectionPolicy(class ServerCorrectionPolicy const &) = delete;
    ServerCorrectionPolicy() = delete;
#endif


public:
    /*0*/ virtual ~ServerCorrectionPolicy();
    /*3*/ virtual struct MovementCorrection shouldCorrectMovement(struct IActorMovementProxy &, class PlayerAuthInputPacket const &, unsigned __int64);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERCORRECTIONPOLICY
public:
#endif


};