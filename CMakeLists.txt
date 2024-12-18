cmake_minimum_required(VERSION 3.16)

project(C_1k C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED  ON)

list(APPEND COMMON_LIB_DEPS)

if (LINUX)
    list(APPEND COMMON_LIB_DEPS m)
endif()

add_subdirectory(arrays)
add_subdirectory(tabulate)
add_subdirectory(struct)
