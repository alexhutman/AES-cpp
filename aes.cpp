#include <iostream>
#include <cstdio>
#include <cinttypes>
using namespace std;

int main(int argc, char* argv[]) {
	cout << "Hello world!" << endl;

	uint8_t jeff = 0xFF;

	cout << "Jeff: " << unsigned(jeff) << endl;

	jeff <<= 5;

	cout << "Jeff 2: " << unsigned(jeff) << endl;

	return 0;
}
