#include "header.h"

int main() {

	std::string command;
	do{
		std::cout << "Enter instrument: ";
		std::cin >> command;
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
			std::cout << "Unknown command";
		}
	} while (!compare());
	std::cout << "The operation was successful" << std::endl;
	return 0;
}