//#include <iostream>
//#include <tchar.h>
//using namespace std;
//
//typedef unsigned char day;
//typedef unsigned char month;
//typedef unsigned short year;
//
//struct Date
//{
//	day dd;
//	month mm;
//	year yyyy;
//};
//
//int _tmain(int argc, _TCHAR* argv[])
//{
//	setlocale(LC_ALL, "ru");
//
//	Date date1 = { 7,1,1980 };
//	Date date2 = { 7,1,1993 };
//	Date date3 = { 7,1,1980 };
//
//	if (date1.dd < date2.dd && date1.mm < date2.mm && date1.yyyy < date2.yyyy || date1.dd == date2.dd && date1.mm == date2.mm && date1.yyyy < date2.yyyy) {
//		cout << "истина" << endl;
//	}
//	else cout << "ложь" << endl;
//
//	if (date1.dd > date2.dd && date1.mm > date2.mm && date1.yyyy > date2.yyyy) {
//		cout << "истина" << endl;
//	}
//	else cout << "ложь" << endl;
//
//	if (date1.dd == date2.dd && date1.mm == date2.mm && date1.yyyy == date2.yyyy) {
//		cout << "истина" << endl;
//	}
//	else cout << "ложь" << endl;
//
//	if (date1.dd == date3.dd && date1.mm == date3.mm && date1.yyyy == date3.yyyy) {
//		cout << "истина" << endl;
//	}
//	else cout << "ложь" << endl;
//}



#include <iostream>
#include <string>
using namespace std;

struct Computer
{
	string type, CPU, videoCard, RAM_size, hardDrive_size, purchaseDate;
	int cost;
	bool presence;
};

void main()
{
	Computer computer1 = {"laptop", "AMD RYZEN 7", "AMD RADEON GRAPHICS", "16GB", "12MB", "12.07.2022", 3450, true};
	Computer computer2 = {"laptop", "AMD RYZEN 5", "RTX 2060", "16GB", "512TB", "17.10.2019", 3700, true};

	bool flag = false;

	if (computer1.type == computer2.type && computer1.CPU == computer2.CPU && computer1.videoCard == computer2.videoCard && computer1.RAM_size == computer2.RAM_size && computer1.hardDrive_size == computer2.hardDrive_size && computer1.purchaseDate == computer2.purchaseDate && flag == true) {
		cout << "Yes, all right!" << endl;
	}
	else cout << "I'm so sorry..." << endl;

	cout << "Summary cost = " << computer1.cost + computer2.cost << "BYN" << endl;
}
