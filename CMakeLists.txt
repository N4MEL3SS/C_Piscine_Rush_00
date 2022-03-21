cmake_minimum_required(VERSION 3.16)
project(rush00 C)

set(CMAKE_C_STANDARD 99)

#	Project Source
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/ex00)
set(SRC_LIST ${SRC_DIR}/ft_putchar.c
		${SRC_DIR}/rush00.c)
set(MAIN_PRG ${SRC_DIR}/main.c)
set(MAIN_PRG_ARG ${SRC_DIR}/main_arg.c)

add_executable(rush00 ${MAIN_PRG} ${SRC_LIST})
add_executable(rush00_arg ${MAIN_PRG_ARG} ${SRC_LIST})
