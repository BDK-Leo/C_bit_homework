//ѭ�������ϰ�ȣ�rand��
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//������
//void menu()
//{
//	printf("-------------------\n");
//	printf("-----  1.PLAY  ----\n");
//	printf("-----  0.EXIT  ----\n");
//	printf("-------------------\n");
//}
//
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int n = 0;
//	int count = 10;
//	while (count)
//	{
//		printf("��ʣ��%d�λ��ᣡ",count);
//		printf("�����֣�");
//		scanf("%d",&n);
//		if (n < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (n > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣡�¶��ˣ�\n");
//			break;
//		}
//		count--;
//	}
//	if (count == 0)
//	{
//		printf("���ź�����Ϸ������\n");
//	}
//}
//
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("���˳���Ϸ��\n");
//			break;
//		default:
//			printf("����������������룡\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//�ж�a,b,c�ܷ񹹳������Σ���Ϊ�������������ӡ"Isosceles triangle!"����Ϊ�ȱ����������ӡ"Equilateral triangle!"
//�������������ӡ"Ordinary triangle!",��֮���ӡ"Not a triangle!"
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if ((a+b>c) && (a+c>b) && (b+c>a))
//		{
//			if ((a == b) && (b == c))
//			{
//				printf("�ȱ�������\n");
//			}
//			else if ((a == b) || (a == c) || (b == c))
//			{
//				printf("����������\n");
//			}
//			else
//				printf("����������\n");
//		}
//		else
//		{
//			printf("Not a triangle!");
//		}
//	}
//	return 0;
//}