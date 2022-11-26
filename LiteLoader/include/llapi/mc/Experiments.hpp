/**
 * @file  Experiments.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Experiments.
 *
 */
class Experiments {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPERIMENTS
public:
    class Experiments& operator=(class Experiments const &) = delete;
    Experiments(class Experiments const &) = delete;
#endif

public:
    /**
     * @symbol ?DataDrivenBiomes@Experiments@@QEBA_NXZ
     * @hash   -1973229292
     */
    MCAPI bool DataDrivenBiomes() const;
    /**
     * @symbol ?DataDrivenItems@Experiments@@QEBA_NXZ
     * @hash   76540834
     */
    MCAPI bool DataDrivenItems() const;
    /**
     * @symbol ??0Experiments@@QEAA@XZ
     * @hash   847438482
     */
    MCAPI Experiments();
    /**
     * @symbol ?Gametest@Experiments@@QEBA_NXZ
     * @hash   -1902730924
     */
    MCAPI bool Gametest() const;
    /**
     * @symbol ?NextMajorUpdate@Experiments@@QEBA_NXZ
     * @hash   1042059426
     */
    MCAPI bool NextMajorUpdate() const;
    /**
     * @symbol ?UpcomingCreatorFeatures@Experiments@@QEBA_NXZ
     * @hash   -327277326
     */
    MCAPI bool UpcomingCreatorFeatures() const;
    /**
     * @symbol ?getExperimentsActiveAsJSONList@Experiments@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   792753618
     */
    MCAPI std::string getExperimentsActiveAsJSONList() const;
    /**
     * @symbol ?getExperimentsActiveForTelemetry@Experiments@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     * @hash   -502559109
     */
    MCAPI std::vector<std::string> getExperimentsActiveForTelemetry() const;
    /**
     * @symbol ?getTagData@Experiments@@QEAAXAEBVCompoundTag@@@Z
     * @hash   -263155768
     */
    MCAPI void getTagData(class CompoundTag const &);
    /**
     * @symbol ?isExperimentEnabled@Experiments@@QEBA_NW4AllExperiments@@@Z
     * @hash   1071017167
     */
    MCAPI bool isExperimentEnabled(enum class AllExperiments) const;
    /**
     * @symbol ?setExperimentEnabled@Experiments@@QEAAXW4AllExperiments@@_N@Z
     * @hash   1335141867
     */
    MCAPI void setExperimentEnabled(enum class AllExperiments, bool);
    /**
     * @symbol ?setTagData@Experiments@@QEBAXAEAVCompoundTag@@@Z
     * @hash   -712372092
     */
    MCAPI void setTagData(class CompoundTag &) const;
    /**
     * @symbol ??1Experiments@@QEAA@XZ
     * @hash   1514616962
     */
    MCAPI ~Experiments();
    /**
     * @symbol ?getExperimentTextID@Experiments@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4AllExperiments@@@Z
     * @hash   1282374395
     */
    MCAPI static std::string const & getExperimentTextID(enum class AllExperiments);
    /**
     * @symbol ?getToggleNames@Experiments@@SAAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     * @hash   1559966577
     */
    MCAPI static std::vector<std::string> const & getToggleNames();

};