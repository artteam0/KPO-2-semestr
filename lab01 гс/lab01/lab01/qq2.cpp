#include "stdafx.h"
#include <iostream>
using namespace std;

void CheckAll(int day, int month, int year, int* array,int full)
{
	setlocale(LC_CTYPE, "rus");
	if (full<10000000 || full>99999999)
	{
		cout << endl << "Error";
		exit(69);
	}
	
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		array[2] = 29;
	}
	else {

		array[2] = 28;
	}
	if (month <= 0 || month >= 13) { cout << endl << "Error"; exit(69); }
	if (array[month] < day || day == 0)
	{
		cout << endl << "Error";
		exit(69);
	}

}
