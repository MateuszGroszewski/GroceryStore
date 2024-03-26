#include "../include/product.h"
#include "../sqlite/sqlite3.h"

void Product::addNewProduct(Product newProduct) {
/*
    sqlite3_stmt* stmt;

    std::string insertSql = "INSERT INTO Products (productName, retailPrice, wholeSalePrice, inStock, category, vat, profitMargin)"
                            "VALUES (?, ?, ?, ?, ?, ?, ?)";

    sqlite3_bind_text(stmt, 1, newProduct.getName().c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_double(stmt, 2, newProduct.generateRetailPrice());
    sqlite3_bind_double(stmt, 3, newProduct.getWholeSalePrice());
    sqlite3_bind_int(stmt, 4, newProduct.getInStock());
    sqlite3_bind_text(stmt, 5, categoryToString(newProduct.category).c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_int(stmt, 6, newProduct.getVat());
    sqlite3_bind_int(stmt, 7, newProduct.getProfitMargin());
*/
}

std::string Product::getName() {
    return productName;
}

int Product::getVat() {
    return static_cast<int>(vat);
}

int Product::getProfitMargin() {
    return static_cast<int>(margin);
}

float Product::getWholeSalePrice() {
    return static_cast<float>(wholeSalePrice);
}

int Product::getInStock() {
    return inStock;
}

float Product::generateRetailPrice() {
        retailPrice = (wholeSalePrice * (1 + static_cast<float>(getVat()) / 100.0) * (1 + static_cast<float>(getProfitMargin()) / 100.0));
    return retailPrice;
}






