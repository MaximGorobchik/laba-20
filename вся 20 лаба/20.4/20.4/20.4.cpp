#include <iostream>
#include <Windows.h>
#include <fstream>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ifstream file("D:/Zavd4.txt");
	if (!file.is_open())
		cout << "Error!" << endl;
	else
	{
		int n = 0, bal = 0;
		char* p = new char[10];
		while (!file.eof())
		{
			file >> p >> n;
			bal += n;
		}
		char ECTS;
		int avg = bal / 5;
		if (avg >= 90)
			ECTS = 'A';
		if (avg >= 85)
			ECTS = 'B';
		if (avg >= 75)
			ECTS = 'C';
		if (avg >= 65)
			ECTS = 'D';
		if (avg >= 60)
			ECTS = 'E';
		if (avg < 60)
			ECTS = 'F';
		cout << bal << " " << avg << " " << ECTS << endl;
		file.close();
		delete[]p;
	}
	system("pause");
	return 0;
}