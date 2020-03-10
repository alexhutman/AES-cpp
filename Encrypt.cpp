#include "Encrypt.h"
#include <iostream>


void Encrypt::getKeyLen() {
	//if key_length isn't in [128, 192, 256], break or something
	std::cout << key_length << std::endl;
}

AES128::AES128() {
	key_length = 128;
}

AES192::AES192() {
	key_length = 192;
}

AES256::AES256() {
	key_length = 256;
}
