/**
 * @file  BlockDestructibleByExplosionDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockDestructibleByExplosionDescription.
 *
 */
struct BlockDestructibleByExplosionDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDESTRUCTIBLEBYEXPLOSIONDESCRIPTION
public:
    struct BlockDestructibleByExplosionDescription& operator=(struct BlockDestructibleByExplosionDescription const &) = delete;
    BlockDestructibleByExplosionDescription(struct BlockDestructibleByExplosionDescription const &) = delete;
    BlockDestructibleByExplosionDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   931818977
     */
    virtual ~BlockDestructibleByExplosionDescription();
    /**
     * @vftbl  1
     * @symbol ?getName@BlockDestructibleByExplosionDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   433678358
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  2
     * @symbol ?initializeComponent@BlockDestructibleByExplosionDescription@@UEBAXAEAVEntityContext@@@Z
     * @hash   551420622
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @symbol ?NameID@BlockDestructibleByExplosionDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   878769695
     */
    MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType@BlockDestructibleByExplosionDescription@@SAXXZ
     * @hash   -1041872369
     */
    MCAPI static void bindType();
    /**
     * @symbol ?registerVersionUpgrades@BlockDestructibleByExplosionDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     * @hash   2113741102
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};