#include "ram.h"
void write(int n, std::vector<int> numbers,int i) {
	if (numbers.size() < 8) {
		numbers.push_back(n);
	}
	else {
		numbers[i] = n;
	}
}