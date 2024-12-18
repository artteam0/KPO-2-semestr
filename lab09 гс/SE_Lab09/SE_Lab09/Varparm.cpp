#include "Varparm.h"
#include <stdarg.h>
#include <locale>

namespace Varparm 
{
	int ivarparm(int count, ...)
	{
		int p = 1;
		va_list arg;
		va_start(arg, count);
		//va_arg(arg, int);
		
		for (int i = 1; i < count; i++) {
			p *= va_arg(arg, int);
		}

		va_end(arg);
		return p;
	}

	int svarparm(short count, ...)
	{
		va_list arg;
		va_start(arg, count);
		int max = va_arg(arg, int); 
		
		for (int i = 1; i < count; i++) { 
			int value = va_arg(arg, int);

			if (value > max)
			{
				max = value;
			}
		}

		va_end(arg);
		return max;
	}

	double fvarparm(float count...)
	{
		float sum = 0;
		if (count == FLT_MAX)
		{
			return 0;
		}
		sum += count;
		double* p = (double*)(&count + 1);
		int i = 0;
		while (p[i] != FLT_MAX)
		{
			sum += p[i++];
		}

		return sum;
	}

	double dvarparm(double count...) 
	{
		double sum = 0;
		double* p = &count;  int i = 0;

		while (p[i] != DBL_MAX) {
			sum += p[i++];
		}

		return sum;
	}
}