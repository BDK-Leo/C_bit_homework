#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//while (scanf("%d %d %d", &a, &b, &c) != EOF)


//if��for��switch����
//��ӡ1~100֮������3�ı���
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

//�������������Ӵ�С���
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

//�ж�a,b,c�ܷ񹹳������Σ���Ϊ�������������ӡ"Isosceles triangle!"����Ϊ�ȱ����������ӡ"Equilateral triangle!"
//�������������ӡ"Ordinary triangle!",��֮���ӡ"Not a triangle!"
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
//				printf("�ȱ�������\n");
//			}
//			else if ((a == b) || (a == c) || (b == c))
//			{
//				printf("����������\n");
//			}
//			else
//				printf("����������\n");
//		}
//		else
//		{
//			printf("Not a triangle!");
//		}
//	}
//	return 0;
//}

//�������
//���� 1/1 - 1/2 + 1/3 - 1/4 + 1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
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

//��д������һ�� 1 �� 100 �����������г��ֶ��ٸ�����9
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

//��ӡ1000�굽2000��֮�������
//��������������N�ܹ���4���������Ҳ��ܱ�100��������������
//���ߣ�N�ܱ�400������Ҳ������
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

//��10�����������ֵ
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

//a�����
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

//����Ļ�����9 * 9�˷��ھ���
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

//��ӡ100~200֮�������
//forѭ��Ƕ��
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

//���������������������������Լ��
//���磺
//���룺20 40
//�����20
//���ӣ�18��24�����Լ��
//��һ�Σ�a = 18  b = 24  c = a % b = 18 % 24 = 18
//ѭ���У�a = 24   b = 18
//�ڶ��Σ�a = 24   b = 18  c = a % b = 24 % 18 = 6
//ѭ���У�a = 18   b = 6
//�����Σ�a = 18   b = 6   c = a % b = 18 % 6 = 0
//ѭ������
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