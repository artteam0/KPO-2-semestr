﻿#include <iostream>
#include <locale>//для пидорасов // 
#include "D:\уник\2 сем\КПО\lab06 гс\SE_Lab06L\SE_Lab06L\Dictionary.h"
#pragma comment(lib, "D:/уник/2 сем/КПО/lab06 гс/SE_Lab06L/x64/Debug/SE_Lab06L.lib")
using namespace std;
using namespace Dictionary;

int main()
{
	setlocale(LC_ALL, "Ru");
	try
	{
		Instance d1 = Create("Преподаватели", 5);
		Entry e1 = { 1,"Гладкий" }, e2 = { 2,"Веялкин" }, e3 = { 3,"Смелов" }, e4 = { 4,"Урбанович" }, e5 = { 2,"Пацей" };
		AddEntry(d1, e1);
		AddEntry(d1, e2);
		AddEntry(d1, e3);
		AddEntry(d1, e4);
		Entry ex2 = GetEntry(d1, 4);
		Entry newentry1 = { 6,"Гурин" };
		UpdEntry(d1, 3, newentry1);
		Print(d1);
		Instance d2 = Create("Студенты", 5);
		Entry s1 = { 1,"Иванов" }, s2 = { 2,"Петров" }, s3 = { 3,"Сидоров" };
		AddEntry(d2, s1);
		AddEntry(d2, s2);
		AddEntry(d2, s3);
		Entry newentry3 = { 3,"Николаев" };
		UpdEntry(d2, 3, newentry3);
		Print(d2);
		Delete(d1);
		Delete(d2);
	}
	catch (char* e)
	{
		cout << e << endl;
	}
	system("pause");
	return 0;
}