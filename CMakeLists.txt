cmake_minimum_required(VERSION 3.14)
project(libft C)
file (GLOB srcs
        "srcs/*.c")
set(CMAKE_C_STANDARD 90)

add_executable(libft test.c libft.h ${srcs})