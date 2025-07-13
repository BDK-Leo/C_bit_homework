#define _CRT_SECURE_NO_WARNINGS 1
//指针（四）

//题一：qsort使用练习
//练习使用库函数，qsort排序各种类型的数据
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int cmp_int(const void* p1,const void* p2 )
//{
//	return *(int*)p1 - *(int*)p2;
//}

//int cmp_double(const void* p1, const void* p2)
//{
//	return *(double*)p1 > *(double*)p2 ? 1 : -1;
//}

void Print_arr(char* arr,size_t sz)
{
	for (int i = 0;i < sz;i++)
	{
		printf("%d ",arr[i]);
	}
}

//void test01()
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
//	size_t sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]), cmp_int);
//	Print_arr(arr,sz);
//}

//void test02()
//{
//	double arr[] = { 1.1,3.3,5.5,7.7,9.9,2.2,4.4,1.1,8.8,6.6 };
//	size_t sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_double);
//	Print_arr(arr, sz);
//}

int cmp_char(const void* p1,const void* p2)
{
	return *(char*)p1 - *(char*)p2;
}

void test03()
{
	char arr[] = "ABCDE";
	size_t len = strlen(arr);
	qsort(arr, len, sizeof(arr[0]), cmp_char);
	Print_arr(arr, len);
}

int main()
{
	//test01();//整型
	//test02();//浮点型
	test03();//字符型
	return 0;
}


//题二：qsort模拟实现
//模仿qsort的功能实现一个通用的冒泡排序

