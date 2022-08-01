#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
			else if (i == row - 1 && j == col - 1)
				break;
			else if (j == col - 1)
			{
				printf("\n");
				for (j = 0; j < col; j++)
				{
					printf("---");
					if (j < col - 1)
						printf("|");
				}
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	printf("玩家下棋>\n");
	while (1)
	{
		printf("请输入棋子坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= row)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("空格被占用.\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	printf("电脑下棋>\n");
	while (1)
	{
		printf("请输入棋子坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= row)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'o';
				break;
			}
			else
				printf("空格被占用.\n");
		}
	}
}

char Is_win(char board[ROW][COL], int row, int col)
{
	int i, j;
	int Isfull;
	int player = 0;
	int computer = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == '*')
				player++;
			else if (board[i][j] == 'o')
				computer++;
		}
		if (player == 3)
		{
			return board[i+1][j-1];
		}
		else if (computer == 3)
		{
			return board[i+1][j-1];
		}
		player = 0;
		computer = 0;
	}

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[j][i] == '*')
				player++;
			else if (board[j][i] == 'o')
				computer++;
		}
		if (player == 3)
		{
			player = 0;
			return board[j-1][i+1];
		}
		else if (computer == 3)
		{
			computer = 0;
			return board[j-1][j+1];
		}
		player = 0;
		computer = 0;
	}
	Isfull = Is_full(board, ROW, COL);
	if (Isfull == 1)
		return 'Q';
	else if (Isfull == 0)
		return 'C';
}

int  Is_full(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col;j++)
		if (board[i][j] == ' ')
			return 0;
	}
	return 1;
}