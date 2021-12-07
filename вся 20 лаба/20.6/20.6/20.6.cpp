#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ifstream file("Zavd6.txt");
	char str[100];
	int n;
	file.getline(str, 100);
	n = strlen(str);
	for (int i = 0; i < n; i++)
		if (str[i] == ' ' && str[i + 1] == ' ' && i + 1 < n)
		{
			n--;
			for (int j = i; j < n; j++)
			{
				int t = str[j];
				str[j] = str[j + 1];
				str[j + 1] = t;
			}
			i--;
		}
	for (int i = 0; i < n; i++)
		cout << str[i];
	cout << endl;
	file.close();
	ofstream zavd6_6("Zavd6.txt");
	for (int i = 0; i < n; i++)
		zavd6_6 << str[i];
	zavd6_6.close();

	system("pause");
	return 0;
}