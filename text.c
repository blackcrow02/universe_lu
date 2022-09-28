#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"

void mean()
{
	printf("                            \n");
	printf("     1. 开始游戏              \n");
	printf("      0.退出游戏              \n");
	printf("                            \n");
	printf("                            \n");
	printf("                            \n");

}
void game()
{
	//布置雷
	char mind[ROWS][COLS] = {0};
	//排查雷的信息
	char show[ROWS][COLS] = {0};
	//初始化
	b(mind, ROWS, COLS, '0');
	b(show, ROWS, COLS, '*');
	//打印棋盘
	c(mind, ROW, COL);
	//布置雷
	mine(mind, ROW, COL);
	c(mind, ROW, COL);
	//找雷
	find(mind, show, ROW, COL);
}

void text()
{
	int a = 0;
	srand((unsigned int)time(NULL));
	do
	{
		mean(); 
		printf("请选择\n");
		scanf_s("%d", &a);
		switch (a)
		{
		case 1:
			game();
			printf("");
			break;
		case 0:
			printf("退出");
			break;
		default:
			printf("选择错误，请重选\n");
			break;

		}
	} while (a);
}


int main()
{
	text();
	return 0;
}