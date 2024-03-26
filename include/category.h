//
// Created by neono on 19.03.2024.
//

#ifndef GROCERYSTORE_CATEGORY_H
#define GROCERYSTORE_CATEGORY_H

#include <string>


enum class Category {
    DAIRYPRODUCTS,
    HOUSEHOLDCHEMICALS,
    BREAD,
    MEAT,
    FRUITS,
    VEGETABLES,
    BEVERAGES

};


[[nodiscard]]std::string categoryToString(Category category);

#endif //GROCERYSTORE_CATEGORY_H
