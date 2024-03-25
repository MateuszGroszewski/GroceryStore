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
    std::cin >> choice;
    switch (choice) {
      case 1:{



        break;
      }

     default:
       std::cout << "dif" << std::endl;
     }

}
