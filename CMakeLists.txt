cmake_minimum_required(VERSION 3.0.0)
project(poo VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(poo main.cpp Arme.cpp Personnage.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
