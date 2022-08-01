#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
/*关于scanf函数中输入控制的小结
  1、%s是字符串输入的转义字符   scanf("%s",str);
  2、%c是在printf中使用的单个字符的输出
  3、%d是整形变量的输入与输出。

二、关于字符串和数组之间的变化
  1、" " 两个双引号之间表示的是一个字符串如果想要用字符串的话
     必须得用一个字符数组来存放。例如  char str[]="abcd";
  2、' ' 两个单引号之间表示的是一个单独的字符，可以用char 直接
     申明，例如     char str='a';
  3、字符数组所传递进数组中的也必须得是字符才行。有如下两种方法赋值
     char arr[]="abcde";          "abcde"就是一个字符串
	 char arr[]={'a','b','c'};    {'a','b','c'}是a,b,c这三个单个的字符 串一起
*/ 
	//char*p = arr ;
	//char*q = arr1;
//int main()
//{
//	char str[10] = "h";
//	char *p = &str;
//	char arr[10] = "bit";
//	char arr1[10] = {'2'};
////	char arr1[10] ={ 2 };   这里相当于把ASCII码2传递进入了arr1中
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
这里谈一个形参与实参的问题（实参——》》形参）
1、实际参数：真实传递给函数的参数是实际参数，例如Swap(a,b),
   这里的a，b就是实际参数，是实实在在传入进入Swap函数中的值。
2、形式参数：只是作为一个形式的参数，例如Swap（int x,int y）
   这里的int x, int y就是两个形式参数。
3、对形参的修改不会改变实参的，这也就是下面的代码例程中为什么
   Swap1无法交换a,b这两个数的值的原因，而只有通过Swap2函数用
   指针修改地址中存放的值的大小才能交换a,b两个数值的原因。
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

//有关于printf函数的有意思的例程

//int main()
//{
//   //printf函数同样有返回值，返回值的数值是打印的字符个数。
//   //例如printf("%d",43)的返回值就是2，因为43为两个字符，所以返回值为2.
//	printf("%d",printf("%d",printf("%d",printf("%d", 43))));
//	return 0;
//}

//函数的申明
/*int Add(int, int);//函数的声明方法
  一般我们的 .h文件， .c文件当中就是用到了函数的声明
  1、在.h文件中，我们声明函数。
  2、在.c文件中，我们会写下函数实现功能。
  3、在顶层中，我们会include .c和.h文件。

  以上就是整个项目的流程，也是开发的基本方法！
*/

/*
作业：使用函数调用的方式完成以下任务（用指针做）
    1、写一个函数可以判断一个数是不是素数。
	2、写一个函数判断一年是不是闰年。
	3、写一个函数，实现一个整形有序数组的二分查找。
	4、写一个函数，每调用一次这个函数，就会将num的值增加1。
*/

//1、

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
//		printf("不是素数\n");
//	else if (num == 0)
//		printf("是素数\n");
//	return 0;
//}

//2、

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
//			printf("是闰年\n");
//		else if (judge(&num) == 1)
//			printf("不是闰年\n");
//	}
//	return 0;
//}

//练习一 接受一个整形值（无符号），按照顺序打印它的每一位。

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

//递归的传递过程如下（假如 a=1234）

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

//练习二 编写函数不允许运用库函数，求字符串的长度。

/*
  tips:注意区分 strlen（） 和sizeof（）这两个函数之间的区别。
  1、strlen()函数是求字符串的的长度。
  2、sizeof()函数是求这个字符串（整形等等）的大小

   char arr[]="bit";
   strlen(arr)=3        因为 b i t \0  bit算三个，\0不算
   sizeof(arr)=12       因为 char=4bit，3个char字符就是12bit
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

//递归与迭代
//练习三 求n的阶乘

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
		printf("数列第%d个数字是：%d\n", n, series(n));
		}
		return 0;
}