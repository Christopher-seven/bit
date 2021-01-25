#define _CRT_SECURE_NO_WARNINGS 1

void print(int x)
{
	if (x> 9)
	{
		print(x / 10);
	}
	printf("%d ", x % 10);
}



int main()
{
	int input = 0;
	scanf("%d", &input);
	print(input);
	return 0;
}