#define _CRT_SECURE_NO_WARNINGS 1
//函数递归

//练习题1：计算斐波那契数
//递归和非递归分别实现求第n个斐波那契数
//例如：
//输入：5  输出：5
//输入：10， 输出：55
//输入：2， 输出：1

//递归：
//#include<stdio.h>
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = Fib(n);
//	printf("%d\n",ret);
//	return 0;
//}

//非递归
//#include<stdio.h>
//void Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	printf("%d\n",c);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	Fib(n);
//	return 0;
//}


//练习题2：递归实现n的k次方
//编写一个函数实现n的k次方，使用递归实现。
//#include<stdio.h>
//int Exp(int n,int k)
//{
//	if (k == 1)
//	{
//		return n;
//	}
//	return n * Exp(n,k-1);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d",&n,&k);
//	int ret = Exp(n,k);
//	printf("%d\n",ret);
//	return 0;
//}


//练习题3：计算一个数的每位之和（递归实现）
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
//#include<stdio.h>
//int DigitSum(int n)
//{
//	int i = 0;
//	if (n < 10)
//	{
//		return n;
//	}
//	else
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = DigitSum(n);
//	printf("%d\n",ret);
//	return 0;
//}


//练习题4:求阶乘
//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

//递归
//#include<stdio.h>
//int Fact(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	return n * Fact(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fact(n);
//	printf("%d\n",ret);
//	return 0;
//}

//非递归
//#include<stdio.h>
//void Fact(int n)
//{
//	int ret = 1;
//	if (n >= 1)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		printf("%d\n",ret);
//	}
//	else if (n == 0)
//	{
//		printf("%d\n",ret);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	Fact(n);
//	return 0;
//}


//练习题5：打印一个数的每一位
//递归方式实现打印一个整数的每一位
#include<stdio.h>
void Fun(int n)
{
	if (n > 9)
	{
		Fun(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	Fun(n);
	return 0;
}