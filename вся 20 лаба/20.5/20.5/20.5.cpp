
#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukr");
	int k = 0;
	ofstream file;
	file.open("Zavd5.txt");
	if (!file.is_open())
	{
		cout << "Error!!!";
	}
	else
	{
		char* ch = new char[255];
		cin.getline(ch, 255);
		if (strlen(ch) < 40)
		{
			cout << "Error";
		}
		else
		{
			file << ch;
			for (int i = 0; i < strlen(ch); i++) {
				if (*(ch + i) == 'A' || *(ch + i) == 'E' || *(ch + i) == 'I' || *(ch + i) == 'O' || *(ch + i) == 'U' || *(ch + i) == 'Y' || *(ch + i) == 'a' || *(ch + i) == 'e' || *(ch + i) == 'i' || *(ch + i) == 'o' || *(ch + i) == 'u' || *(ch + i) == 'y')
				{
					k++;
				}
			}
		}
		file << endl << k;
	}
}
