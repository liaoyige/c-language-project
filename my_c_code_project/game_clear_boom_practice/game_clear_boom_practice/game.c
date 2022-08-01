#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"

void InitBoard(char Board[ROWS][COLS], int row, int col,char set)
{
	int i, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			Board[i][j] = set;
		}
	}
}

void ShowBoard(char Board[ROWS][COLS], int row, int col)
{
	int i, j = 0;
	for (i = 0; i <= row; i++)
		printf("%d ", i);
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d",i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c", Board[i][j]);
		}
		printf("\n");
	}
}

void Set_Boom(char Board[ROWS][COLS], int row, int col)
{
	int count = EASY_MODE;
	while (count)
	{
	   int x = rand() % row + 1;
	   int y = rand() % col + 1;

	   if (Board[x][y] == '0')
	   {
		   Board[x][y] = '1';
		   count--;
	   }
	}
}

int get_count(char Board[ROWS][COLS],int x,int y)
{
	int count=0;
	int i, j;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (Board[i][j] == '1')
				count++;
		}
	}
	return count;
}

void DisplayShow(char show[ROWS][COLS],char mine[ROWS][COLS], int row, int col)
{
	int x, y;
	int win = 0;
	while (win < row*col - EASY_MODE)
	{	
		printf("请输入坐标：");
		scanf("%d%d", &x, &y);
		int count = get_count(mine, x, y);
		if (mine[x][y] == '1')
		{
			printf("你被炸死了！\n");
			break;
		}
		else
		{
			show[x][y] = count + '0';
			ShowBoard(show, ROW, COL);
			win++;
		}
	}
}