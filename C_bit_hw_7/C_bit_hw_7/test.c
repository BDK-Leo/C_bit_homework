#define _CRT_SECURE_NO_WARNINGS 1
//�����ݹ�

//��ϰ��1������쳲�������
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//���磺
//���룺5  �����5
//���룺10�� �����55
//���룺2�� �����1

//�ݹ飺
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

//�ǵݹ�
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


//��ϰ��2���ݹ�ʵ��n��k�η�
//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
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


//��ϰ��3������һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19
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


//��ϰ��4:��׳�
//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩

//�ݹ�
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

//�ǵݹ�
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


//��ϰ��5����ӡһ������ÿһλ
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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