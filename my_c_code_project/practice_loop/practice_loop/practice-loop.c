#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
/*
switch(整型表达式)
{
   语句项；break;     //break跳出switch语句
}
example：
switch(n)
{
case 1:
case 2:
case 3:
case 4:
case 5:
    printf("工作日\n",);  break;
case 6:
case 7:
    printf("休息日\n");   break;
default:
    printf("输入错误\n"); break;
}

continue    //continue语句指的是结束本次循环，进入下一个循环中。

do while 循环：

do 
   循环语句；
while （表达式）；

例如://下面这个代码是实现打印1-10数字的算法
int main()
{
int i = 1;
do
{
printf("%d", i);
i++;
}

while (i <= 10);
return 0;
}

*/


/*
tips:下面这个循环不执行，因为for循环的第二项为赋值语句，并不是判断语句
     所以当i=0，j=0初始化以后，j=0为假，所以循环不执行，直接跳过。
 for(i=0,j=0;j=0;i++,j++)
  {
      j++;
  }

  //稍作修改，当j=1的时候就是一个死循环。相当于while（1）
 for(i=0,j=0;j=1;i++,j++)
  {
      j++;
  }
*/

//int compare(int a,int b,int c)
//{
	//int n=0;
	//int n1 = 0;
	//int n2 = 0;
	//if (a >= b && a>=c)
	//{
	//	n = a;
	//	n1 = b>c? b:c;
	//	n2 = b+c-n1;
	//	printf("%d\n%d\n%d\n", n, n1, n2);
	//}
	//else if (b >= a && b>=c)
	//{
	//	n = b;
	//	n1 = a>c ? a : c;
	//	n2 = a + c - n1;
	//	printf("%d\n%d\n%d\n", n, n1, n2);
	//}
	//else 
	//{
	//	n = c;
	//	n1 = a>b ? a : b;
	//	n2 = a + b - n1;
	//	printf("%d\n%d\n%d\n", n, n1, n2);
	//}
	//return 0;
//}
//int main()
//{
//	int a,b,c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp=0;
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//    if (a < c)
//	{
//		int tmp = 0;
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//    if (b < c)
//	{
//		int tmp = 0;
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, i, n;
//	scanf("%d%d",&a,&b);
//	n = a > b ? b : a;
//	for (i = n; i >= 0; i--)
//	{
//		if (a%i==0 && b%i==0)
//		{
//			printf("最大公约数为：%d\n", i);
//			return 0;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int year;
//	for ( year = 1000; year <= 2000; year++)
//	{
//		if (year % 100 == 0)
//		{
//			year % 400==0 ? printf("闰年：%d\n", year) : NULL;
//		}
//		else if (year % 4 == 0)
//		{
//			printf("闰年：%d\n", year);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i, j;
//	int count=0;
//	for (i = 199; i >= 100; i-=2)
//	{
//		for (j = sqrt(i); j >= 2; j--)
//		{
//			
//			if (i%j == 0)
//			{
//				break;
//			}
//			if (j == 2 && i % 2 != 0)
//			{
//				count++;
//				printf("素数：%d\n", i);
//			}
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("9的个数为：%d\n", count);
//	return 0;
//}

//float divide(float a)
//{
//	float b=1.00;
//	return b / a - b / (a + 1);
//}
//
//int main()
//{
//	float sum = 0.00;
//	
//	for (float i= 1; i <= 100; i+=2)
//	{
//		sum += divide(i);
//	}
//	printf("sum=%f\n", sum);
//	return 0;
//}

//int compare(int a, int b)
//{
//	int tmp = 0;
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	return a;
//}
//
//int main()
//{
//	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
//	scanf("%d%d%d%d%d%d%d%d%d%d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10);
//	int n[10] = { a1, a2, a3, a4, a5, a6, a7, a8, a9, a10 };
//	for (int i = 0; i < 10; i++)
//	{
//		n[0] = compare(n[0], n[i]);
//	}
//	printf("最大值为%d\n",n[0]);
//	return 0;
//}

//void main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d   ", j, i, j*i);
//		}
//		printf("\n");
//	}
//}

