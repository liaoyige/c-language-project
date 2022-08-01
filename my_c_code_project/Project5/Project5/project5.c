#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
/*
tips:sizeof 和 strlen的区别
1、sizeof是操作符，和+，-这样的操作符一样
2、strlen是一个函数，需要包含头文件string.h
   strlen( )   传入的参数必须是地址
3、sizeof和strlen（）的返回值都是一个地址（存放结果的地址）

char arr[5];   
sizeof(arr)=5        //sizeof()是计算()内部开辟的字节数量
strlen(arr)=随机数   //strlen只能使用在字符串上面
                     //strlen是计算字符串中\0前面的字符数量（以字节为单位）
3、谈谈我对数组的理解
我觉得数组就是一个大的指针，比如 int arr[10];这里的arr可以表示存放10个字符的
首地址，就像*p一样，p表示的就是存放数据的地址，与arr[10]不同的是，要取出p地址
中的数据我需要运用 * 解引用操作符，*p才表示p指针中的数据，但是数组并不需要 * 
操作符，而是arr[1],arr[2],这样直接解开数组中的地址，并取出我们所需要的数值，而
数组的指针非常大，是由好几个指针拼接一起的那种。通常&arr[1]=p  arr[1]=*p;

4、关于break语句的使用条件
break语句一般只能使用在循环的内部，例如for循环和while循环，可以使用break跳出
循环，if语句中的break是跳出if外的那个循环，如果是主函数中的if语句，使用了break
就直接跳出主函数了，所以不能在if中使用break，但是如果是在循环中的if语句使用
break则是跳出该循环，这里是可以使用break语句的。

1、数组的相关知识点
一、数组的创建
    int arr[]={1,2,3};             √
    int arr[10]([]中必须是常量)    √
    int n=10;   int arr[n]         ×
二、二维数组的创建(连续存储)
    二位数组不可以同时省略行和列即
	int arr[][] ={1,2,3,4,5,6};     ×
	int arr[][3]={1,2,3,4,5,6};     √
	int arr[3][]={1,2,3,4,5,6};     √

二维数组：第一行的数组名就是arr[0]
arr[3][4] 第二行的数组名就是arr[1]
          第三行的数组名就是arr[2]



三、数组作为函数参数的传递
数组在进行传递参数的时候实际上是传递的首元素的地址

void bubble_sort(int arr[],int a)  //这里接受的是一个指针，但是用数组变量表示
{       //相当于(int *p   )                  
	//int sz = sizeof(arr) / sizeof(arr[0]);//arr并不表示整个数组，而是首元素指针
    //sizeof(arr)    =  sizeof(int *p)=4；
    //sizeof(arr[0]) =  sizeof(int)=4    
	for (int i = 0; i < a-1; i++)
	{
	    int flag=1;
		for (int j = 0; j < a-i-1; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int tmp=arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = tmp;
				flag=0; //本次排序后暂时无序
			}
		}
		if(flag == 1)
		   break;
	}
}

int main()
{
	int arr[] = {9,8,7,6,5,4,3,2,1};//对arr进行排序，排成升序
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	for (int i = 0; i < 9; i++)
	{	
		printf("arr[]=%d\n", arr[i]);
	}
	return 0;
}

*/

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };//int 为4个字节
	int *p=arr;
//数组名不当地址的两个例外
//1、sizeof(数组名) ——数组名表示整个数组，sizeof（数组名）
//   计算的是整个数组的大小,单位是字节。
	 int sz = sizeof(arr) / sizeof(arr[0]);
//2、&arr，取地址数组名的时候，取出的是整个数组的地址。
	printf("%p\n", &arr);      //  0
	printf("%p\n", &arr+1);   //   4
	printf("%p\n", arr);      //   0
	printf("%p\n", arr+1);    //   4
	printf("%p\n", &arr[0]);  //   0
	printf("%p\n", &arr[0]+1);// sizeof（arr）
	return 0;
}


//void bubble_sort(int arr[], int a)  //这里接受的是一个指针，但是用数组变量表示
//{       //相当于(int *p   )                  
//	//int sz = sizeof(arr) / sizeof(arr[0]);//arr并不表示整个数组，而是首元素指针
//	//sizeof(arr)    =  sizeof(int *p)=4；
//	//sizeof(arr[0]) =  sizeof(int)=4    
//	for (int i = 0; i < a - 1; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < a - i - 1; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//				flag = 0; //本次排序后暂时无序
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,4,6,2,3,8,9 };//对arr进行排序，排成升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("arr[]=%d\n", arr[i]);
//	}
//	return 0;
//}
