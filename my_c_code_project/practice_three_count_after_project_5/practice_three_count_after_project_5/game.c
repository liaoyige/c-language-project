#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"

//�ڵ��Ե�ʱ��ǵô�ϵ㣬��Ȼ�޷����ԣ�
//Fn+F10������̵ĵ��� ��Fn+F11���������ĵ��ԡ�

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i,j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if     (i == row - 1 && j== col - 1)
				break;
			else if (j == col - 1)
			{
				printf("\n");
				for (j = 0; j < col; j++)
				{
					printf("---");
					if (j < col-1)
					printf("|");
				}
			}	
			else 
				printf("|");
		}
		printf("\n");
		//��ӡһ������
		//if (i == row-1)
		//	break;
		//printf("---|---|---\n");
		//��ӡ�ָ���
	}
}

void PlayMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	printf("������壺>\n");
	
	while (1)
	{
		printf("���������꣺>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ��\n");
			}
		}
		else
			printf("����Ƿ������������룡\n");
		}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x,y;
	printf("�������壺>\n");
	while (1)
	{
		printf("���������꣺");
		scanf("%d %d", &x, &y);
		if (x <= row && y <= col && x>=1 && y>=1)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'o';
				break;
			}
			else
				printf("�ø�㱻ռ�ã�����������\n");
		}
		else
			printf("����Ƿ������������룡\n");
	}
}

char Win_Lose(char board[ROW][COL],int row,int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
		else if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}   //�����и����ʣ�if������ܷ�����������ȷ��ţ�
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	else if (board[0][2] == board[1][1] && board[2][0] == board[1][1] && board[1][1] != ' ')
		return board[1][1];
	else if (Isfull(board, ROW, COL) == 1)
		return 'Q';
	else
		return 'C';
}

int Isfull(char board[ROW][COL], int row, int col)
{
	int i, j;
	int count = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				count++;
		}
	}
	if (count == 0)
		return 1;
	else return 0;
}