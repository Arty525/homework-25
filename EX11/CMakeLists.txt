# CMakeList.txt: проект CMake для EX1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("EX11")

# Добавьте источник в исполняемый файл этого проекта.


set(CMAKE_CXX_STANDARD 14)

set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
add_subdirectory(src)

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
