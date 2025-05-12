#define _CRT_SECURE_NO_WARNINGS 1
//函数传参等

//练习题1：二分查找-函数实现
//写一个二分查找函数
//功能：在一个升序数组中查找指定的数值，找到了就返回下标，找不到就返回 -1
//int bin_search(int arr[], int left, int right, int key)
// arr 是查找的数组
//left 数组的左下标
//right 数组的右下标
//key 要查找的数字
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


//练习题2：乘法口诀表
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
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


//练习题3：函数判断闰年
//实现函数判断year是不是润年。
//#include<stdio.h>
//void leap_year(int year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//	{
//		printf("是闰年\n");
//	}
//	else
//		printf("不是闰年\n");
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d",&year);
//	leap_year(year);
//	return 0;
//}


//练习题4：函数判断素数
//实现一个函数is_prime，判断一个数是不是素数。
//利用上面实现的is_prime函数，打印100到200之间的素数。
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

//练习题5：使用函数实现数组操作
//创建一个整形数组，完成对数组的操作
//1、实现函数init() 初始化数组为全0
//2、实现print()  打印数组的每个元素
//3、实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。

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

//2版
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



