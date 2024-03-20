#include <iostream>
#include "include/product.h"

int main() {
    new Product("Milk", Category::DAIRYPRODUCTS, Vat::REDUCED_VAT, ProfitMargin::STANDARD);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
