#include <iostream>
#include <Windows.h>
#include <fstream>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ifstream file("D:/Zavd1.txt");
	if (!file.is_open())
		cout << "Error!" << endl;
	else
	{
		char name[50];
		char surname[50];
		char age[3];
		int k = 0;
		while (!file.eof())
		{
			file >> name >> surname >> age;
			cout << age << " " << name << " " << surname << endl;
			k += strlen(name) + strlen(surname);
		}
		cout << endl << "Кількість літер = " << k << endl;
	}
	file.close();
	system("pause");
	return 0;
}
