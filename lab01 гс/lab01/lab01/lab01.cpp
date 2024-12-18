//#include <iostream>
//using namespace std;
//
//int dayOfYear(int day, int month, int year) {
//    setlocale(LC_CTYPE, "rus");
//
//    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//        daysInMonth[1] = 29;
//    }
//
//    int resultDay = day;
//
//    for (int i = 0; i < month - 1; i++) {
//        resultDay += daysInMonth[i];
//    }
//
//    return resultDay;
//}
//
//int main() {
//    setlocale(LC_CTYPE, "rus");
//
//    /*int date;
//    cin >> date;
//    cout << date / 1000000 << endl;
//    cout << date / 10000 % 100 << endl;
//    cout << date % 10000 << endl;*/
//
//    int year, month, day;
//    cout << "Введите год: ";
//    cin >> year;
//
//    cout << "Введите месяц: ";
//    cin >> month;
//
//    cout << "Введите день: ";
//    cin >> day;
//
//
//
//    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//        cout << year << " - високосный год" << endl;
//    }
//    else {
//        cout << year << " - не високосный год" << endl;
//    }
//
//    int resultDay = dayOfYear(day, month, year);
//    cout << "Порядковый номер дня в году: " << resultDay << endl;
//
//    int birthday, birthMonth, nowdays, nowMonth;
//    cout << "Введите день своего рождения: ";
//    cin >> birthday;
//    cout << "Введите месяц своего рождения: ";
//    cin >> birthMonth;
//    cout << "Введите сегодняшнее число: ";
//    cin >> nowdays;
//    cout << "Введите сегодняшний месяц: ";
//    cin >> nowMonth;
//
//
//    return 0;
//}
//
//
////
////#include <iostream>
////using namespace std;
////void main()
////{
////    int Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec;
////    int Jan2, Feb2, Mar2, Apr2, May2, Jun2, Jul2, Aug2, Sep2, Oct2, Nov2, Dec2;
////    int dd1, mm1, yy1;
////    int dd2, mm2, yy2;
////    const int DinY = 365;
////
////    cout << "Enter the date1 (DD MM YYYY): "; // просим ввести первую дату
////    cin >> dd1 >> mm1 >> yy1;
////
////    if (yy1 > 9999 || yy1 < 1 || mm1>12 || mm1 < 1 || dd1>31 || dd1 < 1)
////        cout << "You entered incorrect date!" << endl;
////
////    cout << "Enter the date2 (DD MM YYYY): "; // просим ввести вторую дату
////    cin >> dd2 >> mm2 >> yy2;
////    cout << endl;
////
////    if (yy2 > 9999 || yy2 < 1 || mm2>12 || mm2 < 1 || dd2>31 || dd2 < 1)
////        cout << "You entered incorrect date!" << endl;
////
////    Jan = 0; Feb = 31; Mar = 59; Apr = 90; May = 120; Jun = 151;
////    Jul = 181; Aug = 212; Sep = 243; Oct = 273; Nov = 304; Dec = 334; // число дней обычного года, истекших к началу определенного месяца с начала года
////
////    int mm3;
////
////    if (mm2 < 2)
////        mm3 = Jan;
////    else if (mm2 > 1 && mm2 < 3)
////        mm3 = Feb;
////    else if (mm2 > 2 && mm2 < 4)
////        mm3 = Mar;
////    else if (mm2 > 3 && mm2 < 5)
////        mm3 = Apr;
////    else if (mm2 > 4 && mm2 < 6)
////        mm3 = May;
////    else if (mm2 > 5 && mm2 < 7)
////        mm3 = Jun;
////    else if (mm2 > 6 && mm2 < 8)
////        mm3 = Jul;
////    else if (mm2 > 7 && mm2 < 9)
////        mm3 = Aug;
////    else if (mm2 > 8 && mm2 < 10)
////        mm3 = Sep;
////    else if (mm2 > 9 && mm2 < 11)
////        mm3 = Oct;
////    else if (mm2 > 10 && mm2 < 12)
////        mm3 = Nov;
////    else
////        mm3 = Dec;
////
////    int mm5;
////
////    if (mm1 < 2)
////        mm5 = Jan;
////    else if (mm1 > 1 && mm1 < 3)
////        mm5 = Feb;
////    else if (mm1 > 2 && mm1 < 4)
////        mm5 = Mar;
////    else if (mm1 > 3 && mm1 < 5)
////        mm5 = Apr;
////    else if (mm1 > 4 && mm1 < 6)
////        mm5 = May;
////    else if (mm1 > 5 && mm1 < 7)
////        mm5 = Jun;
////    else if (mm1 > 6 && mm1 < 8)
////        mm5 = Jul;
////    else if (mm1 > 7 && mm1 < 9)
////        mm5 = Aug;
////    else if (mm1 > 8 && mm1 < 10)
////        mm5 = Sep;
////    else if (mm1 > 9 && mm1 < 11)
////        mm5 = Oct;
////    else if (mm1 > 10 && mm1 < 12)
////        mm5 = Nov;
////    else
////        mm5 = Dec;
////
////
////    int DinY2; // кол-во дней в последнем неполном году
////
////    DinY2 = mm3 + dd2;
////
////    Jan2 = 365; Feb2 = 334; Mar2 = 304; Apr2 = 273; May2 = 243; Jun2 = 212;
////    Jul2 = 181; Aug2 = 151; Sep2 = 120; Oct2 = 90; Nov2 = 59; Dec2 = 31; // число дней обычного года, оставшиеся к началу следующего года
////
////    int mm4;
////
////    if (mm1 < 2)
////        mm4 = Jan2;
////    else if (mm1 > 1 && mm1 < 3)
////        mm4 = Feb2;
////    else if (mm1 > 2 && mm1 < 4)
////        mm4 = Mar2;
////    else if (mm1 > 3 && mm1 < 5)
////        mm4 = Apr2;
////    else if (mm1 > 4 && mm1 < 6)
////        mm4 = May2;
////    else if (mm1 > 5 && mm1 < 7)
////        mm4 = Jun2;
////    else if (mm1 > 6 && mm1 < 8)
////        mm4 = Jul2;
////    else if (mm1 > 7 && mm1 < 9)
////        mm4 = Aug2;
////    else if (mm1 > 8 && mm1 < 10)
////        mm4 = Sep2;
////    else if (mm1 > 9 && mm1 < 11)
////        mm4 = Oct2;
////    else if (mm1 > 10 && mm1 < 12)
////        mm4 = Nov2;
////    else
////        mm4 = Dec2;
////
////
////    int DinY1; // кол-во дней в первом неполном году
////
////    DinY1 = mm4 - dd1;
////
////    int date3, date4, res; // date3 - количество полных лет, date4 - кол-во высокосных.
////
////    date3 = yy2 - yy1;
////    date4 = date3 / 4; // кол-во высокосных
////    date3--;
////
////    if (yy2 != yy1)
////        res = (date3 * DinY) + DinY1 + DinY2 + date4; // DinY - константа, кол-во дней в обычном году
////    else if (yy1 == yy2 && mm1 == mm2)
////        res = dd2 - dd1;
////    else
////        res = (mm3 + dd2) - (mm5 + dd1);
////    cout << "Quantity of days between entered dates is: " << res << endl << endl;
////
////    system("pause");
////}



#include "stdafx.h" 
#include <iostream> 

using namespace std;

void main()
{
	setlocale(LC_CTYPE, "rus");
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int date, year, month, day, count;
	bool flag;
	cout << "Введите сегодняшнюю дату: ";
	cin >> date;
	day = date / 1000000;
	month = date / 10000 % 100;
	year = date % 10000;

	flag = VYear(year);
	cout << endl << "Номер дня в году: ";
	count = WhatDayIsIt(flag, days, day, month);
	cout << count;
	BirthDay(days, day, month, year);
	YearCalculate();
	DayNum();
}