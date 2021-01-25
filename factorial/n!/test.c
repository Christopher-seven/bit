#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//∑«µ›πÈ–¥∑®
int main()
{
	int i = 0;
	int ret = 1;
	scanf("%d",&i);
	int n = 0;
	for (n = 2; n <= i;n++)
	{
		ret *= n;
	}
	printf("%d\n", ret);
	return 0;
}


