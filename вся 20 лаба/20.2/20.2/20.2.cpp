// 20.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>
#include "ukr.h"
using namespace std;

int main()
{
    ukr();
    int a;
    cout << "Введіть трицифрове число: ";
    cin >> a;
    ofstream file;
    int n=0;
    file.open("Zavd2.txt");
    if (!file.is_open())
    {
        cout << "\aФайл не відкрився!!!";
    }
    else {
        if (a >= 100 && a<1000)
        {
            file << a;
        }
        else{
            cout << "Помилка!";
        }
    }
    file.close();
    fstream file1;
    file1.open("Zavd2.txt", fstream::in | fstream::out);
    if (!file1.is_open())
    {
        cout << "\aФайл не відкрився!!!";
    }
    else {
        file1 >> n;
        n = n % 10 * 100 + n % 100 / 10 * 10 + n / 100;
    }
    file1.close();
    ofstream file2;
    file2.open("Zavd2.txt", ofstream::app);
    if (!file2.is_open())
    {
        cout << "\aФайл не відкрився!!!";
    }
    else {
        file2 << endl << n;
    }
    file2.close();
}

