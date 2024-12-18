#include <iostream>
using namespace std;

int defaultparm(int a, int b, int c, int d, int e, int x = 6, int y = 7)
{
	return (a + b + c + d + e + x + y) / 7;
}

int main()
{
	cout << defaultparm(1, 2, 3, 4, 5) << endl;
	cout << defaultparm(1, 2, 3, 4, 5, 10, 20) << endl;
}