// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CachedComponentData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CACHEDCOMPONENTDATA
public:
    class CachedComponentData& operator=(class CachedComponentData const &) = delete;
    CachedComponentData(class CachedComponentData const &) = delete;
    CachedComponentData() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CACHEDCOMPONENTDATA
public:
#endif
    MCAPI void cacheComponentData(class Block const &);


};