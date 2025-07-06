#define _CRT_SECURE_NO_WARNINGS 1
//指针（二）


//题目一：使用指针打印数组内容
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。arr是一个整形一维数组。
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	return 0;
//}


//题目二：冒泡排序
//实现一个对整形数组的冒泡排序
//#include<stdio.h>
//int main()
//{
//	int arr[10] = {1,3,5,7,9,2,4,6,8,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int flag = 1;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				flag = 0;
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}