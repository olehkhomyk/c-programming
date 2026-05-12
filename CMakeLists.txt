cmake_minimum_required(VERSION 4.2)
project(untitled C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled variables_types_sizes.c
        variables_addresses.c
        pointer_address_int.c
        main.c)
