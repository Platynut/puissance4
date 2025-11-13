cmake_minimum_required(VERSION 3.30)
project(puissance4_cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(puissance4_cpp main.cpp
        Column.cpp
        Column.h
        Grid.cpp
        Grid.h
        Joueur.cpp
        Joueur.h
        Optional.h
        Square.cpp
        Square.h
        Game.cpp
        Game.h)
