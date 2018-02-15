#include "stdafx.h"
#include <iostream>
#include <conio.h> 
#include <Windows.h>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	SetConsoleOutputCP(1251);
	char *Fraza = new char[100];
	string Ignor = " ,.:!-";

	cin >> Fraza;

	

	cout << strlen(Fraza) << endl;
	for (int i = 0, j = strlen(Fraza) - 1;
		i < j;
		i++, j--)
	{
		if (Ignor.find(Fraza[i], 0) == string::npos) {
			j++;
			continue;
		}
		if (Ignor.find(Fraza[j], 0) == string::npos) {
			i--;
			continue;
		}
	
		if (toupper(Fraza[i]) != toupper(Fraza[j])) {
			cout << "Не полиндром" << endl;
			_getch();
			return 0;
		}

	}
	cout << "полиндром" << endl;
	_getch();
	return 0;
}
