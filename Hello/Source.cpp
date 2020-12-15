#include<iostream>
//#include <Windows.h>

using namespace std;

void main()
{
	//SetConsoleCP(866); SetConsoleOutputCP(866);
	//SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	//SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	setlocale(LC_ALL, "rus");
	cout << "Hello World\n";
	cout << "\t\tПривет мир\n";
	cout << "Второй привет для GitHub!!!";
}