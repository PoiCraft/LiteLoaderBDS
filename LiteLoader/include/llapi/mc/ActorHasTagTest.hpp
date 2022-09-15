/**
 * @file  ActorHasTagTest.hpp
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
 * @brief MC class ActorHasTagTest.
 *
 */
class ActorHasTagTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORHASTAGTEST
public:
    class ActorHasTagTest& operator=(class ActorHasTagTest const &) = delete;
    ActorHasTagTest(class ActorHasTagTest const &) = delete;
    ActorHasTagTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1680608245
     */
    virtual ~ActorHasTagTest();
    /**
     * @vftbl  2
     * @symbol ?evaluate@ActorHasTagTest@@UEBA_NAEBUFilterContext@@@Z
     * @hash   -1228629143
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol ?getName@ActorHasTagTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   -565678919
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};