#define _CRT_SECURE_NO_WARNINGS 1

/*
1、实现一个对整形数组的排序（冒泡排序）
2、创建一个数组
   实现函数Init（）初始化数组全为0
   实现函数Print（）打印数组的每个元素
   实现函数reverse（）将数组中的元素置换过来

3、将数组A中的内容和数组B中的内容进行交换（数组一样大）

4、交换两个整形a，b中的数字，用函数实现。

使用函数调用的方式完成以下任务（用指针做）
	1、写一个函数可以判断一个数是不是素数。

	2、写一个函数判断一年是不是闰年。
	3、写一个函数，实现一个整形有序数组的二分查找。

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
		(year % 400) == 0 ? printf("是闰年\n") : printf("不是闰年\n");
	}
	else
		(year % 4) == 0 ? printf("是闰年\n") : printf("不是闰年\n");
}

void judge(int a)
{
	if (a == 2)
		printf("%d不是素数\n", a);
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			printf("%d不是素数\n", a);
			break;
		}
		if (i == a/2)
		{
			printf("%d是素数\n", a);
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