cmake_minimum_required(VERSION 3.14)
project(libft C)

set(CMAKE_C_STANDARD 90)

add_executable(libft test.c ft_atoi.c ft_strcmp.c ft_strncmp.c ft_strstr.c ft_putnbr.c ft_whtnbr.c)