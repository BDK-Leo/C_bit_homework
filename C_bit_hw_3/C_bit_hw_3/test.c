//循环编程练习等（rand）
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//猜数字
//void menu()
//{
//	printf("-------------------\n");
//	printf("-----  1.PLAY  ----\n");
//	printf("-----  0.EXIT  ----\n");
//	printf("-------------------\n");
//}
//
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int n = 0;
//	int count = 10;
//	while (count)
//	{
//		printf("还剩余%d次机会！",count);
//		printf("猜数字：");
//		scanf("%d",&n);
//		if (n < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (n > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你！猜对了！\n");
//			break;
//		}
//		count--;
//	}
//	if (count == 0)
//	{
//		printf("很遗憾，游戏结束！\n");
//	}
//}
//
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("已退出游戏！\n");
//			break;
//		default:
//			printf("输入错误！请重新输入！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//判断a,b,c能否构成三角形，若为等腰三角形则打印"Isosceles triangle!"，若为等边三角形则打印"Equilateral triangle!"
//其余三角形则打印"Ordinary triangle!",反之则打印"Not a triangle!"
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if ((a+b>c) && (a+c>b) && (b+c>a))
//		{
//			if ((a == b) && (b == c))
//			{
//				printf("等边三角形\n");
//			}
//			else if ((a == b) || (a == c) || (b == c))
//			{
//				printf("等腰三角形\n");
//			}
//			else
//				printf("其余三角形\n");
//		}
//		else
//		{
//			printf("Not a triangle!");
//		}
//	}
//	return 0;
//}