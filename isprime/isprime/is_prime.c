#define _CRT_SECURE_NO_WARNINGS 1
#include "is_prime.h"

int is_prime(int x)
{
	int y = 0;
	for (y = 2; y <= sqrt(x); y++)
	{
		if (0 == x%y)
		{
			return 0;
		}
		return 1;
	}
}