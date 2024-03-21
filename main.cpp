#include <iostream>
#include "include/product.h"
#include <sqlite3.h>

int main() {
    //new Product("Milk", Category::DAIRYPRODUCTS, Vat::REDUCED_VAT, ProfitMargin::STANDARD);
    sqlite3* db;
    char* errMsg = nullptr;

    // Otwarcie połączenia z bazą danych SQLite
    int rc = sqlite3_open("grocerystorestock.db", &db);
    if (rc != SQLITE_OK) {
        std::cerr << "Nie można otworzyć bazy danych: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_close(db);
        return 1;
    }
/*
    // Zapytanie SQL tworzące tabelę
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

    // Wykonanie zapytania SQL
    rc = sqlite3_exec(db, sql, nullptr, nullptr, &errMsg);
    if (rc != SQLITE_OK) {
        std::cerr << "Błąd przy tworzeniu tabeli: " << errMsg << std::endl;
        sqlite3_free(errMsg);
        sqlite3_close(db);
        return 1;
    }

    // Zamknięcie połączenia z bazą danych
    sqlite3_close(db);

    std::cout << "Tabela została utworzona pomyślnie." << std::endl;*/
    return 0;
}
