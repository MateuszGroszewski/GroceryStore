#include "../include/product.h"
#include "../sqlite/sqlite3.h"

void Product::addNewProduct(Product product) {

}
Vat Product::getVat() {
    return vat;
}

ProfitMargin Product::getProfitMargin() {
    return margin;
}

std::string categoryToString(Category category){
    switch(category) {
        case Category::DAIRYPRODUCTS:
            return "DAIRYPRODUCTS";
        case Category::HOUSEHOLDCHEMICALS:
            return "HOUSEHOLDCHEMICALS";
        case Category::BREAD:
            return "BREAD";
        case Category::MEAT:
            return "MEAT";
        case Category::FRUITS:
            return "FRUITS";
        case Category::VEGETABLES:
            return "VEGETABLES";
        case Category::BEVERAGES:
            return "BEVERAGES";
        default:
            return "UNKNOWN";
    }
}