#include "cpu.h"

int summ;

int compute(std::vector<int> numbers) {
	summ = 0;
	CYCLE {
		summ += numbers[i];
	}
	return summ;
}
int testCompute(std::vector<int> numbers) {
	summ = 0;
	CYCLE {
		summ += numbers[i];
	}
	return summ;
}