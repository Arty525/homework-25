#include "ram.h"

int main() {
	std::string command;
	do {
		std::cout << "Input command: ";
		std::cin >> command;
		if (command == "input") {
			input(n);
		}
		else if (command == "display") {
			display(numbers);
		}
		else if (command == "compute") {
			compute(numbers);
			computeDisplay(summ);
		}
		else if (command == "save") {
			save(numbers);
		}
		else if (command == "load") {
			load(numbers);
		}
		else if (command == "test") {
			testInput(n);
			display(numbers);
			testCompute(numbers);
			tcomputeDisplay(summ);
			save(numbers);
			return 0;
		}
	} while (command != "exit");
	return 0;
}