cmake_minimum_required(VERSION 3.14)
project(libft C)
file (GLOB srcs
        "*.c")
set(CMAKE_C_STANDARD 90)

add_executable(libft libft.h ${srcs} ft_lstadd.c ft_lstiter.c ft_lstmap.c)