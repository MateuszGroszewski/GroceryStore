cmake_minimum_required(VERSION 3.27)
project(GroceryStore)

set(CMAKE_CXX_STANDARD 23)

add_executable(GroceryStore main.cpp
        source/product.cpp
        include/product.h
        source/category.cpp
        include/category.h
        source/vat.cpp
        include/vat.h)
