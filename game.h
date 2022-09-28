
#define _CRT_SECURE_NO_WARNINGS
#define ROW 9
#define COL 9
#define  ROWS ROW+2
#define  COLS COL+2
#include <stdio.h>
#define  g 80
#include <stdlib.h>
#include<time.h>

void b(char board[ROWS][COLS], int rows, int cols, char set);
void  c(char board[ROWS][COLS], int row, int col);
void mine(char board[ROWS][COLS], int row, int col);
void find(char mind[ROWS][COLS], char show[ROWS][COLS], int row,int col);