#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//while (scanf() != EOF)


//算数操作符

//计算带余除法
//给定两个整数a和b，计算a除以b的整数商和余数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	int x = a / b;
//	int y = a % b;
//	printf("%d %d\n",x,y);
//	return 0;
//}

//输入一个整数，若大于等于140，则输出“Genius!”
//int main()
//{
//	int IQ = 0;
//	scanf("%d",&IQ);
//	if (IQ >= 140)
//	{
//		printf("Genius!\n");
//	}
//	else
//		printf("输入无效！");
//	return 0;
//}

//判断两个数的大小
//int main()
//{
//	int n = 0;
//	int m = 0;
//	while (scanf("%d %d", &n,&m) != EOF)
//	{
//		if (n == m)
//		{
//			printf("%d = %d\n",n,m);
//		}
//		else if (n < m)
//		{
//			printf("%d < %d\n",n,m);
//		}
//		else if (n > m)
//		{
//			printf("%d > %d\n",n,m);
//		}
//	}
//	return 0;
//}

//判断M是否可以被5整除，是输出YES,否输出NO
//int main()
//{
//	int M = 0;
//	scanf("%d",&M);
//	if (M % 5 == 0)
//	{
//		printf("YES\n");
//	}
//	else
//		printf("NO\n");
//	return 0;
//}

//多组输入，一个整数（1~100，表示线段长度，即“*”的数量。
//针对每行输入，输出占一行，用“*”组成的对应长度的线段。
//int main()
//{
//	int i = 0;
//	int n = 0;
//	while (scanf("%d",&n) != EOF)
//	{
//		for (i = 0;i < n;i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}