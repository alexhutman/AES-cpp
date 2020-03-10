#ifndef ENCRYPT_H
#define ENCRYPT_H

class Encrypt {
	protected:
		int key_length;
	public:
		//string encrypt(string, string);
		void getKeyLen();
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
