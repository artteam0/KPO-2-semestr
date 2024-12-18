#include "stdafx.h"
#include <iostream>
using namespace std;

int VYear(int year)
{
	setlocale(LC_CTYPE, "rus");
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		cout << endl << "Високосный год";
		return true;
	}

	else 
	{
		cout << endl << "Невисокосный год";
		return false;
	}
}