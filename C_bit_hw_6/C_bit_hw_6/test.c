#define _CRT_SECURE_NO_WARNINGS 1

//�����ϰ��ɨ����Ϸ��

//��ϰ��1������ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ�����ʵ�֣���
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


//��ϰ��2����ӡ����
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


//��ϰ��3����ӡˮ�ɻ���
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
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


//��ϰ��4���������
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
//#include<stdio.h>
//(һ)
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

//(��)

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
//	printf("%d\n", Func(n, m));//n���� m����
//	return 0;
//}