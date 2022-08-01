#define _CRT_SECURE_NO_WARNINGS 1

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_MODE 10

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void InitBoard(char Board[ROWS][COLS], int row, int col,char set);
void ShowBoard(char Board[ROWS][COLS], int row, int col);
void Set_Boom(char Board[ROWS][COLS], int row, int col);
//int get_count(char Board[ROWS][COLS], int x, int y);
void DisplayShow(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col);