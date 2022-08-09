#include "disk.h"

std::fstream file;
void save(std::vector<int> numbers) {
	file.open("file.txt");
	CYCLE {
		file << numbers[i] << std::endl;
	}
	file.close();
}
void load(std::vector<int> numbers) {
	file.open("file.txt");
	CYCLE{
		file >> n;
		write(n, i);
	}
	file.close();
}