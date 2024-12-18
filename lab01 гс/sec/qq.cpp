#include "stdafx.h"
#include <iostream>
using namespace std;

void BirthDay(int* array, int day, int month, int year)
{
	setlocale(LC_CTYPE, "rus");
	int sum1 = 0;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		*(array + 2) = 29;
	}
	else *(array + 2) = 28;
	

	for (int i = 1; i < month; i++)
	{
		sum1 += *(array + i);
	}

	sum1 += day;
	int Birthday, BirthMonth, BirthDate;

	cout << endl << "¬ведите ваш день рождени€:  (день, мес€ц)" << endl;
	cin >> BirthDate;

	Birthday = BirthDate / 100;
	BirthMonth = BirthDate % 100;

	int sum2 = 0;

	for (int i = 1; i < BirthMonth; i++)
	{
		sum2 += *(array + i);
	}

	sum2 += Birthday;

	cout << endl << "ƒо вашего дн€ рождени€ осталось: " ;

	if (sum1 < sum2) {
		cout << endl << sum2 - sum1;
	}
	
	if (sum1 > sum2) {

		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
			cout << endl << 366 - sum1 + sum2;
		}

		else cout << 365 - sum1 + sum2;
	}

}