/**
 * @file  ActorIsLeashedTest.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorIsLeashedTest.
 *
 */
class ActorIsLeashedTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORISLEASHEDTEST
public:
    class ActorIsLeashedTest& operator=(class ActorIsLeashedTest const &) = delete;
    ActorIsLeashedTest(class ActorIsLeashedTest const &) = delete;
    ActorIsLeashedTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1275849529
     */
    virtual ~ActorIsLeashedTest();
    /**
     * @vftbl  2
     * @symbol ?evaluate@ActorIsLeashedTest@@UEBA_NAEBUFilterContext@@@Z
     * @hash   489178177
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol ?getName@ActorIsLeashedTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   -379382191
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};