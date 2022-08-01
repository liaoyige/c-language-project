#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
/*
ָ���������������
1��sizeof + *ָ�� + &ȡ��ַ�б�
	//Tips�����������������⣬����������������Ԫ�صĵ�ַ������
	//		1��sizeof(������) �� ��������ʾ��������
	//		2��&(������) �� ��������ʾ��������
	int a[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(a));		    //16  sizeof(������)- ������������ܴ�С - ��λ���ֽ� - 16
	printf("%d\n", sizeof(a+0));		//4	  �����������ʾ��Ԫ�صĵ�ַ����ַ�Ĵ�С����4/8���ֽ�
	printf("%d\n", sizeof(*a));			//4	  ��������ʾ��Ԫ�ص�ַ��*�����ú�õ���Ԫ�ص�ֵ
	printf("%d\n", sizeof(a+1));		//4	  �����������ʾ��Ԫ�صĵ�ַ��a+1��ʾ�ڶ���Ԫ�صĵ�ַ����ַ�Ĵ�С����4/8���ֽ�
	printf("%d\n", sizeof(a[1]));		//4	  �ڶ���Ԫ�صĴ�С��int���ͣ�4���ֽ�
	printf("%d\n", sizeof(&a));			//4	  &aȡ����������ĵ�ַ����������ĵ�ַҲ�ǵ�ַ����ַ�Ĵ�С����4/8���ֽ�
	printf("%d\n", sizeof(*&a));		//16  *&a��ȡ��ַ���ٽ����ã��õ��ľ���sizeof(a)����1һ��
	printf("%d\n", sizeof(&a+1));		//4	  &a��ȡ����ĵ�ַ������ĵ�ַ &a+1 �������������������Ǹ���ַ������4���ֽ�
	printf("%d\n", sizeof(&a[0]));		//4   &a[0]�ǵ�һ��Ԫ�صĵ�ַ
	printf("%d\n", sizeof(&a[0]+1));	//4	  &a[0]+1�ǵڶ���Ԫ�صĵ�ַ

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

	char *p = "abcdef";					//pָ��ֻ��4���ֽڵĿռ�
	printf("%d\n", sizeof(p));			// 4   ������Ǳ���p�Ĵ�С
	printf("%d\n", sizeof(p + 1));		// 4   ��������ַ�b�ĵ�ַ��С
	printf("%d\n", sizeof(*p));			// 1   p�д�ŵ��ǵ�һ���ַ�a�ĵ�ַ��*p = 'a'
	printf("%d\n", sizeof(p[1]));		// 1   p[1] == *(p+1) == arr[1]
	printf("%d\n", sizeof(&p));			// 4/8
	printf("%d\n", sizeof(&p + 1));		// 4/8
	printf("%d\n", sizeof(&p[0] + 1));  // 4/8

2��strlen + *ָ�� + &ȡ��ַ�б�
	Tips��strlen��������Ĳ���ֻ���ǵ�ַ����strlen����������Ѱ��'/0'֮ǰ
		  ���ַ����������ַ�������û�� '/0' ��Ϊ�������ţ������������ֵ
		  char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
		  printf("%d\n", strlen(arr));			 //���ֵ   ȡ������Ԫ�صĵ�ַ����
		  printf("%d\n", strlen(arr + 0));		 //���ֵ   ȡ������Ԫ�صĵ�ַ����
		  printf("%d\n", strlen(*arr));			 //error    strlen��������ֻ�ܴ���ַ��ȥ���޷���ֵ
		  printf("%d\n", strlen(arr[1]));		 //error    strlen��������ֻ�ܴ���ַ��ȥ���޷���ֵ
		  printf("%d\n", strlen(&arr));			 //���ֵ   ȡ����ĵ�ַ���루������Ԫ�ص�ַ������ĵ�ַһ�������Ǵ���ĺ��岻ͬ��
		  printf("%d\n", strlen(&arr + 1));		 //���ֵ-6 ����������������\0Ϊֹ
		  printf("%d\n", strlen(&arr[0] + 1));   //���ֵ-1 �����ַ������е�һ��Ԫ����������\0Ϊֹ
*/

void main()
{
	char *p = "abcdef";					//pָ��ֻ��4���ֽڵĿռ�
	printf("%d\n", sizeof(p));			// 4   ������Ǳ���p�Ĵ�С
	printf("%d\n", sizeof(p + 1));		// 4   ��������ַ�b�ĵ�ַ��С
	printf("%d\n", sizeof(*p));			// 1   p�д�ŵ��ǵ�һ���ַ�a�ĵ�ַ��*p = 'a'
	printf("%d\n", sizeof(p[1]));		// 1   p[1] == *(p+1) == arr[1]
	printf("%d\n", sizeof(&p));			// 4/8
	printf("%d\n", sizeof(&p + 1));		// 4/8
	printf("%d\n", sizeof(&p[0] + 1));  // 4/8
}


