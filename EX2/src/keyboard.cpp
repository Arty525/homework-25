#include "keyboard.h"
//#include "EX2.cpp"

void input(std::vector<int> numbers) {
	int n;
	std::cout << "Input numbers: " << std::endl;
	for (int i = 0; i < numbers.size(); ++i) {
		std::cout << i << ") ";
		std::cin >> n;
		write(n, numbers, i);
	}
}