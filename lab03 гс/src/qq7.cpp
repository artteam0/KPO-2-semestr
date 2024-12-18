#include "stdafx.h"
#include <iostream>
using namespace std;
void monthName(int month)
{
	const char* names[13] = { "","January","February","March","April","May","June","July","August","September","October","November","December" };
	cout << names[month];
}
void progDay(bool vis, int* arr, int day, int month, int target)
{
	int sum = 0;

	
	if (vis == true && target == 366)
	{
		cout << endl << "Happy New Year!";
	}

	if (vis == false && target == 365)
	{
		cout << "Happy New Year!" << endl;
	}

	if (target == 35)
	{
		cout << "С днём кофе!";
	}
	if (vis == true && target == 74)
	{
		cout << endl << "С днём ноутбука!";
	}

	if (vis == false && target == 72)
	{
		cout << "С днём шляпы!" << endl;
	}
	if (vis == true && target == 185)
	{
		cout << endl << "С днём ракеты!";
	}

	if (vis == false && target == 183)
	{
		cout << "С днём жвачки!" << endl;
	}
	if (target == 256)
	{
		cout << "С днем программиста!";
	}
}