// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NetworkStatistics {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKSTATISTICS
public:
    class NetworkStatistics& operator=(class NetworkStatistics const &) = delete;
    NetworkStatistics(class NetworkStatistics const &) = delete;
    NetworkStatistics() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETWORKSTATISTICS
public:
#endif
    MCAPI std::string getVerboseInfo() const;


};