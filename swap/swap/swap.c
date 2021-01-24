#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void swap(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}

int main()
{
	int num1, num2;
	scanf("%d%d", &num1, &num2);
	printf("交换前，num1=%d，num2=%d\n", num1, num2);
	swap(&num1, &num2);
	printf("交换后，num1=%d，num2=%d\n", num1, num2);
	return 0;
}