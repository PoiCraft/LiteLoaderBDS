// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemStackRequestActionCraftHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCRAFTHANDLER
public:
    class ItemStackRequestActionCraftHandler& operator=(class ItemStackRequestActionCraftHandler const &) = delete;
    ItemStackRequestActionCraftHandler(class ItemStackRequestActionCraftHandler const &) = delete;
    ItemStackRequestActionCraftHandler() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKREQUESTACTIONCRAFTHANDLER
public:
#endif
    MCAPI ItemStackRequestActionCraftHandler(class ItemStackRequestActionHandler &, class Player &);
    MCAPI class std::shared_ptr<class SimpleSparseContainer> _getOrInitSparseContainer(enum ContainerEnumName);
    MCAPI enum ItemStackNetResult _initCraftResults(std::vector<class ItemInstance> const &, unsigned char);
    MCAPI class ItemInstance * _initSingleCraftResult(class ItemInstance const &);
    MCAPI struct ItemStackRequestHandlerSlotInfo _validateRequestSlot(struct ItemStackRequestSlotInfo const &);
    MCAPI enum ItemStackNetResult endRequest(enum ItemStackNetResult);
    MCAPI void endRequestBatch();
    MCAPI class ItemStackRequestActionHandler const & getActionHandler() const;
    MCAPI enum ItemStackNetResult handleConsume(class ItemStackRequestActionConsume const &);
    MCAPI enum ItemStackNetResult handleCraftAction(class ItemStackRequestActionCraftBase const &);
    MCAPI enum ItemStackNetResult handleCraftResults(class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const &);
    MCAPI enum ItemStackNetResult handleCreate(class ItemStackRequestActionCreate const &);
    MCAPI bool isCraftRequest() const;
    MCAPI void onContainerScreenOpen(class ContainerScreenContext const &);
    MCAPI void postRequest(bool);
    MCAPI enum ItemStackNetResult preHandleAction(enum ItemStackRequestActionType);

//private:
    MCAPI std::unique_ptr<struct ContainerValidationCraftInputs> _createCraftInputs(class ItemStackRequestActionCraftBase const &);
    MCAPI enum ItemStackNetResult _setCreatedItemOutputSlot(unsigned char);

private:


};