cmake_minimum_required(VERSION 3.10)
project(moon C)

set(CMAKE_C_STANDARD 99)

if(MSVC)
    add_compile_options(${TARGET_NAME} /W3)
else()
    add_compile_options(${TARGET_NAME} -Wall -Wextra -pedantic)
endif()

add_executable(moon main.c dictionary.c dictionary.h function.h helpers.h interpreter.c interpreter.h lexer.h node.h parser.c parser.h token.h)
