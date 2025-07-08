#define _CRT_SECURE_NO_WARNINGS 1
//指针（三）

//题目一：找单身狗2
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。
//例如：
//有数组的元素是：1，2，3，4，5，1，2，3，4，6
//只有5和6只出现1次，要找出5和6.
//#include<stdio.h>
//
//void FindNum(int arr[],int* pNum1,int* pNum2,int len)
//{
//	int tmp = 0;
//	for (int i = 0;i < len;i++)
//	{
//		tmp ^= arr[i];//5 ^ 6
//	}
//	//算出tmp的哪一位为1，记录位置
//	int pos = 0;
//	for (int i = 0;i < 32;i++)
//	{
//		if (((tmp >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	//再次遍历数组的每个数字，看pos位置是1还是0
//	for (int i = 0;i < len;i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			*pNum1 ^= arr[i];
//		}
//		else
//		{
//			*pNum2 ^= arr[i];
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,1,2,3,4,6};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int a = 0;
//	int b = 0;
//	FindNum(arr, &a, &b,len);
//	printf("%d %d\n", a, b);
//	return 0;
//}


//题目二：获得月份天数
//输入年份和月份，计算这一年这个月有多少天。
//多组输入，一行有两个整数，分别表示年份和月份，用空格分隔。
//针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天。
#include<stdio.h>
int main()
{
	while (~scanf())
	{

	}
	return 0;
}