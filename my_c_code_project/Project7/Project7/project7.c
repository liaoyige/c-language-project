#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*
结构体的声明

1、结构体：些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量。

2、结构声明——（例如描述 复杂对象）
	struct tag             //struct 结构体关键字   tag可以随意替换
	{
		member-list;
	}  variable-list;

	描述一个学生（数据）
	名字
	年龄
	性别
	电话

	struct student      //student 结构体标签
	{					//struct student  结构体类型（不会占据内存空间）
		//成员变量         例如    int            (不会占用内存空间)
		//						   int  a;        (会开辟一个变量占据内存空间)
		char name[20];
		short age;
		char phone[12];
		char sex[5];
	}s1, s2, s3;// 这里s1 s2 s3 是三个全局的结构体变量（变量列表）

	typedef  struct student   //重新起名字  student
	{
		char name[20];
		short age;
		char phone[12];
		char sex[5];
	}student;  //student 变成了类型（上面的是变量）

	int main()
	{
	struct student s1;//创建局部的结构体变量
	student s2;
	return 0;
	}

3、结构成员的类型
   结构的成员可以是标量、数组、指针，甚至是其他结构体

4、结构体变量的定义和初始化
	struct S
	{
		int a;
		char c;
		char arr[20];
		double d;
	};

	struct T
	{
		char ch[10];
		struct S s;
		char *pc;
	};

	int main()
	{
		char arr[] = "hello bit\n";
		struct T t = { "hehe", { 100, 'w', "hello world", 3.14 }, arr };
		printf("%s\n", t.ch);         hehe
		printf("%s\n", t.s.arr);      hello world
		printf("%lf\n", t.s.d);		  3.14
		printf("%s\n", t.pc);         hello bit 
		return 0;
	}

5、结构体传参
	   typedef  struct student   //重新起名字  student
	{
		char name[20];
		short age;
		char phone[12];
		char sex[5];
	}student;  //student 变成了类型（上面的是变量）

	void Print1(student tmp)           //tmp是形式参数  （实参到形参  s—>tmp）
	{                                  //传递参数的大小由实参s确定（无上限）压栈的数据过大！
		printf("name:%s\n", tmp.name);
		printf("phone:%s\n", tmp.phone);
		printf("sex:%s\n", tmp.sex);
		printf("age:%d\n", tmp.age);
	}

	void Print2(student* tmp)         //这里传递的是地址 (地址给形参 &s->tmp)
	{                                 //传递的地址参数 32位平台 4个字节  64位平台 8个字节（最多传递8个字节）比传实际参数节省很多空间。
		printf("name:%s\n", tmp->name);
		printf("age:%d\n", tmp->age);
		printf("sex:%s\n", tmp->sex);
		printf("phone:%s\n", tmp->phone);
	}

	int main()
	{
		student s = { "李四", 40, "123456789", "男" };
		//打印结构体数据的两种方式
		//Print1  和  Print2 哪个好？     Print2
		Print1(s);// 传变量，直接使用.进行调用   s是实际参数
		Print2(&s);//传地址，用箭头使用结构体
		return 0;
	}
tips:函数传参的时候会出现压栈的情况（压栈如下所示）
	内存中分为3块区域
	1、栈区       （局部变量、函数的形式参数、函数调用也开辟空间）
	2、堆区       （动态内存分配，malloc/free，realloc，calloc）
	3、静态区	  （全局变量、静态变量）

数据结构：
————线性数据结构
顺序表     1 2 3 4 5 6   （在内存中连续存放的叫顺序表）
链表	   1->2->3->4->5 （在内存中存放在不同地址中但可以像链子一样找到的叫链表）
栈		   先进后出 ⬜   （插入一个元素：压栈    删除一个元素：出栈）
队列	   先进先出
————树形数据结构
二叉树 
————图
*/

//typedef  struct student   //重新起名字  student
//{
//	char name[20];
//	short age;
//	char phone[12];
//	char sex[5];
//}student;  //student 变成了类型（上面的是变量）
//
//void Print1(student tmp)           //tmp是形式参数  （实参到形参  s—>tmp）
//{                                  //传递参数的大小由实参s确定（无上限）
//	printf("name:%s\n", tmp.name);
//	printf("phone:%s\n", tmp.phone);
//	printf("sex:%s\n", tmp.sex);
//	printf("age:%d\n", tmp.age);
//}
//
//void Print2(student* tmp)         //这里传递的是地址 (地址给形参 &s->tmp)
//{                                 //传递的地址参数 32位平台 4个字节  64位平台 8个字节（最多传递8个字节）比传实际参数节省很多空间。
//	printf("name:%s\n", tmp->name);
//	printf("age:%d\n", tmp->age);
//	printf("sex:%s\n", tmp->sex);
//	printf("phone:%s\n", tmp->phone);
//}


//传参的时候会出现压栈的情况

//int ADD(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = ADD(a, b);
//	return 0;
//}


struct man
{
	char name[10];
	int  age;
	char sex[5];
	char phone[12];
};

struct human
{
	char name[10];
	int  age;
	char sex[5];
	char phone[12];
	struct man s;
};

void print1(struct human s)
{
	printf("name:%s\n", s.name);
	printf("age:%d\n", s.age);
	printf("sex:%s\n", s.sex);
	printf("phone:%s\n", s.phone);
}

void print2(struct human* s)
{
	printf("name:%s\n", s->name);
	printf("age:%d\n", s->age);
	printf("sex:%s\n", s->sex);
	printf("phone:%s\n", s->phone);
}

int main()
{   
	struct human s2 = { "张三", 20, "男", "123456789", {"李四",20,"男","12345678"} };
	print1(s2);
	print2(&s2);   //好 32位机里面 4个字节  64位机就是 8个字节
	return 0;
}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char *pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe", { 100, 'w', "hello world", 3.14 }, arr };
//	printf("%s\n", t.ch);           // hehe
//		printf("%s\n", t.s.arr);    //  hello world
//		printf("%lf\n", t.s.d);		//  3.14
//		printf("%s\n", t.pc);       //   hello bit
//		return 0;
//}