#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include"game.h"

void game()
{
	//����׵���Ϣ
	//1�����úõ��׵���Ϣ
	//2���Ų�����׵���Ϣ
    char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ʾ����
	DisplayBoard(show, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//������
	SetMine(mine,ROW,COL);
	DisplayBoard(mine, ROW, COL);
	FindMine(mine,show,ROW,COL);
	//DisplayBoard(show, ROW, COL);
}

void menu()
{
	printf("***************************\n");
	printf("**** 1��play   0��exit ****\n");
	printf("***************************\n");
}

void test()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ \n");
			break;
		default:
			printf("����������������룺\n");
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}