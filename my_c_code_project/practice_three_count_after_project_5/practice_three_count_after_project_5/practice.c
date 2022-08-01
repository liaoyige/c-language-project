#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
#include<stdio.h>

//��Ϸ�������㷨ʵ��
void game()
{
	char count ;
	char board[ROW][COL] = {0};  //�������߳���������Ϣ
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//�����������
		PlayMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�ʤ��
		count = Win_Lose(board, ROW, COL);
		if (count != 'C')
			break;
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		count = Win_Lose(board, ROW, COL);
		if (count != 'C')
			break;
	}
	if (count == '*')
		printf("���ʤ����\n");
	else if (count == 'o')
		printf("����ʤ����\n");
	else if (count == 'Q')
		printf("ƽ�֡�\n");
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
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{ 
		case 1: 
			game();			
			break;
		case 0: 
			printf("�˳���Ϸ\n");		
			break;
		default:
			printf("ѡ�����������ѡ��\n"); 
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