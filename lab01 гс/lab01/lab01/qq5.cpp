#include "stdafx.h"
#include <iostream>
using namespace std;

void YearCalculate()
{
	setlocale(LC_CTYPE, "rus");
	int year;

	cout << endl << "���: ";
	cin >> year;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		cout << "���������� ���" << endl;
	}
	else {

		cout << "������������ ���" << endl;
	}
}