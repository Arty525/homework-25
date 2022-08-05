cmake_minimum_required (VERSION 3.8)


set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable(EX11 EX11.cpp ${INCLUDE_DIR}/header.h)
target_include_directories(EX11 PUBLIC ${INCLUDE_DIR})