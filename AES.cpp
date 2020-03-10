#include <iostream>
#include "Encrypt.h"

int main(int argc, char* argv[]) {
	std::cout << "Hello world!" << std::endl;

	uint8_t jeff = 0xFF;

	std::cout << "Jeff: " << unsigned(jeff) << std::endl;

	jeff <<= 5;

	std::cout << "Jeff 2: " << unsigned(jeff) << std::endl;

	AES128 x;
	x.getKeyLen();

	AES192 y;
	y.getKeyLen();

	AES256 z;
	z.getKeyLen();

	return 0;
}
