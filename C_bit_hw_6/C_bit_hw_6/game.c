#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char Board[ROWS][COLS], int r, int c, char set)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			Board[i][j] = set;
		}
	}
}

void SetBomb(char mine[ROWS][COLS], int r, int c)
{
	int count = Bomb;
	while (count)
	{
		int x = rand() % r + 1;
		int y = rand() % c + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

int GetBomb(char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			if (mine[x + i][y + j] == '1')
			{
				count++;
			}
		}
	}
	return count;
}

void FindBomb(char mine[ROWS][COLS], char show[ROWS][COLS], int r, int c)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < r * c - Bomb)
	{
		printf("ÇëÊäÈë×ø±ê£º");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= r && y >= 1 && y <= c)
		{
			if (mine[x][y] == '1')
			{
				printf("ºÜÒÅº¶£¬Äã´¥À×ÁË£¡\n");
				PrintBoard(mine, ROW, COL);
				break;
			}
			else
			{
				if (show[x][y] == '*')
				{
					int ret = GetBomb(mine, x, y);
					show[x][y] = ret + '0';
					PrintBoard(show, ROW, COL);
					win++;
				}
				else
				{
					printf("×ø±êÒÑÏÔÊ¾£¬Çë¼ÌÐøÊäÈë\n");
				}
			}
		}
		else
		{
			printf("×ø±ê´íÎó£¡ÇëÖØÐÂÊäÈë£¡\n");
		}
	}
	if (win == r * c - Bomb)
	{
		printf("¹§Ï²Äã£¡É¨À×³É¹¦£¡\n");
		PrintBoard(mine, ROW, COL);
	}
}

void PrintBoard(char Board[ROWS][COLS], int r, int c)
{
	printf("------ É¨ À× ------\n");
	int i = 0;
	for (i = 0; i <= r; i++)
	{
		if (i > 9)
		{
			printf("%d ", i);
		}
		else
		{
			printf("%d  ", i);
		}
	}
	printf("\n");
	for (i = 1; i <= r; i++)
	{
		int j = 0;
		if (i > 9)
		{
			printf("%d ", i);
		}
		else
		{
			printf("%d  ", i);
		}
		for (j = 1; j <= c; j++)
		{
			printf("%c  ", Board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}