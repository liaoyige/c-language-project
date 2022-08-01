#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
/*
指针和数组笔试题解析
1、sizeof + *指针 + &取地址判别
	//Tips：除开以下两个例外，其他的数组名是首元素的地址！！！
	//		1、sizeof(数组名) — 数组名表示整个数组
	//		2、&(数组名) — 数组名表示整个数组
	int a[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(a));		    //16  sizeof(数组名)- 计算的是数组总大小 - 单位是字节 - 16
	printf("%d\n", sizeof(a+0));		//4	  数组名这里表示首元素的地址，地址的大小就是4/8个字节
	printf("%d\n", sizeof(*a));			//4	  数组名表示首元素地址，*解引用后得到首元素的值
	printf("%d\n", sizeof(a+1));		//4	  数组名这里表示首元素的地址，a+1表示第二个元素的地址，地址的大小就是4/8个字节
	printf("%d\n", sizeof(a[1]));		//4	  第二个元素的大小，int类型，4个字节
	printf("%d\n", sizeof(&a));			//4	  &a取出的是数组的地址，但是数组的地址也是地址，地址的大小就是4/8个字节
	printf("%d\n", sizeof(*&a));		//16  *&a，取地址后再解引用，得到的就是sizeof(a)，与1一样
	printf("%d\n", sizeof(&a+1));		//4	  &a是取数组的地址，数组的地址 &a+1 就是跳过整个数组后的那个地址，还是4个字节
	printf("%d\n", sizeof(&a[0]));		//4   &a[0]是第一个元素的地址
	printf("%d\n", sizeof(&a[0]+1));	//4	  &a[0]+1是第二个元素的地址

	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", sizeof(arr));			//6
	printf("%d\n", sizeof(arr + 0));		//4/8
	printf("%d\n", sizeof(*arr));			//1
	printf("%d\n", sizeof(arr[1]));			//1
	printf("%d\n", sizeof(&arr));			//4/8
	printf("%d\n", sizeof(&arr + 1));		//4/8
	printf("%d\n", sizeof(&arr[0] + 1));	//4/8

	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));			
	printf("%d\n", sizeof(arr + 0));		
	printf("%d\n", sizeof(*arr));			 
	printf("%d\n", sizeof(arr[1]));		 
	printf("%d\n", sizeof(&arr));			
	printf("%d\n", sizeof(&arr + 1));		 
	printf("%d\n", sizeof(&arr[0] + 1));

	char *p = "abcdef";					//p指针只有4个字节的空间
	printf("%d\n", sizeof(p));			// 4   计算的是变量p的大小
	printf("%d\n", sizeof(p + 1));		// 4   计算的是字符b的地址大小
	printf("%d\n", sizeof(*p));			// 1   p中存放的是第一个字符a的地址，*p = 'a'
	printf("%d\n", sizeof(p[1]));		// 1   p[1] == *(p+1) == arr[1]
	printf("%d\n", sizeof(&p));			// 4/8
	printf("%d\n", sizeof(&p + 1));		// 4/8
	printf("%d\n", sizeof(&p[0] + 1));  // 4/8

2、strlen + *指针 + &取地址判别
	Tips：strlen（）传入的参数只能是地址，且strlen（）函数是寻找'/0'之前
		  的字符个数，若字符数组中没有 '/0' 作为结束符号，函数返回随机值
		  char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
		  printf("%d\n", strlen(arr));			 //随机值   取数组首元素的地址传入
		  printf("%d\n", strlen(arr + 0));		 //随机值   取数组首元素的地址传入
		  printf("%d\n", strlen(*arr));			 //error    strlen（）函数只能传地址进去，无法传值
		  printf("%d\n", strlen(arr[1]));		 //error    strlen（）函数只能传地址进去，无法传值
		  printf("%d\n", strlen(&arr));			 //随机值   取数组的地址传入（数组首元素地址与数组的地址一样，但是代表的含义不同）
		  printf("%d\n", strlen(&arr + 1));		 //随机值-6 跳过数组往后数到\0为止
		  printf("%d\n", strlen(&arr[0] + 1));   //随机值-1 跳过字符数组中第一个元素往后数到\0为止
*/

void main()
{
	char *p = "abcdef";					//p指针只有4个字节的空间
	printf("%d\n", sizeof(p));			// 4   计算的是变量p的大小
	printf("%d\n", sizeof(p + 1));		// 4   计算的是字符b的地址大小
	printf("%d\n", sizeof(*p));			// 1   p中存放的是第一个字符a的地址，*p = 'a'
	printf("%d\n", sizeof(p[1]));		// 1   p[1] == *(p+1) == arr[1]
	printf("%d\n", sizeof(&p));			// 4/8
	printf("%d\n", sizeof(&p + 1));		// 4/8
	printf("%d\n", sizeof(&p[0] + 1));  // 4/8
}


