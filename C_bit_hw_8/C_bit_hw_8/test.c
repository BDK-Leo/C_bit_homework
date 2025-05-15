#define _CRT_SECURE_NO_WARNINGS 1
//操作符详解

//练习题1：在一个整型数组中，只有一个数字出现一次，其他数组都是成对出现的，请找出那个只出现一次的数字。
//例如：数组中有：1 2 3 4 5 1 2 3 4，只有5出现一次，其他数字都出现2次，找出5

//#include<stdio.h>
//int Func(int arr[],int sz)
//{
//	int ret = 0;
//	for (int i = 0;i < sz;i++)
//	{
//		ret ^= arr[i];
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,1,2,3,4};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = Func(arr,sz);
//	printf("%d\n",ret);
//	return 0;
//}


//练习题2：交换两个变量（不创建临时变量
//不允许创建临时变量，交换两个整数的内容
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：%d %d\n",a,b);
//	return 0;
//}


//练习题3：统计二进制中1的个数
//写一个函数返回参数二进制中 1 的个数。
//比如： 15    0000 1111    4 个 1
//#include<stdio.h>
//int count_n(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = count_n(n);
//	printf("%d\n", r);
//	return 0;
//}


//练习题4：打印整数二进制的奇数位和偶数位
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//#include<stdio.h>
//void Func(int n)
//{
//	for (int i = 30;i >= 0;i -= 2)//奇数位
//	{
//		printf("%d ",(n>>i)&1);
//	}
//	printf("\n");
//	for (int i = 31;i >= 1;i -= 2)//偶数位
//	{
//		printf("%d ",(n>>i)&1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//    Func(n);
//	return 0;
//}


//练习题5：求两个数二进制中不同位的个数
//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :1999 2299
//输出例子 :7
#include<stdio.h>
void Func(int n, int m)
{
	int i = n ^ m;
	int count = 0;
	while (i)
	{
		i = i & (i - 1);
		count++;
	}
	printf("%d\n", count);
}


int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	Func(n, m);
	return 0;
}