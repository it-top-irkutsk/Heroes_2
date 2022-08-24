cmake_minimum_required(VERSION 3.23)
project(Heroes_2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Heroes_2 main.cpp Hero.h Human.h Elf.h Specialization.h Mage.h HumanMage.h CLI.h)
