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

int cmp_char(const void* p1, const void* p2)
{
	return strcmp(*(char**)p1, *(char**)p2);
}

void Print_arr(char* arr[], size_t sz)
{
	for (int i = 0;i < sz;i++)
	{
		printf("%s ",arr[i]);
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

void test03()
{
	char* arr[4] = {"ccc","ddd","aaa","eee"};
	size_t sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_char);
	Print_arr(arr, sz);
}

int main()
{
	//test01();//整型
	//test02();//浮点型
	test03();//字符型
	return 0;
}

////结构体类型
//typedef struct Stu
//{
//	char name[30];
//	int age;
//}Stu;
//
////年龄
//int cmp_age(const void* p1, const void* p2)
//{
//	return ((Stu*)p1)->age - ((Stu*)p2)->age;
//}
//
//void print_arr(Stu* arr, size_t sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s: %d\n", arr[i].name,arr[i].age);
//	}
//}
//
//void test04()
//{
//	Stu arr[] = { {"zhangsan",20},{"lisi",28},{"wangwu",18} };
//	size_t sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),cmp_age);
//	print_arr(arr, sz);
//}

//int main()
//{
//	test04();
//	return 0;
//}


//题二：qsort模拟实现
//模仿qsort的功能实现一个通用的冒泡排序
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<assert.h>
//
//struct Stu
//{
//    char name[20];
//    int age;
//};
//
////arr打印函数
//void arr_print(int arr[], int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//
////str打印函数
//void str_print(char* str[], int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%s ", str[i]);
//    }
//    printf("\n");
//}
//
///*结构体打印函数*/
//
//void stu_print(struct Stu s[], int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("name = %s,age = %d\n", s[i].name, s[i].age);
//    }
//    printf("\n");
//}
//
//
///*整数比较函数指针*/
//int int_cmp(const void* e1, const void* e2)
//{
//    assert(e1 && e2);
//    return *(int*)e1 - *(int*)e2;
//}
//
///*字符串比较函数指针*/
//int str_cmp(const void* e1, const void* e2)
//{
//    assert(e1 && e2);
//    return strcmp(*(char**)e1, *(char**)e2);
//}
//
///*结构体姓名比较函数*/
//int cmp_stuname(const void* e1, const void* e2)
//{
//    assert(e1 && e2);
//    return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
///*结构体年龄比较函数*/
//int cmp_stuage(const void* e1, const void* e2)
//{
//    assert(e1 && e2);
//    return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//void swap(char* p1, char* p2, int size)
//{
//    assert(p1 && p2);
//    int i = 0;
//    for (i = 0; i < size; i++)//必须将一个元素的所有字节循环比较完，才算将这个元素比较完了
//    {
//        char tmp = *p1;
//        *p1 = *p2;
//        *p2 = tmp;
//        p1++;
//        p2++;
//    }
//}
//void bubble_sort(void* arr, int sz, int size, int(*cmp)(const void* e1, const void* e2))
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < sz - 1; i++)
//    {
//        for (j = 0; j < sz - i - 1; j++)
//        {
//            if (cmp((char*)arr + j * size, (char*)arr + (j + 1) * size) > 0)
//            {
//                swap((char*)arr + j * size, (char*)arr + (j + 1) * size, size);
//            }
//        }
//    }
//}
//int main()
//{
//    int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//    char* str[5] = { "zzz", "ddd", "aaa", "eee", "bbb" };
//    struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 15 }, { "wangwu", 5 } };
//
//    int sz1 = sizeof(arr) / sizeof(arr[0]);
//    int sz2 = sizeof(str) / sizeof(str[0]);
//    int sz3 = sizeof(s) / sizeof(s[0]);
//
//    bubble_sort(arr, sz1, sizeof(arr[0]), int_cmp);
//    arr_print(arr, sz1);
//
//    bubble_sort(str, sz2, sizeof(str[0]), str_cmp);
//    str_print(str, sz2);
//
//    printf("结构体按姓名排序:\n");
//    bubble_sort(s, sz3, sizeof(s[0]), cmp_stuname);
//    stu_print(s, sz3);
//
//    printf("结构体按年龄排序:\n");
//    bubble_sort(s, sz3, sizeof(s[0]), cmp_stuage);
//    stu_print(s, sz3);
//
//
//    //system("pause");
//    return 0;
//}

