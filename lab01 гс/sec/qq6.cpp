#include "stdafx.h"
#include <iostream>
using namespace std;

void DayNum()
{
	setlocale(LC_CTYPE, "rus");
	int fdate, fday, fmonth, fyear, flag;
	int sum = 0;
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	cout << endl << "������� ����:";
	cin >> fdate;
	fday = fdate / 1000000;
	fmonth = fdate / 10000 % 100;
	fyear = fdate % 10000;


	if ((fyear % 4 == 0 && fyear % 100 != 0) || fyear % 400 == 0)
	{
		flag = true;
	}
	else {

		flag = false;
	}


	if (flag == true) { days[2] = 29; }
	for (int i = 1; i < fmonth; i++)
	{
		sum += days[i];
	}
	sum += fday;	
	cout << sum << endl;
}