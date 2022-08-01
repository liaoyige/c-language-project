#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	for (i = 0; i <= row; i++)
		printf("%d ", i);
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}

}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	//srand((unsigned int)time(NULL));
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
		    count--;
		}
	}
}

int get_my_count(char mine[ROWS][COLS], int x, int y)
{
	int i, j;
	int count = 0;
	for (i = x - 1; i <= x + 1 ; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
				count++;
		}
	}
	//if (count == 0)
	//{
	//	for (i = x - 1; i <= x + 1; i++)
	//	{
	//		for (j = y - 1; j <= y + 1; j++)
	//		{
	//			get_my_count(mine, x, y);
	//		}
	//	}
	//}
	return count;
}

//void Explore(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
//{
//	int i, j;
//	for (i = x - 1; i <= x + 1; i++)
//	{
//		for (j = y - 1; j <= y + 1; j++)
//		{
//			int num = get_my_count(mine, i, j);
//			if (num == 0)
//			{
//				show[i][j] = ' ';
//				Explore(mine, show, i, j);
//			}
//			else
//				show[i][j] = '0' + num;
//		}
//	}
//}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("�������Ų��׵����꣺>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����Ϸ�
			//1������
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը���ˣ�\n");
				DisplayBoard(mine, row, col);
				break;
			}
			//2��������
			else
			{
				//����x��y��Χ�м����ס�
				int count = get_my_count(mine, x, y);
				//if (count != 0)
				//{
					show[x][y] = count + '0';
					DisplayBoard(show, row, col);
					win++;
				//}
				//else
				//{
				//	show[x][y] = ' ';
				//	Explore(mine, show, x, y);
				//	DisplayBoard(show, row, col);
				//}
			}
		}
		else
			printf("��������Ƿ�������������!\n");
	}
	if (win == row*col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ���\n");
		DisplayBoard(mine, row, col);
	}
}