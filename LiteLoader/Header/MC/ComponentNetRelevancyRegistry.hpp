// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ComponentNetRelevancyRegistry {

#define AFTER_EXTRA
// Add Member There
public:
struct NetSerializationCallbacks {
    NetSerializationCallbacks() = delete;
    NetSerializationCallbacks(NetSerializationCallbacks const&) = delete;
    NetSerializationCallbacks(NetSerializationCallbacks const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPONENTNETRELEVANCYREGISTRY
public:
    class ComponentNetRelevancyRegistry& operator=(class ComponentNetRelevancyRegistry const &) = delete;
    ComponentNetRelevancyRegistry(class ComponentNetRelevancyRegistry const &) = delete;
    ComponentNetRelevancyRegistry() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPONENTNETRELEVANCYREGISTRY
public:
#endif
    MCAPI class DefinitionInstanceGroup getFilteredDefinitionsForServer(class DefinitionInstanceGroup const &) const;
    MCAPI struct ComponentNetRelevancyRegistry::NetSerializationCallbacks & registerNetSerialization(class HashedString const &, class std::function<bool (class DefinitionInstanceGroup const &, class CompoundTag &)>);
    MCAPI bool serializeComponentDefinitionsForClient(class DefinitionInstanceGroup const &, class CompoundTag &) const;
    MCAPI ~ComponentNetRelevancyRegistry();


};