#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"

void game()
{
	char show[ROWS][COLS] = {0};
	char mine[ROWS][COLS] = {0};
	InitBoard(show, ROWS, COLS, '*');
	InitBoard(mine, ROWS, COLS, '0');
	ShowBoard(show, ROW, COL);
	//ShowBoard(mine, ROW, COL);
	Set_Boom(mine, ROW, COL);
	ShowBoard(mine, ROW, COL);
	DisplayShow(show,mine, ROW, COL);
}


void menu()
{
	printf("***********************\n");
	printf("****1、play 0、exit****\n");
	printf("***********************\n");
}

void test()
{
	int input;
	menu();
	srand((unsigned int)time(NULL));
	do
	{
		printf("请输入：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入！\n");
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}