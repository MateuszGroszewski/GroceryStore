#include <iostream>

#include "../include/menu.h"



int Menu::displayMenu() {

    /*std::string login;
std::string password;

std::cout << "Login: ";
std::cin >> login;
std::cout << std::endl;

std::cout << "Password: ";
std::cin >> password;
std::cout << std::endl;*/

    int choice;
    std::cout << " Admin Panel " << std::endl;
    std::cout << "1. add new product to store" << std::endl;
    std::cout << "2. check stock" << std::endl;
    std::cout << "3. restock product" << std::endl;
    std::cout << "0. logout" << std::endl;
    std::cout << "Select option: ";
    std::cin >> choice;
    std::cout << std::endl;
    switch (choice) {
      case 1:{
          Product newProduct;
          std::string productName;
          Category productCategory;
          int chooseCategory;
          Vat productVat;
          float wholeSalePrice;
          ProfitMargin productProfitMargin;

          std::cout << "Enter name of new product: ";
          std::getline(std::cin >> std::ws, productName);
          std::cout << std::endl;


          for(int i = static_cast<int>(Category::DAIRYPRODUCTS); i <= static_cast<int>(Category::BEVERAGES); i++){
              std::cout << i+1 << ". " << categoryToString(static_cast<Category>(i)) << std::endl;
          }
          std::cout << "Choose product category: ";
          std::cin >> chooseCategory;
          productCategory = static_cast<Category>(chooseCategory-1);
          std::cout << std::endl;




        break;
      }

     default:
       std::cout << "dif" << std::endl;
     }

     return 0;
}
