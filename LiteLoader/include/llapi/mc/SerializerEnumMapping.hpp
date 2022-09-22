/**
 * @file  SerializerEnumMapping.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SerializerEnumMapping.
 *
 */
class SerializerEnumMapping {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERIALIZERENUMMAPPING
public:
    class SerializerEnumMapping& operator=(class SerializerEnumMapping const &) = delete;
    SerializerEnumMapping(class SerializerEnumMapping const &) = delete;
    SerializerEnumMapping() = delete;
#endif

public:
    /**
     * @hash   757075892
     * @symbol ?lookup@SerializerEnumMapping@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEA_J@Z
     */
    MCAPI bool lookup(std::string const &, __int64 &) const;
    /**
     * @hash   -138738983
     * @symbol ?lookup@SerializerEnumMapping@@QEBA_N_JAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool lookup(__int64, std::string &) const;
    /**
     * @hash   129787162
     * @symbol ??4SerializerEnumMapping@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class SerializerEnumMapping & operator=(class SerializerEnumMapping &&);
    /**
     * @hash   -1021896088
     * @symbol ?toString@SerializerEnumMapping@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string toString() const;

};