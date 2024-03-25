#include <iostream>
#include "include/product.h"
#include "sqlite/sqlite3.h"

int main() {
    Product prod1 ("Milk", Category::DAIRYPRODUCTS, Vat::REDUCED_VAT, ProfitMargin::STANDARD);
    sqlite3* db;
    int rc;
    char* errMsg = nullptr;

    // Otwarcie połączenia z bazą danych SQLite
    rc = sqlite3_open("BD.db", &db);
    if (rc != SQLITE_OK) {
        std::cerr << "Nie można otworzyć bazy danych: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_close(db);
        return 1;
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Products ("
                      "ID INTEGER PRIMARY KEY AUTOINCREMENT,"
                      "productName TEXT,"
                      "retailPrice REAL,"
                      "wholeSalePrice REAL,"
                      "InStock INTEGER,"
                      "category TEXT,"
                      "vat INTEGER,"
                      "profitMargin INTEGER"
                      ");";

    rc = sqlite3_exec(db, sql, nullptr, nullptr, &errMsg);
    if (rc != SQLITE_OK) {
        std::cerr << "Błąd przy tworzeniu tabeli: " << errMsg << std::endl;
        sqlite3_free(errMsg);
        sqlite3_close(db);
        return 1;
    }


    return 0;
}
