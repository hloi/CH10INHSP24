cmake_minimum_required(VERSION 3.26)
project(CH10INHSP24)

set(CMAKE_CXX_STANDARD 17)

add_executable(CH10INHSP24 main.cpp
        GenericItem.cpp
        GenericItem.h
        ProduceItem.cpp
        ProduceItem.h
        Vegetable.cpp
        Vegetable.h
        ListItems.cpp
        ListItems.h)
