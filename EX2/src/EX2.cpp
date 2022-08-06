#include "ram.h"

//#include "disk.cpp"

int main() {
	std::string command;
	do {
		std::cout << "Input command: ";
		std::cin >> command;
		if (command == "input") {
			input(numbers);
		}
		else if (command == "display") {
			display(numbers);
		}
	} while (command != "exit");
	return 0;
}