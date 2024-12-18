#include <iostream>
using namespace std;

void func() {

}

int main() {
	/*X = 9 + 11, Y = 10 + 11, Z = 11 + 11, S = 1.0 + 11*/
	setlocale(LC_ALL, "Ru");

	bool first = true;
	bool second = false;

	cout << "address of the first bool variable: " << &first << endl; //01
	cout << "address of the second bool variable: " << &second << endl; //00
	cout << endl;

	char secondLetterOfTheSurname = 'y';

	cout << "address of the second letter of the surname (y): " << (void*)secondLetterOfTheSurname << endl; //79
	cout << endl;

	char secondLetterOfTheSurnameRuss = 'у';

	cout << "address of the second letter of the surname on Russian (у): " << (void*)&secondLetterOfTheSurnameRuss << endl; //f3
	cout << endl;

	wchar_t firstLetterOfTheSurname = L'K';

	wcout << L"address of the first letter of the surname (K): " << (void*)&firstLetterOfTheSurname << endl; //00 4b
	wcout << endl;

	wchar_t firstLetterOfTheSurnameRuss = L'К';

	wcout << L"address of the first letter of the surname on Russian (К): " << (void*)&firstLetterOfTheSurnameRuss << endl; //1a 04
	wcout << endl;

	short X = 9 + 11;
	short negativeX = -X;

	cout << "value of X: " << hex << X << endl; //шестнадцатеричное значение X равно 0x16//
	cout << "value of negative X: " << hex << negativeX << endl; //шестнадцатеричное значение -X равно 0xFFF6//
	cout << "address of the X: " << &X << endl; //14 01
	cout << "address of the negative X: " << &negativeX << endl; //ec ff
	cout << endl;

	short minShort = 0x8000;
	short maxShort = 0x7FFF;

	cout << "decimal representation of the minimum value of type short: " << dec << minShort << endl; //-32768
	cout << "decimal representation of the maximum value of type short: " << dec << maxShort << endl; //32767
	cout << endl;

	unsigned short minUnsigned_short = 0x0000;
	unsigned short maxUnsigned_short = 0xFFFF;

	cout << "decimal representation of the minimum value of type unsigned short: " << dec << minUnsigned_short << endl; //00 00
	cout << "decimal representation of the maximum value of type unsigned short: " << dec << maxUnsigned_short << endl; //ff ff
	cout << endl;

	int Y = 10 + 11;
	int negativeY = -Y;

	cout << "hexadecimal representation of Y (Y = 21): " << hex << Y << endl; //0x15
	cout << "hexadecimal representation of negative Y (Y = 21): " << hex << negativeY << endl; //binary: 10101. hexadecimal: 0xFFFFFFFB//
	cout << "address of the Y: " << &Y << endl;
	cout << "address of the negative Y: " << &negativeY << endl;
	cout << endl;

	int minInt = 0x80000000;
	int maxInt = 0x7FFFFFFF;

	cout << "decimal representation of the minimum value of type int: " << dec << minInt << endl; //80 00 00 00
	cout << "decimal representation of the maximum value of type int: " << dec << maxInt << endl; //7f ff ff ff
	cout << endl;

	unsigned int minUnsigned_int = 0x00000000;
	unsigned int maxUnsigned_int = 0xFFFFFFFF;

	cout << "decimal representation of the minimum value of type unsigned int: " << dec << minUnsigned_int << endl; //00 00 00 00
	cout << "decimal representation of the maximum value of type unsigned int: " << dec << maxUnsigned_int << endl; //ff ff ff ff
	cout << endl;

	long Z = 11 + 11; //0x16
	long negativeZ = -Z; //binary: 10110. hexadecimal: 0xFFFFFFEA

	cout << "hexadecimal representation of Z (Z = 22): " << hex << Z << endl; //00 00 00 16
	cout << "hexadecimal representation of negative Z (Z = 21): " << hex << negativeZ << endl; //ff ff ff ea
	cout << "address of the Z: " << &Z << endl;
	cout << "address of the negative Z: " << &negativeZ << endl;
	cout << endl;

	long minLong = 0x80000000; 
	long maxLong = 0x7FFFFFFF;

	cout << "decimal representation of the minimum value of type long: " << dec << minLong << endl; //-2147483645
	cout << "decimal representation of the maximum value of type long: " << dec << maxLong << endl; //2147483645
	cout << endl;

	unsigned long minUnsigned_long = 0x00000000;
	unsigned long maxUnsigned_long = 0xFFFFFFFF;

	cout << "decimal representation of the minimum value of type unsigned long: " << dec << minUnsigned_long << endl; //0
	cout << "decimal representation of the maximum value of type unsigned long: " << dec << maxUnsigned_long << endl; //4294967295
	cout << endl;

	float S = 1.0 + 11;
	float negativeS = -S;

	cout << "hexadecimal representation of S (S = 12.0): " << hex << *((unsigned int*)&S) << endl;
	cout << "hexadecimal representation of negative S (S = 12.0): " << hex << *((unsigned int*)&negativeS) << endl;
	cout << "address of S: " << &S << endl;
	cout << "address of negative S: " << &negativeS << endl;
	cout << endl;

	float infinity = S / 0.0;
	float negativeInfinity = -S / 0.0;
	float nan = sqrt(-2.2);

	cout << "1.#INF: " << infinity << endl;
	cout << "-1.#INF: " << negativeInfinity << endl;
	cout << "-1.#IND: " << nan << endl;

	char* one; //79
	one = &secondLetterOfTheSurname + 3;
	wchar_t* two; //00 4b
	two = &firstLetterOfTheSurname + 3;
	short* three; //80 00
	three = &minShort + 3;
	int* four; //80 00 00 00 
	four = &minInt;
	float* five; //41 40 00 00
	five = (float*)& minInt + 3;


	void (*pointer)();
	pointer = func;
	pointer();

	return 0;

}