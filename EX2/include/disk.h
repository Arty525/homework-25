#pragma once
#include <fstream>
#include "ram.h"

extern std::fstream file;
extern void save(std::vector<int> numbers);
extern void load(std::vector<int> numbers);