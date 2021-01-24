#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int j = 0;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0])-1;
	scanf("%d", &j);
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (j < arr[mid])
		{
			right = mid - 1;
		}
		else if (j > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}