#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void menu()
//��Ϸ����ʱ�Ľ���
{
	printf("���ѽ����������Ϸ\n");
	printf("******************\n");
	printf("******1.PLAY******\n");
	printf("******0.EXIT******\n");
	printf("******************\n");
	printf("�¶ԾͿ���ȡ���ػ�\n");
	printf("���˳��������йػ�\n");
}

void game()
{
	printf("������Ϸ��������1-100֮������֣�>");
	int guess, secret;
	secret = rand() % 100 + 1;
	//����1-100֮��������
	while (1)
	{
		
		scanf("%d", &guess);
		if (guess > secret)
		{
			printf("�´���\n���������룺>");
		}
		else if (guess < secret)
		{
			printf("��С��\n���������룺>");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
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
	//���������ֹ����У�ֻ����һ��ʱ������
	do
	{	
		printf("�����루0/1����>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ,3s��ػ�\n");
			system("shutdown -a");
			system("shutdown -s -t 3");
			Sleep(3000);
			
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}