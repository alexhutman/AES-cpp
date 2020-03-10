#ifndef ENCRYPT_H
#define ENCRYPT_H

#include <iostream>

class Encrypt {
	protected:
		int keyLength;

		void printState(uint8_t**);
		void validateKey(std::string);
		uint8_t** convertMsg(std::string);
	public:
		std::string encrypt(std::string, std::string);
};


class AES128 : public Encrypt {
	public:
		AES128();
};

class AES192 : public Encrypt {
	public:
		AES192();
};

class AES256 : public Encrypt {
	public:
		AES256();
};
#endif
