#include <iostream>
#include "CaesarCypher.h"
using namespace std;

int main() {
	char text[80];
	int key = 0;
	int command = 0;
	while (true) {
		cin >> command;
		switch (command)
		{
		case 1:
			scanf_s("%s", text, sizeof(text));
			scanf_s("%i", &key);
			cout << encrypt(text, key);
			break;
		case 2:
			scanf_s("%s", text, sizeof(text));
			scanf_s("%i", &key);
			cout << decrypt(text, key);
			break;
		default:
			break;
		}
	}
}