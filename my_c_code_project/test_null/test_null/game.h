#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char Is_win(char board[ROW][COL], int row, int col);
int  Is_full(char board[ROW][COL], int row, int col);