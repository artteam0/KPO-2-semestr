//#include "stdafx.h" 
#include <iostream> 

using namespace std;

void  BirthDay(int* array, int day, int month)
{
	int sum1 = 0;
	*(array + 2) = 29; //Так как 2024 високосный 
	for (int i = 1; i < month; i++)
	{
		sum1 += *(array + i);
	}
	sum1 += day;
	int Bday, Bmonth, Bdate;
	cout << endl << "Ur Birthday:  (day,month)" << endl;
	cin >> Bdate;
	Bday = Bdate / 100;
	Bmonth = Bdate % 100;
	int sum2 = 0;
	for (int i = 1; i < Bmonth; i++)
	{
		sum2 += *(array + i);
	}
	sum2 += Bday;
	cout << endl << "Days left:";
	if (sum1 < sum2) cout << endl << sum2 - sum1;
	else cout << endl << 366 - sum1 + sum2;
}

void check(int day, int month, int year, int* array)
{

	if ((year % 4 == 0 and year % 100 != 0) or year % 400 == 0)
	{
		array[2] = 29;
	}
	else {

		array[2] = 28;
	}
	if (month <= 0 or month >= 13) { cout << endl << "ErRor"; exit(69); }
	if (array[month] < day or day == 0)
	{
		cout << endl << "ErRor";
		exit(69);
	}

}

int WhatDayIsIt(bool flag, int* array, int day, int month)
{
	int sum = 0;
	if (flag == true) { *(array + 2) += 1; }
	for (int i = 1; i < month; i++)
	{
		sum += *(array + i);
	}
	sum += day;
	return sum;
	*(array + 2) = 28;
}

int visokos(int year)
{
	if ((year % 4 == 0 and year % 100 != 0) or year % 400 == 0)
	{
		cout << endl << "Visokosny god";
		return true;
	}
	else {

		cout << endl << "NEvisokosny god";
		return false;
	}
}
void YearCalculate()
{
	int year;
	cout << endl << "Year:";
	cin >> year;
	if ((year % 4 == 0 and year % 100 != 0) or year % 400 == 0)
	{
		cout << "Visokosny god" << endl;
	}
	else {

		cout << "NEvisokosny god" << endl;
	}
}

void DayNum()
{
	int fdate, fday, fmonth, fyear, flag;
	int sum = 0;
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	cout << endl << "Date:";
	cin >> fdate;
	fday = fdate / 1000000;
	fmonth = fdate / 10000 % 100;
	fyear = fdate % 10000;


	if ((fyear % 4 == 0 and fyear % 100 != 0) or fyear % 400 == 0)
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



void main()
{
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int date, year, month, day, count;
	bool flag;
	cout << "Date:";
	cin >> date;
	day = date / 1000000;
	month = date / 10000 % 100;
	year = date % 10000;

	check(day, month, year, days);


	flag = visokos(year);
	cout << endl << "Day is:";
	count = WhatDayIsIt(flag, days, day, month);
	cout << count;
	BirthDay(days, day, month);
	YearCalculate();
	DayNum();
}