#define _CRT_SECURE_NO_WARNINGS 1
//ָ�루����


//��Ŀһ��ʹ��ָ���ӡ��������
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣arr��һ������һά���顣
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


//��Ŀ����ð������
//ʵ��һ�������������ð������
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