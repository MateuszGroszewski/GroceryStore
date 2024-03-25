#include <iostream>
#include "include/product.h"
#include "sqlite/sqlite3.h"
#include "include/menu.h"

int main() {
    sqlite3* db;
    int rc;
    char* errMsg = nullptr;

    rc = sqlite3_open("BD.db", &db);
    if (rc != SQLITE_OK) {
        std::cerr << "Can't open database: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_close(db);
        return 1;
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Products ("
                      "ID INTEGER PRIMARY KEY AUTOINCREMENT,"
                      "productName TEXT,"
                      "retailPrice REAL,"
                      "wholeSalePrice REAL,"
                      "inStock INTEGER,"
                      "category TEXT,"
                      "vat INTEGER,"
                      "profitMargin INTEGER"
                      ");";

    rc = sqlite3_exec(db, sql, nullptr, nullptr, &errMsg);
    if (rc != SQLITE_OK) {
        std::cerr << "Error while opening database: " << errMsg << std::endl;
        sqlite3_free(errMsg);
        sqlite3_close(db);
        return 1;
    }


    Product newProduct ("Milk", Category::DAIRYPRODUCTS, Vat::VAT_23, 100.0 ,ProfitMargin::STANDARD_15);

    Menu::displayMenu();

    sqlite3_close(db);
    return 0;
}
