#include<Windows.h>
#include <iostream>

using namespace std;

int main() {
	typedef char* (__stdcall* f_cypher)(char* source, int key);
	HINSTANCE hGetProcIDDLL = LoadLibrary("D:\\VSrepo\\CaesarCypher\\x64\\Debug\\CaesarCypher.dll");
	f_cypher encrypt = (f_cypher)GetProcAddress(hGetProcIDDLL, "encrypt");
	f_cypher decrypt = (f_cypher)GetProcAddress(hGetProcIDDLL, "decrypt");

	char text[80];
	int key = 0;
	int command = 0;
	while (true) {
		cout << "Enter the comand: ";
		cin >> command;
		switch (command)
		{
		case 1:
			cout << "Enter text: ";
			scanf_s("%s", text, sizeof(text));
			cout << "Enter key: ";
			scanf_s("%i", &key);
			cout << encrypt(text, key) << endl;
			break;
		case 2:
			cout << "Enter text: ";
			scanf_s("%s", text, sizeof(text));
			cout << "Enter key: ";
			scanf_s("%i", &key);
			cout << decrypt(text, key) << endl;
			break;
		default:
			break;
		}
	}
}