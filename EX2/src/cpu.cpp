#include "cpu.h"

int compute(std::vector<int> numbers) {
	int summ = 0;
	for (int i = 0; i < numbers.size(); ++i) {
		summ += numbers[i];
	}
	return summ;
}