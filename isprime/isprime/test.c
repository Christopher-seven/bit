#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "is_prime.h"

int main()
{
	int num = 0;
	while (~scanf("%d", &num))
	{
		int ret = is_prime(num);
		if (0 == ret)
			printf("%d��������\n", num);
		else
			printf("%d������\n", num);
	}
	return 0;
}
