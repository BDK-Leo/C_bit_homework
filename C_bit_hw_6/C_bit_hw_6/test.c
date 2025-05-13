#define _CRT_SECURE_NO_WARNINGS 1

//编程练习，扫雷游戏等

//练习题1：喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。
//#include<stdio.h>
//void Coke(int money)
//{
//	int coke = money;
//	int bottle = money;
//	while (bottle > 1)
//	{
//		coke = coke + bottle / 2;
//		bottle = bottle / 2 + bottle % 2;
//	}
//	printf("%d\n",coke);
//}
//
//int main()
//{
//	int money = 0;
//	scanf("%d",&money);
//	Coke(money);
//	return 0;
//}


//练习题2：打印菱形
//#include<stdio.h>
//
//void Func(int n)
//{
//	int space = 0;
//	for (int i = 0;i < n;i++)
//	{
//		for (space = 0;space < n - 1 - i;space++)
//		{
//			printf(" ");
//		}
//		for (int a = 0;a < 2*i+1;a++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = 0;i < n - 1;i++)
//	{
//		for (space = 0;space < i + 1;space++)
//		{
//			printf(" ");
//		}
//		for (int a = 0; a < 2 * (n-1-i)-1; a++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	Func(n);
//	return 0;
//}


//练习题3：打印水仙花数
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include<stdio.h>
//#include<math.h>
//
//void Func()
//{
//	for (int i = 0;i < 100000;i++)
//	{
//		int count = 0;
//		int tmp = i;
//		while (tmp)
//		{
//			tmp /= 10;
//			count++;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10,count);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ",i);
//		}
//	}
//}
//
//int  main()
//{
//	Func();
//	return 0;
//}


//练习题4：计算求和
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//#include<stdio.h>
//(一)
//void Sum(int a)
//{
//	int i = a;
//	int sum = 0;
//	while (a <100000)
//	{
//		sum = sum + a;
//		a = a * 10 + i * 1;
//	}
//	printf("%d\n",sum);
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	Sum(a);
//	return 0;
//}

//(二)

//int Func(int n, int m)
//{
//	int sum = 0;
//	int tmp = 0;
//	for (int i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + m;
//		sum += tmp;
//	}
//	return sum;
//}
//
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	printf("%d\n", Func(n, m));//n几项 m数字
//	return 0;
//}