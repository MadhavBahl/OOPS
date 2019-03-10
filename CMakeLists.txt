cmake_minimum_required(VERSION 3.0)

project(Object-Oriented-Programming-C++)

enable_language(C)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

add_subdirectory(IntroToOOP)
add_subdirectory(pointersInC)
add_subdirectory(reviseC)
add_subdirectory(Search)
add_subdirectory(Sort)
add_subdirectory(Structures)