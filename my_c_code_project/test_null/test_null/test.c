#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"

void game()
{
	char str;
	char board[ROW][COL] = { 0 };
	InitBoard	(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	//�������
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ��ʤ��
		str = Is_win(board,ROW,COL);
		if (str != 'C')
			break;
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		str = Is_win(board, ROW, COL);
		if (str != 'C')
			break;
	}
	if (str == '*')
		printf("��һ�ʤ��\n");
	else if (str == 'o')
		printf("���Ի�ʤ��\n");
	else if (str == 'Q')
		printf("ƽ�֡�\n");
}

void menu()
{
	printf("************************\n");
	printf("***1��play    0��exit***\n");
	printf("************************\n");
}

void test()
{
	int input;
	menu();
	printf("���������֣�>");
	do
	{
		scanf("%d", &input);
		if (input == 1)
		{
			game();
			break;
		}
		else if (input != 0)
			printf("������Ч�����������룺");
	} while (input);
}

int main()
{
	test();
	return 0;
}