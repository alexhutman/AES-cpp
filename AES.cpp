#include <iostream>
#include "Encrypt.h"

int main(int argc, char* argv[]) {
	std::cout << "Hello world!" << std::endl;

	uint8_t jeff = 0xFF;

	std::cout << "Jeff: " << unsigned(jeff) << std::endl;

	jeff <<= 5;

	std::cout << "Jeff 2: " << unsigned(jeff) << std::endl;

	AES128 x;
	x.encrypt("test1", "1");

	AES192 y;
	y.encrypt("test2", "2");

	AES256 z;
	z.encrypt("test3", "3");

	return 0;
}
