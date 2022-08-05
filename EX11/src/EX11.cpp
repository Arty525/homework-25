#include "header.h"

int main() {
	std::string command;
	std::cout << "Enter instrument: ";
	std::cin >> command;
	do {
		if (command == "scalpel") {
			scalpel();
		}
		else if (command == "hemostat") {
			hemostat();
		}
		else if (command == "tweezers") {
			tweezers();
		}
		else if (command == "suture") {
			suture();
		}
		else {
			std::cout << "Unknown command"
		}
	} while (scalpelStart.x != sutureStart.x && scalpelStart.y != sutureStart.y && scalpelEnd.x != sutureEnd.x && scalpelEnd.y != sutureEnd.y);

	return 0;
}