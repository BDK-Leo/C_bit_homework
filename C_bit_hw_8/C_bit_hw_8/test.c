#define _CRT_SECURE_NO_WARNINGS 1
//���������

//��ϰ��1����һ�����������У�ֻ��һ�����ֳ���һ�Σ��������鶼�ǳɶԳ��ֵģ����ҳ��Ǹ�ֻ����һ�ε����֡�
//���磺�������У�1 2 3 4 5 1 2 3 4��ֻ��5����һ�Σ��������ֶ�����2�Σ��ҳ�5

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


//��ϰ��2������������������������ʱ����
//����������ʱ������������������������
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
//	printf("������%d %d\n",a,b);
//	return 0;
//}


//��ϰ��3��ͳ�ƶ�������1�ĸ���
//дһ���������ز����������� 1 �ĸ�����
//���磺 15    0000 1111    4 �� 1
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


//��ϰ��4����ӡ���������Ƶ�����λ��ż��λ
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//#include<stdio.h>
//void Func(int n)
//{
//	for (int i = 30;i >= 0;i -= 2)//����λ
//	{
//		printf("%d ",(n>>i)&1);
//	}
//	printf("\n");
//	for (int i = 31;i >= 1;i -= 2)//ż��λ
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


//��ϰ��5�����������������в�ͬλ�ĸ���
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :1999 2299
//������� :7
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