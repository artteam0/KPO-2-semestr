#include <iostream>
#include "stdafx.h"
#include "Dictionary.h"

using namespace std;
using namespace Dictionary;

int main()
{
	try {
		setlocale(LC_ALL, "Ru");

#if defined(TEST_CREATE_01)+defined(TEST_CREATE_02)+defined(TEST_ADDENTRY_03)+defined(TEST_ADDENTRY_04)+defined(TEST_GETENTRY_05)+defined(TEST_GETENTRY_06)+defined(TEST_UPDENTRY_07)+defined(TEST_UPDENTRY_08)+defined(TEST_DICTIONARY)>1
#error Задано больше одного макроса
#endif

#ifdef TEST_CREATE_01 
		Instance d1 = Create("abcdefghigklmnopqrstuvwxyz", 5);
#endif 

#ifdef TEST_CREATE_02
		Instance d1 = Create("Library", 500);
#endif 

#ifdef TEST_ADDENTRY_03
		Instance d1 = Create("Library", 3);
		Entry e1 = { 1,"qq" }, e2 = { 2,"qqq" }, e3 = { 3,"qqqq" }, e4 = { 4,"qqqqq" };
		AddEntry(d1, e1);
		AddEntry(d1, e2);
		AddEntry(d1, e3);
		AddEntry(d1, e4);
#endif
	
#ifdef TEST_ADDENTRY_04
		Instance d1 = Create("Library", 2);
		Entry e1 = { 1,"qq" }, e2 = { 1,"qqq" };
		AddEntry(d1, e1);
		AddEntry(d1, e2);
#endif

#ifdef TEST_GETENTRY_05
		Instance d1 = Create("Library", 2);
		GetEntry(d1, 1111);
#endif

#ifdef TEST_DELENTRY_06
		Instance d1 = Create("Library", 2);
		DelEntry(d1, 1111);
#endif

#ifdef TEST_UPDENTRY_07
		Instance d1 = Create("Library", 2);
		DelEntry(d1, 1111);
#endif

#ifdef TEST_UPDENTRY_08
		Instance d1 = Create("Library", 3);
		Entry e1 = { 1,"gg" }, e2 = { 2,"ff" }, e3 = { 1,"gg" };
		AddEntry(d1, e1);
		AddEntry(d1, e2);
		UpdEntry(d1, 2, e3);
#endif

#ifdef TEST_DICTIONARY
		Instance d1 = Create("Студенты", 7), d2 = Create("Преподаватели", 7);
		Entry d1e1 = { 1,"Александрович" }, d1e2 = { 2,"Билый" }, d1e3 = { 3,"Дмитроченко" }, d1e4 = { 4,"Кулешов" }, d1e5 = { 5,"Лужецкий" }, d1e6 = { 6,"Обдуленко" }, d1e7 = { 7,"Пузанко" };
		Entry d2e1 = { 1,"Белодед" }, d2e2 = { 2,"Наркевич" }, d2e3 = { 3,"Север" }, d2e4 = { 4,"Андронова" }, d2e5 = { 5,"Устилко" }, d2e6 = { 6,"Чайковский" }, d2e7 = { 7,"Контарович" };

		AddEntry(d1, d1e1);
		AddEntry(d1, d1e2);
		AddEntry(d1, d1e3);
		AddEntry(d1, d1e4);
		AddEntry(d1, d1e5);
		AddEntry(d1, d1e6);
		AddEntry(d1, d1e7);

		AddEntry(d2, d2e1);
		AddEntry(d2, d2e2);
		AddEntry(d2, d2e3);
		AddEntry(d2, d2e4);
		AddEntry(d2, d2e5);
		AddEntry(d2, d2e6);
		AddEntry(d2, d2e7);

		Print(d1);
		Print(d2);

#endif
	}	catch (const char* error)
		{
			cout << endl << error << endl;
		}
		return 0;

}