#define _CRT_SECURE_NO_WARNINGS 1

/*
1��ʵ��һ�����������������ð������
2������һ������
   ʵ�ֺ���Init������ʼ������ȫΪ0
   ʵ�ֺ���Print������ӡ�����ÿ��Ԫ��
   ʵ�ֺ���reverse�����������е�Ԫ���û�����

3��������A�е����ݺ�����B�е����ݽ��н���������һ����

4��������������a��b�е����֣��ú���ʵ�֡�

ʹ�ú������õķ�ʽ�������������ָ������
	1��дһ�����������ж�һ�����ǲ���������

	2��дһ�������ж�һ���ǲ������ꡣ
	3��дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�

*/

//#include<stdio.h>

//int  Bubble(int arr[],int sz)
//{
//	    int i, j;
////	int sz = sizeof(arr)/sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[j]>arr[i])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[i];
//				arr[i] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("arr[%d]=%d\n", i, arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 3, 2, 4, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble(arr,sz);
//	return 0;
//}

//void Init(int arr[] ,int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//
//}
//
//void Print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("arr[%d]=%d\n", i, arr[i]);
//	}
//}

//void print(int *arr,int sz)
//{
//	if (sz > 0)
//		print(arr, sz - 1);
//	printf("arr[%d]=%d\n", sz, arr[sz]);
//}
//
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	print(arr,sz);
//	printf("arr[0]=%d\n", arr[0]);
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//	//printf(n / 10000 % 10);    //1     % 10  = 1
//	//printf(n / 1000 % 10);     //12    % 10  = 2
//	//printf(n / 100 % 10);      //123   % 10  = 3
//	//printf(n / 10 % 10);       //1234  % 10  = 4
//	//printf(n / 1 % 10);        //12345 % 10  = 5
//}

//int loop(int a)
//{
//	if (a > 2)
//	{
//		return a * loop(a - 1);
//	}
//	return a;
//}

//void reverse(int arr[],int sz)
//{
//	int left = 0;
//	int right =sz;
//	int tmp = arr[left];
//	arr[left] = arr[right];
//	if (sz > 1)
//	{
//		reverse(arr + 1, sz - 2);
//	}
//		arr[right] = tmp;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0])-1 ;
//	reverse(arr,sz);
//	for (int i = 0; i < sz+1; i++)
//	{
//		printf("arr[%d]=%d\n", i, arr[i]);
//	}
//	return 0;
//}


//int a = 10;
//int b = 20;

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void Display(int *a,int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d\t", a[i]);
//	}
//	printf("\n");
//}
//
//void change(int *a, int *b,int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		int tmp = a[i];
//		a[i] = b[i];
//		b[i] = tmp;
//	}
//}
//
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5 };
//	int b[] = { 6, 7, 8, 9, 10 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	change(a, b, sz);
//	Display(a,sz);
//	Display(b,sz);
//	return 0;
//}

void judge_year(int year)
{
	int num = 0;
	if (year % 100 == 0)
	{
		(year % 400) == 0 ? printf("������\n") : printf("��������\n");
	}
	else
		(year % 4) == 0 ? printf("������\n") : printf("��������\n");
}

void judge(int a)
{
	if (a == 2)
		printf("%d��������\n", a);
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			printf("%d��������\n", a);
			break;
		}
		if (i == a/2)
		{
			printf("%d������\n", a);
			break;
		}
	}

}

void increase(int num)
{
	num++;
}

void Init(int  arr[3][3])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < i; j++)
		{
			arr[i][j] = i + j;
		}
	}
}

void check(int arr[3][3])
{
	int num = 0;
	int i = 0;
	int j = 0;
	scanf("%d", &num);
	while (num != arr[i][j])
	{
		i++;
		j++;

	}
}

int main()
{
	int a = 0;
	int b = 0;
	int arr[3][3] = { 0 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	Init(arr);
	while (1)
	{
		scanf("%d", &a);
		scanf("%d", &b);
	//	judge(a);
		judge_year(b);
		increase(a);
		check(arr);
	}



	return 0;
}