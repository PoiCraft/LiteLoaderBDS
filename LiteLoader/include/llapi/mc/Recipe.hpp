/**
 * @file  Recipe.hpp
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
 * @brief MC class Recipe.
 *
 */
class Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RECIPE
public:
    class Recipe& operator=(class Recipe const &) = delete;
    Recipe(class Recipe const &) = delete;
    Recipe() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1151216472
     */
    virtual ~Recipe();
    /**
     * @vftbl  1
     * @symbol ?assemble@ShulkerBoxRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@@Z
     * @hash   -2123850377
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const = 0;
    /**
     * @vftbl  2
     * @symbol ?getCraftingSize@ShapelessRecipe@@UEBAHXZ
     * @hash   -1423514703
     */
    virtual int getCraftingSize() const = 0;
    /**
     * @vftbl  3
     * @symbol ?getIngredient@ShapelessRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
     * @hash   1418852850
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const = 0;
    /**
     * @vftbl  4
     * @symbol ?getResultItem@ShapelessRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
     * @hash   -737841698
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const = 0;
    /**
     * @vftbl  5
     * @symbol ?isShapeless@ShapelessRecipe@@UEBA_NXZ
     * @hash   748928437
     */
    virtual bool isShapeless() const = 0;
    /**
     * @vftbl  6
     * @symbol ?matches@ShapelessRecipe@@UEBA_NAEAVCraftingContainer@@AEAVLevel@@@Z
     * @hash   446482067
     */
    virtual bool matches(class CraftingContainer &, class Level &) const = 0;
    /**
     * @vftbl  7
     * @symbol ?size@ShapelessRecipe@@UEBAHXZ
     * @hash   -1084891239
     */
    virtual int size() const = 0;
    /**
     * @vftbl  8
     * @symbol ?getId@Recipe@@UEBAAEBVUUID@mce@@XZ
     * @hash   1985067334
     */
    virtual class mce::UUID const & getId() const;
    /**
     * @vftbl  9
     * @symbol ?isMultiRecipe@Recipe@@UEBA_NXZ
     * @hash   -2064179577
     */
    virtual bool isMultiRecipe() const;
    /**
     * @vftbl  10
     * @symbol ?itemValidForRecipe@Recipe@@UEBA_NAEBVItemDescriptor@@AEBVItemStack@@@Z
     * @hash   -1270196851
     */
    virtual bool itemValidForRecipe(class ItemDescriptor const &, class ItemStack const &) const;
    /**
     * @vftbl  11
     * @symbol ?itemsMatch@Recipe@@UEBA_NAEBVItemDescriptor@@0@Z
     * @hash   437031687
     */
    virtual bool itemsMatch(class ItemDescriptor const &, class ItemDescriptor const &) const;
    /**
     * @vftbl  12
     * @symbol ?itemsMatch@Recipe@@UEBA_NAEBVItemDescriptor@@0PEBVCompoundTag@@@Z
     * @hash   876954957
     */
    virtual bool itemsMatch(class ItemDescriptor const &, class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @vftbl  13
     * @symbol ?getIngredientsHash@Recipe@@UEBA_KXZ
     * @hash   -1250451460
     */
    virtual unsigned __int64 getIngredientsHash() const;
    /**
     * @vftbl  14
     * @symbol ?loadResultList@Recipe@@UEBAXAEBVBlockPalette@@@Z
     * @hash   -1976205080
     */
    virtual void loadResultList(class BlockPalette const &) const;
    /**
     * @symbol ?countQuantityOfIngredient@Recipe@@QEBAHAEBVItemInstance@@@Z
     * @hash   1756112745
     */
    MCAPI int countQuantityOfIngredient(class ItemInstance const &) const;
    /**
     * @symbol ?getHeight@Recipe@@QEBAHXZ
     * @hash   1568294438
     */
    MCAPI int getHeight() const;
    /**
     * @symbol ?getIngredients@Recipe@@QEBAAEBV?$vector@VRecipeIngredient@@V?$allocator@VRecipeIngredient@@@std@@@std@@XZ
     * @hash   1608585084
     */
    MCAPI std::vector<class RecipeIngredient> const & getIngredients() const;
    /**
     * @symbol ?getNetId@Recipe@@QEBAAEBV?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@XZ
     * @hash   2062701151
     */
    MCAPI class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const & getNetId() const;
    /**
     * @symbol ?getPriority@Recipe@@QEBAHXZ
     * @hash   -387193978
     */
    MCAPI int getPriority() const;
    /**
     * @symbol ?getRecipeId@Recipe@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1366425168
     */
    MCAPI std::string getRecipeId() const;
    /**
     * @symbol ?getTag@Recipe@@QEBAAEBVHashedString@@XZ
     * @hash   1037234634
     */
    MCAPI class HashedString const & getTag() const;
    /**
     * @symbol ?getWidth@Recipe@@QEBAHXZ
     * @hash   -1155572648
     */
    MCAPI int getWidth() const;
    /**
     * @symbol ?setNetId@Recipe@@QEAAXAEBV?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@@Z
     * @hash   1622869837
     */
    MCAPI void setNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &);
    /**
     * @symbol ?isAnyAuxValue@Recipe@@SA_NAEBVItemDescriptor@@@Z
     * @hash   432893651
     */
    MCAPI static bool isAnyAuxValue(class ItemDescriptor const &);

//protected:
    /**
     * @symbol ??0Recipe@@IEAA@V?$basic_string_span@$$CBD$0?0@gsl@@VHashedString@@AEBV?$vector@VRecipeIngredient@@V?$allocator@VRecipeIngredient@@@std@@@std@@@Z
     * @hash   -228359254
     */
    MCAPI Recipe(class gsl::basic_string_span<char const, -1>, class HashedString, std::vector<class RecipeIngredient> const &);

protected:

};