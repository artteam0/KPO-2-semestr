#include <iostream>
#include "Varparm.h"
#include <float.h>
using namespace std;
using namespace Varparm;

void main()
{
	int ivarparm1 = ivarparm(1, 1);
	cout << "ivarparm1 = " << ivarparm1 << endl;

	int ivarparm2 = ivarparm(2, 1, 2);
	cout << "ivarparm2 = " << ivarparm2 << endl;

	int ivarparm3 = ivarparm(3, 1, 2, 3);
	cout << "ivarparm3 = " << ivarparm3 << endl;

	int ivarparm4 = ivarparm(7, 1, 2, 3, 4, 5, 6, 7);
	cout << "ivarparm4 = " << ivarparm4 << endl;

	cout << endl;

	short svarparm1 = svarparm(1, 1);
	cout << "svarparm1 = " << svarparm1 << endl;

	short svarparm2 = svarparm(2, 1, 2);
	cout << "svarparm2 = " << svarparm2 << endl;

	short svarparm3 = svarparm(3, 1, 2, 3);
	cout << "svarparm3 = " << svarparm3 << endl;

	short svarparm4 = svarparm(7, 1, 2, 3, 4, 5, 6, 7);
	cout << "svarparm4 = " << svarparm4 << endl;

	cout << endl;

	float flt_max = FLT_MAX;

	float fvarparm1 = fvarparm(1, FLT_MAX);
	cout << "fvarparm1 = " << fvarparm1 << endl;

	float fvarparm2 = fvarparm(2, 15.1, FLT_MAX);
	cout << "fvarparm2 = " << fvarparm2 << endl;

	float fvarparm3 = fvarparm(3, 15.1, 15.2, FLT_MAX);
	cout << "fvarparm3 = " << fvarparm3 << endl;

	float fvarparm4 = fvarparm(7, 15.1, 15.2, 15.3, 15.4, 15.5, 15.6, FLT_MAX);
	cout << "fvarparm4 = " << fvarparm4 << endl;

	cout << endl;

	double dbl_max = DBL_MAX;

	double dvarparm1 = dvarparm(1, DBL_MAX);
	cout << "dvarparm1 = " << dvarparm1 << endl;

	double dvarparm2 = dvarparm(2, 15.1, DBL_MAX);
	cout << "dvarparm2 = " << dvarparm2 << endl;

	double dvarparm3 = dvarparm(3, 15.1, 15.2, DBL_MAX);
	cout << "dvarparm3 = " << dvarparm3 << endl;

	double dvarparm4 = dvarparm(7, 15.1, 15.2, 15.3, 15.4, 15.5, 15.6, DBL_MAX);
	cout << "dvarparm4 = " << dvarparm4 << endl;
}
