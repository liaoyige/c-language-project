#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
/*����scanf������������Ƶ�С��
  1��%s���ַ��������ת���ַ�   scanf("%s",str);
  2��%c����printf��ʹ�õĵ����ַ������
  3��%d�����α����������������

���������ַ���������֮��ı仯
  1��" " ����˫����֮���ʾ����һ���ַ��������Ҫ���ַ����Ļ�
     �������һ���ַ���������š�����  char str[]="abcd";
  2��' ' ����������֮���ʾ����һ���������ַ���������char ֱ��
     ����������     char str='a';
  3���ַ����������ݽ������е�Ҳ��������ַ����С����������ַ�����ֵ
     char arr[]="abcde";          "abcde"����һ���ַ���
	 char arr[]={'a','b','c'};    {'a','b','c'}��a,b,c�������������ַ� ��һ��
*/ 
	//char*p = arr ;
	//char*q = arr1;
//int main()
//{
//	char str[10] = "h";
//	char *p = &str;
//	char arr[10] = "bit";
//	char arr1[10] = {'2'};
////	char arr1[10] ={ 2 };   �����൱�ڰ�ASCII��2���ݽ�����arr1��
//
//	strcpy(p,arr);
//	printf("str:%s\n",str);
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*',5);
//	printf("arr[]=%s\n", arr);
//	return 0;
//}

/*
����̸һ���β���ʵ�ε����⣨ʵ�Ρ��������βΣ�
1��ʵ�ʲ�������ʵ���ݸ������Ĳ�����ʵ�ʲ���������Swap(a,b),
   �����a��b����ʵ�ʲ�������ʵʵ���ڴ������Swap�����е�ֵ��
2����ʽ������ֻ����Ϊһ����ʽ�Ĳ���������Swap��int x,int y��
   �����int x, int y����������ʽ������
3�����βε��޸Ĳ���ı�ʵ�εģ���Ҳ��������Ĵ���������Ϊʲô
   Swap1�޷�����a,b����������ֵ��ԭ�򣬶�ֻ��ͨ��Swap2������
   ָ���޸ĵ�ַ�д�ŵ�ֵ�Ĵ�С���ܽ���a,b������ֵ��ԭ��
*/

//void Swap1(int x,int y)
//{
//	int tmp = x;
//	x = y; 
//	y = tmp;
//}
//void Swap2(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap1(a, b);
//	printf("a=%d,b=%d\n", a, b);
//	Swap2(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//�й���printf����������˼������

//int main()
//{
//   //printf����ͬ���з���ֵ������ֵ����ֵ�Ǵ�ӡ���ַ�������
//   //����printf("%d",43)�ķ���ֵ����2����Ϊ43Ϊ�����ַ������Է���ֵΪ2.
//	printf("%d",printf("%d",printf("%d",printf("%d", 43))));
//	return 0;
//}

//����������
/*int Add(int, int);//��������������
  һ�����ǵ� .h�ļ��� .c�ļ����о����õ��˺���������
  1����.h�ļ��У���������������
  2����.c�ļ��У����ǻ�д�º���ʵ�ֹ��ܡ�
  3���ڶ����У����ǻ�include .c��.h�ļ���

  ���Ͼ���������Ŀ�����̣�Ҳ�ǿ����Ļ���������
*/

/*
��ҵ��ʹ�ú������õķ�ʽ�������������ָ������
    1��дһ�����������ж�һ�����ǲ���������
	2��дһ�������ж�һ���ǲ������ꡣ
	3��дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
	4��дһ��������ÿ����һ������������ͻὫnum��ֵ����1��
*/

//1��

//int judge(int *a)
//{
//	if (*a <= 2)
//		return 1;
//	for (int i = 2; i < *a; i++)
//	{
//		if ((*a) % i == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int num = 0;
//	scanf("%d", &a);
//	num = judge(&a);
//	if (num == 1)
//		printf("��������\n");
//	else if (num == 0)
//		printf("������\n");
//	return 0;
//}

//2��

//int judge(int * p)
//{
//	if ((*p) % 100 == 0)
//	{
//		if ((*p) % 400 == 0)
//			return 0;
//		else  return 1;
//	}
//
//	else if((*p) % 4 == 0)
//		return 0;
//	else return 1;
//		
//}
//
//int main()
//{
//	while (1)
//	{
//		int num = 0;
//		scanf("%d", &num);
//		if (judge(&num) == 0)
//			printf("������\n");
//		else if (judge(&num) == 1)
//			printf("��������\n");
//	}
//	return 0;
//}

//��ϰһ ����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��

//void print(unsigned int a)
//{
//	if (a > 10)
//	{
//		print(a/10);
//	}
//	printf("%d ", a % 10);
//}
//
//
//int main()
//{
//	unsigned int a;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//�ݹ�Ĵ��ݹ������£����� a=1234��

//void print(unsigned int a)
//{
//	if (a > 10)
//	{
//		//print(a / 10);
//		void print(unsigned int a)
//		{
//			if (a > 10)
//			{
//				//print(a / 10);
//				void print(unsigned int a)
//				{
//					if (a > 10)
//					{
//						//print(a / 10);
//						void print(unsigned int a)
//						{
//							if (a > 10)
//							{
//								print(a / 10);
//							}
//							printf("%d ", a % 10);
//						}
//					}
//					printf("%d ", a % 10);
//				}
//			}
//			printf("%d ", a % 10);
//		}
//	}
//	printf("%d ", a % 10);
//}

//��ϰ�� ��д�������������ÿ⺯�������ַ����ĳ��ȡ�

/*
  tips:ע������ strlen���� ��sizeof��������������֮�������
  1��strlen()���������ַ����ĵĳ��ȡ�
  2��sizeof()������������ַ��������εȵȣ��Ĵ�С

   char arr[]="bit";
   strlen(arr)=3        ��Ϊ b i t \0  bit��������\0����
   sizeof(arr)=12       ��Ϊ char=4bit��3��char�ַ�����12bit
*/

//int my_strlen(char *p)
//{
//	if (*p != '\0')
//	{
//		return my_strlen(p+1)+1;
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char str[20] = { 0 };
//	scanf("%s", str);
//	printf("%d\n", my_strlen(str));
//	return 0;
//}

//�ݹ������
//��ϰ�� ��n�Ľ׳�

//int loop(int x)
//{
//	if (x > 1)
//	{
//		return x*loop(x - 1);
//	}
//	else
//	{
//		return 1;
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("num=%d\n", loop(n));
//	return 0;
//}

int series(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	for (int i = 3; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	if (n > 2)
		return c;
	else
		return 1;
	
}

int main()
{
		int n = 0;
		while (1)
		{
		scanf("%d", &n);
		printf("���е�%d�������ǣ�%d\n", n, series(n));
		}
		return 0;
}