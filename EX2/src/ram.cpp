#include "ram.h"

std::vector<int> numbers;

void write(int n, int i) {
	if (numbers.size() < 8) {
		numbers.push_back(n);
	}
	else {
		numbers[i] = n;
	}
}