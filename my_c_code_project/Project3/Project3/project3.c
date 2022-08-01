#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 100
#include <stdio.h>
#include <string.h>
/*tips:sizeof  是操作符
       
一、一些简单的逻辑与经典的误导
int main()
{
	int a = 10;
	int arr[] = { 1, 2, 3, 4, 5, 6 };//这里的arr是数组名字，数组的类型并不是int
	                                 //但数组中的每个元素是int类型

	printf("%d\n", sizeof(a));       //计算元素a的大小（1个 int = 4）
	printf("%d\n", sizeof(arr));     //计算数组的大小 （6个 int = 24）
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	return 0;
}

void test()
{
	int a = 0;             //每次调用的时候都被清零一次。
		a++;               //所以每次输出都是0+1=1；
	printf("a=%d\n",a);    //会打印出5个1；
}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
}

//static 修饰局部变量，该局部变量生命周期延长了。
  static 修饰全局变量, 改变变量的作用域，使得静态的全局变量只能在源文件内部用。
  static 修饰函数，改变了函数的链接属性，由 外部链接属性——》内部链接属性。
void test()
{
	static int a = 0;         //static 只在这个函数中第一次给a赋值为0   
	a++;                      //不论调用多少次，
	printf("a=%d\n", a);      //static int a = 0;     都会被跳过
}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
}

//#define 可以定义宏-带参数
#define MAX(X,Y) (X>Y? X:Y) //宏定义
int main()
{
	int a = 10;   
	int b = 20;
	int max = MAX(a, b);
	printf("max=%d\n", max);
	return 0;
}

二、操作符号与关键字
1、~ 按位取反
int main()
{
	int a = 0X12A0;          //16进制          12A0=4768；
	int b = ~a;              //按位取反
	printf("%d\n", a);       //结果为4768；    -4769补码减一取反得到原码
							 //由于负数在计算机中是由补码存在的，所以
	printf("%d\n", b);       //结果为-4769；    4768~=-4769；
	return 0;
}

2、register  寄存器关键字    当定义为寄存器型变量以后取该数据的运算速度会快很多
int main()
{  
	register int a = 10;         //寄存器      运算速度最快
	                             //高速缓存器  其次
	                             //内存        再次
	                             //硬盘        运算最慢
	return 0;
}

3、signed  unsigned   有符号数与无符号数关键字
4、struct ——结构体关键字
5、union  ——联合体
6、volatile——（在操作系统中会用到！！！！！）高段位词汇

7、typedef ——类型重定义(类型重新起名字)
   typedef unsigned int u_int;    //将unsigned int 起名字为u_int

   unsigned int num2=10; ——》 等价于   u_int  num2=10;
   
三、指针*******重点！！！！！！！！
1、用来存放地址的变量——指针变量

    int* p = &a; //p是指针变量，类型为 int*类型。   p=a变量的地址
    *            //*—解引用操作符
    *p           //对p进行解引用，找到p指向的地址的存放数值。

	地址中存放的什么类型的变量，就用什么样的指针来定义。
	int   *p     //表示的是指针p指向一个int类型的变量的地址
	char  *p     //表示的是指针p指向一个char类型的变量的地址

	int a = 10;               //开辟一个变量空间a 并让10存放在该空间中；
	int *p = &a;              //开辟一个变量空间p 让p保存a变量的地址
	*p = 20;                  //用解引用操作符使得p指向地址的变量空间重新赋值。

	指针加一相当于加一个sizeof（a）的地址。如下例子。
	int a[]={1,2,3}，b;
	int *p=a;            //p是a数组的地址值
	p=p+1;               //这里的p就变成了 a（地址）+sizeof（a[0]）所得到的地址
	b=*p;                //此处的b在解引用p的地址以后就是a[1]
	                     //也就是说  b=a[1]=2;

2、指针大小问题
  在32位机器平台上，有32根地址线/数据线，每一个最小的存储块为4个字节。
需要开辟的指针存储空间为 4 byte
  在64位机器平台上，有64根地址线/数据线，每一个最小的存储快为8个字节。
需要开辟的指针存储空间为 8 byte

3、结构体
类似 人，书......这些东西都是复杂对象
人=名字+身高+年龄+身份证号........
书=书名+出版社+定价+书号..........
复杂对象——结构体——我们自己创造出来的一种类型

结构体在使用方法：（例子如下）
.    结构体变量.成员
->   结构体指针->成员

struct Book          //创建一个结构体类型
{
	char name[20];   //c语言程序设计
	short price;     //55
};

int main()
{
	//利用结构体类型创建一个该类型的结构体变量
	struct Book b1 = { "c语言程序设计" ,55};
	printf("书名：%s\n", b1.name);
	printf("价格：%d\n", b1.price);
	return 0;
}


*/

struct Book          //创建一个结构体类型
{
	char name[20];   //c语言程序设计
	short price;     //55
};

int main()
{
	//利用结构体类型创建一个该类型的结构体变量
	struct Book b1 = { "c语言程序设计", 55 };
	struct Book * pb = &b1;
	printf("书名：%s\n", (*pb).name);
	printf("价格：%d\n", (*pb).price);
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	return 0;
}
