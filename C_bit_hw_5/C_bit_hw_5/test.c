#define _CRT_SECURE_NO_WARNINGS 1
//�������ε�

//��ϰ��1�����ֲ���-����ʵ��
//дһ�����ֲ��Һ���
//���ܣ���һ�����������в���ָ������ֵ���ҵ��˾ͷ����±꣬�Ҳ����ͷ��� -1
//int bin_search(int arr[], int left, int right, int key)
// arr �ǲ��ҵ�����
//left ��������±�
//right ��������±�
//key Ҫ���ҵ�����
//#include<stdio.h>
//int bin_search(int arr[], int left, int right, int key)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] == key)
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int key = 0;
//	scanf("%d",&key);
//	int left = 0;
//	int right = sz - 1;
//	int ret = bin_search(arr,left,right,key);
//	printf("%d\n",ret);
//	return 0;
//}


//��ϰ��2���˷��ھ���
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
//#include<stdio.h>
//void Func(int n)
//{
//	for (int i = 1;i <= n;i++)
//	{
//		for (int j = 1;j <= i;j++)
//		{
//			printf("%2d*%2d=%2d ",j,i,j*i);
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


//��ϰ��3�������ж�����
//ʵ�ֺ����ж�year�ǲ������ꡣ
//#include<stdio.h>
//void leap_year(int year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//	{
//		printf("������\n");
//	}
//	else
//		printf("��������\n");
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d",&year);
//	leap_year(year);
//	return 0;
//}


//��ϰ��4�������ж�����
//ʵ��һ������is_prime���ж�һ�����ǲ���������
//��������ʵ�ֵ�is_prime��������ӡ100��200֮���������
//#include<stdio.h>
//int is_prime(int n)
//{
//    int j = 0;
//	for (j = 2;j < n;j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		int ret = is_prime(i);
//		if (ret == 1)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

//��ϰ��5��ʹ�ú���ʵ���������
//����һ���������飬��ɶ�����Ĳ���
//1��ʵ�ֺ���init() ��ʼ������Ϊȫ0
//2��ʵ��print()  ��ӡ�����ÿ��Ԫ��
//3��ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��

//#include<stdio.h>

//void init(int arr[],int sz)
//{
//	for (int i = 0;i < sz;i++)
//	{
//		arr[i] = i;
//	}
//}
//
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = {0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr,sz);
//	print(arr,sz);
//	reverse(arr,sz);
//	print(arr, sz);
//	return 0;
//}

//2��
//void Init(int arr[], int sz, int set)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = set;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	Init(arr, sz, 0);
//	Print(arr, sz);
//	return 0;
//}



