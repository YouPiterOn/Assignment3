#include <iostream>
#include "CaesarCypher.h"
using namespace std;

int main() {
	char text[10] = "something";
	char* crypt = encrypt(text, 2);
	cout << crypt;
	crypt = decrypt(crypt, 1);
	cout << crypt;
	crypt = decrypt(crypt, 1);
	cout << crypt;
	return 0;
}