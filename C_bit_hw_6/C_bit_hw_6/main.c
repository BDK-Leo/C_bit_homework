#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("--------------------\n");
	printf("------ 1.PLAY ------\n");
	printf("------ 0.EXIT ------\n");
	printf("--------------------\n");
}

void game()
{
	char mine[ROWS][COLS] = {0};
	char show[ROWS][COLS] = {0};

	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');

	SetBomb(mine,ROW,COL);

	//PrintBoard(mine,ROW,COL);
	PrintBoard(show,ROW,COL);

	FindBomb(mine,show,ROW,COL);


}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("已退出游戏!\n");
			break;
		default:
			printf("输入错误！请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}