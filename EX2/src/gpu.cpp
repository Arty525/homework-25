#include "gpu.h"

void display(std::vector<int> numbers) {
	CYCLE {
		std::cout << numbers[i] << std::endl;
	}
}
void computeDisplay(int summ) {
	std::cout << summ << std::endl;
}
void tcomputeDisplay(int summ) {
	std::cout << summ << std::endl;
}