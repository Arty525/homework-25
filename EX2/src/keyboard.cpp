#include "keyboard.h"

int n;
void input(int n) {
	std::cout << "Input numbers: " << std::endl;
	CYCLE{
		std::cout << i+1 << ") ";
		std::cin >> n;
		write(n, i);
	}
}
void testInput(int n) {
	std::cout << "Input numbers: " << std::endl;
	CYCLE {
		std::cout << i + 1 << ") ";
		n = i+1;
		std::cout << n << std::endl;
		write(n, i);
	}
}