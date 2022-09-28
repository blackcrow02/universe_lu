#define _CRT_SECURE_NO_WARNIN
#include "game.h"
int _count(char mind[ROWS][COLS], int x, int y)
{
	return mind[x + 1][y] +
		mind[x + 1][y + 1] +
		mind[x + 1][y - 1] +
		mind[x][y - 1] +
		mind[x][y + 1] +
		mind[x][y + 1] +
		mind[x + 1][y + 1] +
		mind[x - 1][y + 1] - 8 * '0';
	
}
void b(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}

}
void c(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <=col; i++)
	{
		printf("%d ", i);
	}
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
void mine(char board[ROWS][COLS], int row, int col)
{
	int count = g;
	srand((unsigned int)time(NULL));
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
void find(char mind[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-g)
	{
		printf("输入坐标\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mind[x][y] == '1')//坐标合法，踩雷
			{
				printf("gggggggggg\n");
				c(mind, ROW, COL);
				break;

			}
			else//不是雷
			{
				//计算雷的数量
				int count = _count(mind,x,y);
				show[x][y] = count + '0';
				c(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("重新输入\n");
		}

	}
	if (win == row * col - g)
	{
		printf("成功\n");
	}
}