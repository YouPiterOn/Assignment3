#include <iostream>
#include "CaesarCypher.h"
using namespace std;

int main() {
	char text[10] = "something";
	char* crypt = encrypt(text, 2);
	cout << crypt << endl;
	crypt = decrypt(crypt, 1);
	cout << crypt << endl;
	crypt = decrypt(crypt, 1);
	cout << crypt;
	cin >> text;
	return 0;
}