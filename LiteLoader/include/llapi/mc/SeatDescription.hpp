/**
 * @file  SeatDescription.hpp
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
 * @brief MC structure SeatDescription.
 *
 */
struct SeatDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEATDESCRIPTION
public:
    SeatDescription() = delete;
#endif

public:
    /**
     * @symbol ??0SeatDescription@@QEAA@AEBU0@@Z
     * @hash   462700853
     */
    MCAPI SeatDescription(struct SeatDescription const &);
    /**
     * @symbol ?addRotationExpressionNode@SeatDescription@@QEAAXAEBVExpressionNode@@@Z
     * @hash   -1813417612
     */
    MCAPI void addRotationExpressionNode(class ExpressionNode const &);
    /**
     * @symbol ??4SeatDescription@@QEAAAEAU0@AEBU0@@Z
     * @hash   -796666434
     */
    MCAPI struct SeatDescription & operator=(struct SeatDescription const &);
    /**
     * @symbol ??4SeatDescription@@QEAAAEAU0@$$QEAU0@@Z
     * @hash   -392561938
     */
    MCAPI struct SeatDescription & operator=(struct SeatDescription &&);
    /**
     * @symbol ??8SeatDescription@@QEBA_NAEBU0@@Z
     * @hash   -1221651996
     */
    MCAPI bool operator==(struct SeatDescription const &) const;
    /**
     * @symbol ??1SeatDescription@@QEAA@XZ
     * @hash   -2072176909
     */
    MCAPI ~SeatDescription();
    /**
     * @symbol ?EMPTY@SeatDescription@@2U1@B
     * @hash   -972736441
     */
    MCAPI static struct SeatDescription const EMPTY;

};