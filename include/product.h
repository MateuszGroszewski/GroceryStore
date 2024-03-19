#ifndef GROCERYSTORE_PRODUCT_H
#define GROCERYSTORE_PRODUCT_H

#include <string>
#include "vat.h"
#include "category.h"


class Product  {


private:
    std::string productName;
    float retailPrice;
    float wholesalePrice;
    int inStock;
    Category category;
    Vat vat;

};


#endif //GROCERYSTORE_PRODUCT_H
