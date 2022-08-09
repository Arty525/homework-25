#pragma once
#include <vector>
#include "keyboard.h"
#include "cpu.h"
#include "gpu.h"
#include "disk.h"

#define CYCLE for(int i = 0; i < 8; ++i)

extern std::vector<int> numbers;
extern void write(int n, int i);