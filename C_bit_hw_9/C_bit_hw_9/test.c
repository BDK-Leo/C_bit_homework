#define _CRT_SECURE_NO_WARNINGS 1
//ָ�루һ��

//��ϰ��1��дһ����������������һ���ַ��������ݡ�
//(һ)
//#include<stdio.h>
//#include<string.h>
//void Func(char* arr)
//{
//	size_t len = strlen(arr);
//	char* pc = arr + len - 1;
//	while (pc >= arr)
//	{
//		printf("%c", *pc);
//		pc--;
//	}
//}
//
//int main()
//{
//	char arr[10000] = { 0 };
//	while (gets_s(arr,10000))//gets���Զ�ȡ�ַ��������ո�,scanf�򲻰����ո�
//	{
//		Func(arr);
//	}
//
//	return 0;
//}

//(��)
//#include<stdio.h>
//#include<string.h>
//void Reverse(char* str)
//{
//	size_t len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char str[10000] = { 0 };
//	while (gets_s(str,10000))
//	{
//		Reverse(str);
//		printf("%s\n",str);
//	}
//	return 0;
//}


//��ϰ��2���ַ�������
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//#include<stdio.h>
//#include<string.h>
//void Func(char* arr,int n)
//{
//	size_t len = strlen(arr);
//	int time = n % len;
//	int i = 0;//����
//	int j = 0;//�±�
//	for (i = 0;i < time;i++)
//	{
//		char tmp = arr[0];
//		for (j = 0;j < len - 1;j++)
//		{
//			arr[j] = arr[j+1];
//		}
//		arr[j] = tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcd";
//	int n = 0;
//	scanf("%d",&n);
//	Func(arr,n);
//	printf("%s\n",arr);
//	return 0;
//}


//��ϰ��3��ģ��ʵ�ֿ⺯��strlen
//#include<stdio.h>
//size_t my_strlen(char* pc)
//{
//	size_t count = 0;
//	while (*pc)
//	{
//		count++;
//		pc++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcedf";
//	printf("%zu\n", my_strlen(arr));
//	return 0;
//}


//��ϰ��4����������ż��˳��
//��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
#include<stdio.h>
void Func(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while (left < right && arr[left] % 2 != 0)
		{
			left++;
		}
		while (left < right && arr[right] % 2 == 0)
		{
			right--;
		}
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
	}
}

void Print_arr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Func(arr, sz);
	Print_arr(arr, sz);
	return 0;
}