#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>


//tips:
//int main()
//{
//	double a = 5.0 / 2.0;    ��Ҫ�õ�С���Ľ������ô����Ҫ��������
//	printf("%lf", a);        ������һ�������������� 5/2.0 �� 5.0/2
//	return 0;
//}

/*
���Ʋ�����:
1.�������ƣ��ұ߶�������߲�ԭ����λ��������λһ����λ�������Ͳ�һ����ͨ�����ǣ�
2.�߼����ƣ��ұ߶�������߲�0��       ��������������λ��ֱ�Ӳ��㣩
*/ 
//  >>  ���Ʋ��������ƶ����Ƕ�����λ���������ƣ�
//void main()
//{
//	int a = -16;
//	int b=a << 1;
//	printf("%d", b);
//}

//��չ��
/*
1�����һ������Ҫ����������ֵ����β�����
2����������в�ͬλ�ĸ���
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

//������������ĵݹ�����ϼ�����������

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