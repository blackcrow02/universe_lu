#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"

void mean()
{
	printf("                            \n");
	printf("     1. ��ʼ��Ϸ              \n");
	printf("      0.�˳���Ϸ              \n");
	printf("                            \n");
	printf("                            \n");
	printf("                            \n");

}
void game()
{
	//������
	char mind[ROWS][COLS] = {0};
	//�Ų��׵���Ϣ
	char show[ROWS][COLS] = {0};
	//��ʼ��
	b(mind, ROWS, COLS, '0');
	b(show, ROWS, COLS, '*');
	//��ӡ����
	c(mind, ROW, COL);
	//������
	mine(mind, ROW, COL);
	c(mind, ROW, COL);
	//����
	find(mind, show, ROW, COL);
}

void text()
{
	int a = 0;
	srand((unsigned int)time(NULL));
	do
	{
		mean(); 
		printf("��ѡ��\n");
		scanf_s("%d", &a);
		switch (a)
		{
		case 1:
			game();
			printf("");
			break;
		case 0:
			printf("�˳�");
			break;
		default:
			printf("ѡ���������ѡ\n");
			break;

		}
	} while (a);
}


int main()
{
	text();
	return 0;
}