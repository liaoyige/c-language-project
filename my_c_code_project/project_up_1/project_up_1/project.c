#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
C语言类型的分类
1、内置类型（语言本身就具有的类型）
	char 
	short 
	int
	long 
	float
	double

整形家族：
char
    unsigned char       tips:这里的有符号数和无符号数就是最高位是不是校验位
    signed	char			 有符号数最高位是1（负数），0（正数），无符号数	
short						 全是正数。  []中int可省可不省
	unsigned short[int]
	signed	 short[int]
int
	unsigned  int
	signed	  int
long
	unsigned  long[int]
	signed	  long[int]

浮点型家族：
	float      单精度浮点类型
	double	   双精度浮点类型

2、自定义类型（构造类型）

数组类型   
	int  arr[10]-->int [10]是int数组类型
	char str[10]-->char[10]是char数组类型
结构体类型 struct
枚举类型   enum
联合类型   union

指针类型
	int   *pi
	char  *pc
	float *pf
	void  *pv   //无具体类型的指针

3、大小端概念
	大端（存储）模式：数据的低位保存在内存的高地址中，数据的高位保存在低地址中。
	小端（存储）模式：数据的低位保存在内存的低地址中，数据的高位保存在高地址中。

tips：指针类型的意义
	1、指针类型决定了指针解引用后能访问字节数大小。char * p 访问一个字节   int *p  访问四个字节
	2、指针类型决定了指针+1、-1，加的或者减的是几个字节。  char * p; p+1跳过一个字符（1个字节）， int * p; p+1跳过一个整形（4个字节）

practice:
请简述大端小端字节序的概念，设计一个小程序来判断当前机器的字节序。
请列举出Linux常见进程间的通信方式，并进行对比说明。
*/

//int check_sys()
//{
//	int i = 1;
//	return (*(char *)&i);//指针的类型决定了指针解引用后能访问字节数大小。
//}

//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char *p = &a;
//	//p++;
//	*p = 0;
//	return 0;
//}


int main()
{
	int a = 0x11223344;//  44 33 22 11
	return 0;
}