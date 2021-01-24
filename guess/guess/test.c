#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void menu()
//游戏进入时的界面
{
	printf("您已进入猜数字游戏\n");
	printf("******************\n");
	printf("******1.PLAY******\n");
	printf("******0.EXIT******\n");
	printf("******************\n");
	printf("猜对就可以取消关机\n");
	printf("若退出立即进行关机\n");
}

void game()
{
	printf("进入游戏，请输入1-100之间的数字：>");
	int guess, secret;
	secret = rand() % 100 + 1;
	//生成1-100之间的随机数
	while (1)
	{
		
		scanf("%d", &guess);
		if (guess > secret)
		{
			printf("猜大了\n请重新输入：>");
		}
		else if (guess < secret)
		{
			printf("猜小了\n请重新输入：>");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			system("shutdown -a");
			break;
		}
	}
}

int main()
{
	int input = 0;
	system("shutdown -s -t 60");
	menu();
	srand((unsigned int)time(NULL));
	//整个猜数字过程中，只设置一次时间戳起点
	do
	{	
		printf("请输入（0/1）：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏,3s后关机\n");
			system("shutdown -a");
			system("shutdown -s -t 3");
			Sleep(3000);
			
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}