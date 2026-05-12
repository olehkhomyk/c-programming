cmake_minimum_required(VERSION 4.2)
project(c-programming C)

set(CMAKE_C_STANDARD 11)

add_executable(c-programming lessons/variables_types_sizes.c
        lessons/variables_addresses.c
        lessons/pointer_address_int.c
        lessons/pointer_on_pionter.c
        lessons/function_change_arguments_value_by_address.c
        lessons/array_remove_item_c_impl.c
        lessons/array_pointers_in_func.c
        main.c)
