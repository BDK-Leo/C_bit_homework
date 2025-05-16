#define _CRT_SECURE_NO_WARNINGS 1
//指针（一）

//练习题1：写一个函数，可以逆序一个字符串的内容。
//(一)
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
//	while (gets_s(arr,10000))//gets可以读取字符串包含空格,scanf则不包含空格
//	{
//		Func(arr);
//	}
//
//	return 0;
//}

//(二)
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


//练习题2：字符串左旋
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//#include<stdio.h>
//#include<string.h>
//void Func(char* arr,int n)
//{
//	size_t len = strlen(arr);
//	int time = n % len;
//	int i = 0;//次数
//	int j = 0;//下标
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


//练习题3：模拟实现库函数strlen
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


//练习题4：调整奇数偶数顺序
//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
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