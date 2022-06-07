// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LevelStorageEventing {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSTORAGEEVENTING
public:
    class LevelStorageEventing& operator=(class LevelStorageEventing const &) = delete;
    LevelStorageEventing(class LevelStorageEventing const &) = delete;
    LevelStorageEventing() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELSTORAGEEVENTING
public:
#endif
    MCAPI LevelStorageEventing(std::string const &, class LevelData const &, std::string const &);
    MCAPI void fireDBStorageError(char const *);
    MCAPI void fireEventWorldCorruptionCausedWorldShutdown(std::string const &, class std::optional<bool>);


};