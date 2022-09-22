/**
 * @file  SetBlockReactionComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SetBlockReactionComponent.
 *
 */
class SetBlockReactionComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETBLOCKREACTIONCOMPONENT
public:
    class SetBlockReactionComponent& operator=(class SetBlockReactionComponent const &) = delete;
    SetBlockReactionComponent(class SetBlockReactionComponent const &) = delete;
    SetBlockReactionComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SetBlockReactionComponent();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @hash   -1604749067
     * @vftbl  3
     * @symbol ?_onEnd@SetBlockReactionComponent@@UEAAXAEAVLabTableReaction@@AEAVBlockSource@@@Z
     */
    virtual void _onEnd(class LabTableReaction &, class BlockSource &);

};