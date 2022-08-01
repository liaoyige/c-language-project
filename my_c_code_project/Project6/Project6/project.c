#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>


//tips:
//int main()
//{
//	double a = 5.0 / 2.0;    想要得到小数的结果，那么必须要在运算中
//	printf("%lf", a);        至少有一个浮点数，例如 5/2.0 或 5.0/2
//	return 0;
//}

/*
右移操作符:
1.算术右移：右边丢弃，左边补原符号位；（符号位一起移位，负数就补一）（通常都是）
2.逻辑右移：右边丢弃，左边补0；       （不论正负，移位后都直接补零）
*/ 
//  >>  右移操作符（移动的是二进制位，算术右移）
//void main()
//{
//	int a = -16;
//	int b=a << 1;
//	printf("%d", b);
//}

//扩展：
/*
1、如果一个函数要返回两个数值，如何操作？
2、求二进制中不同位的个数
*/

//int count_1(int num)
//{
//	int sz = 0;
//	while (num)
//	{
//		num = num / 10;
//		sz++;
//	}
//	return sz;
//}
//
//int main()
//{
//	int count = 0;
//	int num = 0;
//	scanf("%d", &num);
//	int sz = count_1(num);
//	printf("sz=%d\n", sz);
//	while (num)
//	{
//		int cmp = num % 10;
//		num = num / 10;
//		for (int i = 0; i < sz ; i++)
//		{
//			int a = num / (unsigned int)pow(10, i) % 10;
//			if (cmp == a)
//			{
//				break;
//			}
//			else if (i == sz - 1)
//			{
//				count++;
//			}
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//void print(int a)
//{
//	if (a > 9)
//	{
//		print(a / 10);
//	}
//	printf("%d ", a % 10);
//}
//
//int mut(int a)
//{
//	if (a > 1)
//	{
//		return a * mut(a - 1);
//	}
//	return a;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//print(a);
//	int num = mut(b);
//	printf("%d\n", num);
//	return 0;
//}
//

//int my_strlen(char * str)
//{
//	int count = 0;
//	while (*str  != '\0'  )
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//void reverse_string(char  * string)
//{
//	int left = 0;
//	int right = my_strlen(string)-1;
//	
//	while (left < right)
//	{
//		int tmp = string[left];
//		string[left] = string[right];
//		string[right] = tmp;
//		left++;
//		right--;
//	}
//
//}

//！！！！经典的递归问题合集！！！！！

//void reverse_string(char * str)
//{
//	char tmp = str[0];
//	int len = strlen(str);
//	str[0] = str[len-1];
//	str[len - 1] = '\0';
//	if (len > 2)
//	{
//	 reverse_string(str + 1);
//	}
//	str[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";//fedcba
//	//int a = strlen(arr);
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

int Digitsum(int a)
{
	if (a > 9)
	{
		return a % 10 + Digitsum(a / 10);
	}
	return a;
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	int sum = Digitsum(a);
	printf("%d\n", sum);
	return 0;
}