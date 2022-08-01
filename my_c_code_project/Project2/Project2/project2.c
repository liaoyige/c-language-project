#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10
/*
一、常量
1、字面常量 如 1，20，100；

2、const修饰常量 在定义的变量前面加上const 使变量无法改变
   const int a=20；
   int arr[a]={0}；
   上面两行代码就会报错了，因为数组中只能是常量，不能是变量。

3、#define定义的标识符常量；用这个标识符定义的就是常量可以用在数组中。
   #define MAX 10    
   int arr[MAX]={0};
   上面两行代码就不会报错了，所以注意const和#define之间的区别。

4、枚举常量一一列举
   枚举关键字  -  enum
   通过下面这种列举的方法来定义常量，MALE代表0；FEMALE代表1；SECRET代表2.
   enum Sex
{
	MALE,     //0
	FEMALE,   //1
	SECRET    //2    另外这个枚举常量无法改变，也就是说SECRET=2不能变更。
};


二、字符串+转译字符
1、由双引号引起来的一串字符是字符串，字符串最后由 \0 结束。
   注意，可以不用给数组里面放一个定值，只要碰到\0就会自动结束
   如果用数字表示数组中数量大小，那么最后一个字符就一定是\0;
   char arr[] = "abc";               
   char arr[] ={'a','b','c','\0'}     //定义字符串两种方法
   printf("%s\n", arr)                //打印字符串

2、字符串长度arr[4]实际上只有3个长度的字符串长度
   printf("%d\n", strlen(arr));\\输出结果只有3 ‘\0’这个字符不算字符数
   tips:转义字符就是  \+数字或者是字母 
   举几个简单的转义字符的例子：  
   \0数组中元素的结束转义字符  \t等价于一个tab按键的空格量   \n换行

*/
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
enum Color
{
	RED,YELLOW,BLUE
};
int main()
{			
	char arr[] = "abc";
    char arr1[4] = { 'a', 'b', 'c','\0' };
	printf("%s\n", arr);
	printf("%s\n", arr1);
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr1));
//	printf("%d\n",strlen("D:\Download\my_c_code_project\test1\test1\test1.c"));
	return 0;

}