//int match(int a,int b)
//{
//
//}
//
//int main()
//{
//	return 0;
//}

//void main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//        static int sum=1;
//		sum = sum*i;
//		printf("阶乘为：%d\n", sum);
//	}
//	
//}

//int Mult(int i)
//{
//	int mult = 1;
//	for (int j = 1; j <= i; j++)
//	{
//		mult = mult*j;
//	}
//	return mult;
//}
//
//void main()
//{
//	int num;
//	int sum = 0;
//	scanf("%d", &num);
//	for (int i = 1; i <= num; i++)
//	{
//		sum += Mult(i);
//	}
//	printf("总阶乘数为：%d\n",sum);//4037913
//}

//int main()  //二分法查找数字
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12,13,14,15,16,17,18,19,20 };
//	int k = 17;
//	int num,i;             //写一个代码在arr数组（有序数组）中找到7	
//	int size1 = 0;
//	int size  = sizeof(arr) / sizeof(arr[0]);
//
//	while (1)
//	{
//		i = 0;	
//		printf("请输入二分查找次数：");
//        scanf("%d", &num);
//		for ( i = 1; i <= num; i++)
//		{
//			int n = (size1 + size) / 2;
//			if (k > arr[n])
//			{
//				size1 = n;
//			}
//			else if (k < arr[n])
//			{
//				size = n;
//			}
//
//			else if (k == arr[n])
//			{
//				printf("找到了，该数字在数组的第%d个\n", n);
//				break;
//			}
//		}
//		if (i > num)
//			printf("未找到，请重新尝试\n");
//		else
//			break;
//	}
//	return 0;
//}


//int main()
//{
//	//strcpy-----字符串拷贝函数
//	char arr1[] = "bit";
//	char arr2[20] = "******";
//	  strcpy(&arr2, &arr1);
//	//strcpy( arr2,  arr1);
//	printf("%s\n", arr2);
//}

//void main()
//{
//	int arr[10];
//	int i, j, num;
//	int before = 0;
//	int later = 9;
//	for ( i = 0; i <= 9; i++)
//	{
//		scanf("%d", &arr[i]);
//		printf("arr[%d]=%d\n", i, arr[i]);
//	}
//	printf("请输入二分查找次数：");
//	scanf("%d", &j);
//	printf("\n请输入需要匹配数字：");
//	scanf("%d", &num);
//	for (i = 0; i < j; i++)
//	{
//		if (num>arr[(before + later) / 2])
//		{
//			before = (before + later) / 2;
//		}
//		else if (num < arr[(before + later) / 2])
//		{
//			later = (before + later) / 2;
//		}
//		else if (num = arr[(before + later) / 2])
//		{
//			printf("找到数字了，在第%d位\n", (before + later) / 2);
//			break;
//		}
//	}
//	if (num != arr[(before + later) / 2])
//	printf("未找到数字\n");
//}

//猜数字游戏
//1、电脑会生成一个随机数
//2、猜数字

//void menu()
//{
//	printf("***********************\n");
//	printf("***********************\n");
//	printf("***  1.play  0.exit ***\n");
//	printf("***********************\n");
//	printf("***********************\n");
//
//}
//
//void game()
//{
//	int ret;
//	int guess;
//	ret=rand()%100+1;
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess == ret)
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));//时间戳
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择》:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//在C语言中和汇编循环一样的goto语句；  tip：慎用，很容易出BUG！
//goto语句常用于深层嵌套跳出。

//int main()
//{
//again:
//	printf("hello bit\n");
//	goto again;
//	return 0;
//}

//关机程序(十分有趣，输入我是🐖才能取消关机)
//tips:在电脑命令提示符cmd中敲入shutdown -s -t 可以设置在多少秒后关机
//      例程如下                system()-执行系统命令

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	printf("请注意，你的电脑在1分钟后关机，如果输入：我是🐖，就取消关机\n");
	again:
	printf("请输入：");
	scanf("%s", input);
	if (strcmp(input, "我是🐖") == 0)//比较两个字符串-strcmp()
	{
		system("shutdown -a");
	}
	else
	{
		printf("再给你一次机会，请不要不识抬举。\n");
		goto again;
	}
	return 0;
}
