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
	string s, s1;
	while (getline(file, s1))
		s += s1;
	for (int i = 0; i < sizeof(s); i++)
		if (s[i] == ' ' && s[i + 1] == ' ' && i + 1 < sizeof(s))
		{
			s.erase(i, 1);
			i--;
		}
	cout << s << endl;
	file.close();
	ofstream zavd6_6("Zavd6.txt");
	zavd6_6 << s;
	zavd6_6.close();


	system("pause");
	return 0;
}