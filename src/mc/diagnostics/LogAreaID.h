#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LogAreaID : int {
    LogAreaAll             = 0,
    LogAreaPlatform        = 1,
    LogAreaEntity          = 2,
    LogAreaDatabase        = 3,
    LogAreaGui             = 4,
    LogAreaSystem          = 5,
    LogAreaNetwork         = 6,
    LogAreaRender          = 7,
    LogAreaMemory          = 8,
    LogAreaAnimation       = 9,
    LogAreaInput           = 10,
    LogAreaLevel           = 11,
    LogAreaServer          = 12,
    LogAreaDlc             = 13,
    LogAreaPhysics         = 14,
    LogAreaFile            = 15,
    LogAreaStorage         = 16,
    LogAreaRealms          = 17,
    LogAreaRealmsapi       = 18,
    LogAreaXboxlive        = 19,
    LogAreaUsermanager     = 20,
    LogAreaXsapi           = 21,
    LogAreaPerf            = 22,
    LogAreaTelemetry       = 23,
    LogAreaBlocks          = 24,
    LogAreaRaknet          = 25,
    LogAreaGameface        = 26,
    LogAreaSound           = 27,
    LogAreaInteractive     = 28,
    LogAreaScripting       = 29,
    LogAreaPlayfab         = 30,
    LogAreaAutomation      = 31,
    LogAreaPersona         = 32,
    LogAreaTexture         = 33,
    LogAreaAssetpackages   = 34,
    LogAreaItems           = 35,
    LogAreaServices        = 36,
    LogAreaVolumes         = 37,
    LogAreaLoottable       = 38,
    LogAreaSidebar         = 39,
    LogAreaLocalization    = 40,
    LogAreaMovement        = 41,
    LogAreaLiveevents      = 42,
    LogAreaEditor          = 43,
    LogAreaLeveltransition = 44,
    LogAreaUnknown         = 45,
    LogAreaStore           = 46,
    LogAreaWorld           = 47,
    LogAreaMessaging       = 48,
    NumLogAreas            = 49,
};
