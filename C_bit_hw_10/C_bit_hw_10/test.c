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


//题目三：字符串旋转结果
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
// 方法一：
//#include<stdio.h>
//#include<string.h>
//
//char* Func(char* src, char* find)
//{
//	char tmp[256] = { 0 };
//	strcpy(tmp, src); // AABCD
//	strcat(tmp, src); // AABCDAABCD
//	return strstr(tmp, find);
//}
//int main()
//{
//	char* s1 = "AABCD";
//	char* s2 = "BCDAA";
//	char* ret = Func(s1,s2);
//	if (ret != NULL)
//	{
//		printf("1\n");
//	}
//	else
//	{
//		printf("0\n");
//	}
//	return 0;
//}

// 方法二：
//#include<stdio.h>
//#include<string.h>
//
//int FindRound(char* str,char* find)
//{
//	size_t len = strlen(str);
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < len;i++)
//	{
//		char tmp = str[0];
//		for (j= 0;j < len - 1;j++)
//		{
//			str[j] = str[j + 1];
//		}
//		str[j] = tmp;
//		if (strcmp(str,find) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char s1[] = "AABCD";
//	char s2[] = "BCDAA";
//	int ret = FindRound(s1, s2);
//	printf("%d\n",ret);
//	return 0;
//}


//题目四：杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);
//#include<stdio.h>
//
//int FindNum(int arr[][3],int x,int y,int k)
//{
//	int i = 0;
//	int j = y - 1;
//	while (i<x && j>=0)
//	{
//		if (arr[i][j] < k)
//		{
//			i++;
//		}
//		else if (arr[i][j] > k)
//		{
//			j--;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int ret = FindNum(arr,3,3,8);
//	printf("%d\n",ret);
//	return 0;
//}


//题目五：猜凶手
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C
//C说：是D
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话
//现在请根据这些信息，写一个程序来确定到底谁是凶手
//#include<stdio.h>
//
//void FindKiller()
//{
//	char killer = 'a';
//	for (; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("凶手是：%c\n",killer);
//			return;
//		}
//	}
//}
//
//int main()
//{
//	FindKiller();
//	return 0;
//}