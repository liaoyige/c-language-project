#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include"game.h"

void game()
{
	//存放雷的信息
	//1、布置好的雷的信息
	//2、排查出的雷的信息
    char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//显示棋盘
	DisplayBoard(show, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//布置雷
	SetMine(mine,ROW,COL);
	DisplayBoard(mine, ROW, COL);
	FindMine(mine,show,ROW,COL);
	//DisplayBoard(show, ROW, COL);
}

void menu()
{
	printf("***************************\n");
	printf("**** 1、play   0、exit ****\n");
	printf("***************************\n");
}

void test()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏 \n");
			break;
		default:
			printf("输入错误，请重新输入：\n");
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}