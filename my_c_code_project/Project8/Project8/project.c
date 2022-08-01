#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*异或算法交换两个数*/
//int swap(int arr[], int min, int j)
//{
//	if (min == j)
//	{
//		return 0;
//	}
//	arr[min] = arr[min] ^ arr[j];
//	arr[j] = arr[min] ^ arr[j];
//	arr[min] = arr[min] ^ arr[j];
//}
//
//
//void count(int arr[], int arr_len)
//{
//	for (int i = 0; i < arr_len; i++)
//	{
//		int min = i;
//		for (int j = min+1; j < arr_len; j++)
//		{
//			min = arr[min] < arr[j] ? min : j;
//		}
//		swap(arr, min, i);
//	}
//}
//
//void main()
//{
//	int arr[] = { 10, 2, 4, 3, 6, 8, 7, 5, 9, 1 };
//	int arr_len = sizeof(arr) / sizeof(arr[0]);
//	count(arr, arr_len);
//	for (int i = 0; i < arr_len; i++)
//		printf("arr[%d]=%d\n", i, arr[i]);
//}

int odd(int arr[], int len)
{
	int num = 0;
	for (int i = 0; i < len; i++)
	{
		num = num ^ arr[i];
	}
	return num;
}

int odd_1(int arr[], int len)
{
	int num = 0;
	for (int i = 0; i < len; i++)
	{
		num = num ^ arr[i];
	}
	if (num % 2 == 1)
	{
		num = 0;
		for (int i = 0; i < len; i++)
		{
			arr[i] % 2 == 1 ? num = num ^ arr[i] : NULL;
		}
		return num;
	}
}

int odd_2(int arr[], int len)
{
	int num = 0;
	for (int i = 0; i < len; i++)
	{
		num = num ^ arr[i];
	}
	if (num % 2 == 1)
	{
		int num = 0;
		for (int i = 0; i < len; i++)
		{
			arr[i] % 2 == 0 ? num = num ^ arr[i] : NULL;
		}
		return num;
	}
}

void main()
{
	int arr_1[] = { 1, 1, 2, 2, 3, 3, 3, 4, 4, 5, 5, 7, 7, 9, 9, 9, 9 };
	int arr_2[] = { 1, 1, 1, 3, 3, 4, 4, 4, 5, 5, 5, 5, 7, 7, 9, 9 };
	int arr_len_1 = sizeof(arr_1) / sizeof(arr_1[0]);
	int arr_len_2 = sizeof(arr_2) / sizeof(arr_2[0]);
	int num_1 = 0;
	int num_2_1 = 0;
	int num_2_2 = 0;
	num_1 = odd(arr_1,arr_len_1);
	num_2_1 = odd_1(arr_2, arr_len_2);
	num_2_2 = odd_2(arr_2, arr_len_2);
	printf("arr_1中的数为=%d\n", num_1);
	printf("arr_2中的数a为=%d\n", num_2_1);
	printf("arr_2中的数b为=%d\n", num_2_2);
}