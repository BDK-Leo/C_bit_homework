#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//while (scanf("%d %d %d", &a, &b, &c) != EOF)


//if、for、switch语句等
//打印1~100之间所有3的倍数
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

//将三个整数按从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d",&a,&b,&c);
//	if (a < b)
//	{
//		int tmp = b;
//		b = a;
//		a = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = c;
//		c = a;
//		a = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = c;
//		c = b;
//		b = tmp;
//	}
//	printf("%d %d %d\n",a,b,c);
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

//分数求和
//计算 1/1 - 1/2 + 1/3 - 1/4 + 1/5 …… + 1/99 - 1/100 的值，打印出结果
//int main()
//{
//	int i = 0;
//	double n = 0;
//	int flag = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		 n += flag *(1.0 / i);
//		 flag = -flag;
//	}
//	printf("%lf\n",n);
//	return 0;
//}

//编写程序数一下 1 到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d",count);
//	return 0;
//}

//打印1000年到2000年之间的闰年
//闰年的条件：如果N能够被4整除，并且不能被100整除，则是闰年
//或者：N能被400整除，也是闰年
//int main()
//{
//	int i = 0;
//	for (i = 1000;i <= 2000;i++)
//	{
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//求10个整数中最大值
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int Max = 0;
//	
//	for (i = 0;i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	Max = arr[0];
//	for (i = 0;i < 10;i++)
//	{
//		if (Max < arr[i])
//		{
//			Max = arr[i];
//		}
//	}
//	printf("%d ",Max);
//	return 0;
//}

//a输出几
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//在屏幕上输出9 * 9乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 9;i++)
//	{
//		int j = 0;
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d * %d = %d ",j,i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//打印100~200之间的素数
//for循环嵌套
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2;j <= i - 1;j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

//给定两个数，求这两个数的最大公约数
//例如：
//输入：20 40
//输出：20
//例子：18和24的最大公约数
//第一次：a = 18  b = 24  c = a % b = 18 % 24 = 18
//循环中：a = 24   b = 18
//第二次：a = 24   b = 18  c = a % b = 24 % 18 = 6
//循环中：a = 18   b = 6
//第三次：a = 18   b = 6   c = a % b = 18 % 6 = 0
//循环结束
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d",&a,&b);
//	while (c = a%b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n",b);
//	
//	return 0;
//}