#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"

void game()
{
	char str;
	char board[ROW][COL] = { 0 };
	InitBoard	(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	//玩家下棋
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否获胜。
		str = Is_win(board,ROW,COL);
		if (str != 'C')
			break;
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		str = Is_win(board, ROW, COL);
		if (str != 'C')
			break;
	}
	if (str == '*')
		printf("玩家获胜！\n");
	else if (str == 'o')
		printf("电脑获胜！\n");
	else if (str == 'Q')
		printf("平局。\n");
}

void menu()
{
	printf("************************\n");
	printf("***1、play    0、exit***\n");
	printf("************************\n");
}

void test()
{
	int input;
	menu();
	printf("请输入数字：>");
	do
	{
		scanf("%d", &input);
		if (input == 1)
		{
			game();
			break;
		}
		else if (input != 0)
			printf("输入无效，请重新输入：");
	} while (input);
}

int main()
{
	test();
	return 0;
}