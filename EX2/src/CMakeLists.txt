cmake_minimum_required (VERSION 3.8)


set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable(EX2 EX2.cpp cpu.cpp gpu.cpp keyboard.cpp disk.cpp ram.cpp ${INCLUDE_DIR}/cpu.h ${INCLUDE_DIR}/gpu.h ${INCLUDE_DIR}/keyboard.h ${INCLUDE_DIR}/disk.h ${INCLUDE_DIR}/ram.h)
target_include_directories(EX2 PUBLIC ${INCLUDE_DIR})