#include "Encrypt.h"


std::string Encrypt::encrypt(std::string msg, std::string key) {
	//if keyLength isn't in [128, 192, 256], break or something
	uint8_t** state = Encrypt::convertMsg(msg);
	Encrypt::printState(state);
	Encrypt::validateKey(key);

	return "xd";
}

void Encrypt::validateKey(std::string key) {
	std::cout << "Key: " << key << std::endl;
}

void Encrypt::printState(uint8_t** state) {
	for (int i = 0; i < 4; i++) {
	    for (int j = 0; j < 4; j++) {
		    std::cout << unsigned(state[i][j]) << " ";
	    }
	    std::cout << std::endl;
	}
}

uint8_t** Encrypt::convertMsg(std::string msg) {
	uint8_t** state = new uint8_t*[4];

	for (int i = 0; i < 4; i++) {
		state[i] = new uint8_t[4];

		for (int j = 0; j < 4; j++) {
			std::cout << "setting state[" << i << "][" << j << "] to " << 4*i+j << std::endl;
			state[i][j] = 4*i + j;
		}
	}

	return state;
}

AES128::AES128() {
	keyLength = 128;
}

AES192::AES192() {
	keyLength = 192;
}

AES256::AES256() {
	keyLength = 256;
}
