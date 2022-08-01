#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*
tips:指针是和数组一起使用的，指针的使用是开辟一个空间来存放地址的。
*/

//int main()
//{
//	//未初始化的指针变量 p是野指针
//	int arr[] = { 1, 3, 4 };
//	int *p=arr;    //局部变量不初始化，里面默认放的是一个随机值。
//	for (int i = 0; i < 3;i++)
//	printf("%p\n", *(p+i));
//	return 0;
//}

//int main()
//{
//	int a[10] = { 1 };
//	int i = 0;
//	int *p = a;
//	for (i = 0; i <= 9; i++)
//	{
//		*p = i;
//		printf("%d\n", *p);
//		printf("%d\n", a[i]);
//		p++;
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;    //这里的a是局部变量，进入的时候被创建，离开之后被销毁。
//	return &a;     //当这里使用return返回a的地址时候，原来a的空间就被销毁了，
//	               //当我们调用函数访问a的空间的时候实际上是非法访问。
//}
//
//int main()
//{
//	int *p=test();
//	printf("%d\n", *p);//非法访问a的空间。
//	return 0;
//}

/*
一、躲避野指针的几个方法（正确使用指针方法）
	1、指针初始化----定义指针类型并附上地址或（NULL）
	2、小心指针越界                    
	3、指针指向的空间释放后-即将指针置NULL 
	4、指针使用之前检查有效性

二、指针+-整数
	Example：
	#define N_VALUES 5
	float values[N_VALUES];
	float *vp;

	for(*vp=values[0];vp<value[N_VALUES];)
	{
	   *vp++ = 0;    //先 *vp=0 ； 再 vp++
	}

三、二级指针（类推到n级指针）
int     a=10;
int   *pa=&a;    //pa是指针变量  即pa 就是一个地址。
int **ppa=&pa;   //这里的**ppa就是二级指针，存放pa地址的地址。

*/


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int *p = &arr[9];
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//			p-=2;
//	}
//	return 0;
//}

int my_strlens(char *str)
{
	char* start = str;
	char* end = str;
	while (1)
	{
		if (*end == '\0')
		{
			break;
		}

		else
			end++;
	}
	return  end - start;
}

int main()
{
	char arr[] = "bit";
	int len = my_strlens(arr);
	printf("%d\n", len);
	return 0;
}