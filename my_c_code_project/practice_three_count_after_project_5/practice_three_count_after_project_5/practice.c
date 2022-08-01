#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
#include<stdio.h>

//游戏的整个算法实现
void game()
{
	char count ;
	char board[ROW][COL] = {0};  //存放玩家走出的棋盘信息
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//先让玩家下棋
		PlayMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否胜利
		count = Win_Lose(board, ROW, COL);
		if (count != 'C')
			break;
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		count = Win_Lose(board, ROW, COL);
		if (count != 'C')
			break;
	}
	if (count == '*')
		printf("玩家胜利。\n");
	else if (count == 'o')
		printf("电脑胜利。\n");
	else if (count == 'Q')
		printf("平局。\n");
}

void menu()
{
	printf("*********************\n");
	printf("***1.play   0.exit***\n");
	printf("*********************\n");
}

void test()
{
	int input;
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
			printf("退出游戏\n");		
			break;
		default:
			printf("选择错误，请重新选择\n"); 
			break;
		}
	} 
	while(input);
}

int main()
{
	test();
	return 0;
}