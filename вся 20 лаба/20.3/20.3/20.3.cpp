#include <iostream>
#include <Windows.h>
#include <fstream>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int k = 0;
	ifstream file("D:/Zavd3.txt");
	if (!file.is_open())
		cout << "Error!" << endl;
	else
	{
		while (!file.eof())
		{
			int n;
			file >> n;
			while (n > 0)
			{
				if (n % 2 == 0)
					k++;
				n /= 10;
			}
		}
	}
	cout << "Кількість парних = " << k << endl;
	file.close();


	system("pause");
	return 0;
}