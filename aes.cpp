#include <iostream>

int main(int argc, char* argv[]) {
	std::cout << "Hello world!" << std::endl;

	uint8_t jeff = 0xFF;

	std::cout << "Jeff: " << unsigned(jeff) << std::endl;

	jeff <<= 5;

	std::cout << "Jeff 2: " << unsigned(jeff) << std::endl;

	return 0;
}
