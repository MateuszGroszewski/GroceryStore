//
// Created by neono on 19.03.2024.
//

#include "../include/category.h"

std::string categoryToString(Category category) {
    switch(category) {
        case Category::DAIRYPRODUCTS:
            return "Dairy products";
        case Category::HOUSEHOLDCHEMICALS:
            return "House hold chemicals";
        case Category::BREAD:
            return "Bread";
        case Category::MEAT:
            return "Meat";
        case Category::FRUITS:
            return "Fruits";
        case Category::VEGETABLES:
            return "Vegetables";
        case Category::BEVERAGES:
            return "Beverages";
        default:
            return "UNKNOWN";
    }
}
