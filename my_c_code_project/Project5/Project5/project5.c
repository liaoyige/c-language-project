#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
/*
tips:sizeof �� strlen������
1��sizeof�ǲ���������+��-�����Ĳ�����һ��
2��strlen��һ����������Ҫ����ͷ�ļ�string.h
   strlen( )   ����Ĳ��������ǵ�ַ
3��sizeof��strlen�����ķ���ֵ����һ����ַ����Ž���ĵ�ַ��

char arr[5];   
sizeof(arr)=5        //sizeof()�Ǽ���()�ڲ����ٵ��ֽ�����
strlen(arr)=�����   //strlenֻ��ʹ�����ַ�������
                     //strlen�Ǽ����ַ�����\0ǰ����ַ����������ֽ�Ϊ��λ��
3��̸̸�Ҷ���������
�Ҿ����������һ�����ָ�룬���� int arr[10];�����arr���Ա�ʾ���10���ַ���
�׵�ַ������*pһ����p��ʾ�ľ��Ǵ�����ݵĵ�ַ����arr[10]��ͬ���ǣ�Ҫȡ��p��ַ
�е���������Ҫ���� * �����ò�������*p�ű�ʾpָ���е����ݣ��������鲢����Ҫ * 
������������arr[1],arr[2],����ֱ�ӽ⿪�����еĵ�ַ����ȡ����������Ҫ����ֵ����
�����ָ��ǳ������ɺü���ָ��ƴ��һ������֡�ͨ��&arr[1]=p  arr[1]=*p;

4������break����ʹ������
break���һ��ֻ��ʹ����ѭ�����ڲ�������forѭ����whileѭ��������ʹ��break����
ѭ����if����е�break������if����Ǹ�ѭ����������������е�if��䣬ʹ����break
��ֱ�������������ˣ����Բ�����if��ʹ��break�������������ѭ���е�if���ʹ��
break����������ѭ���������ǿ���ʹ��break���ġ�

1����������֪ʶ��
һ������Ĵ���
    int arr[]={1,2,3};             ��
    int arr[10]([]�б����ǳ���)    ��
    int n=10;   int arr[n]         ��
������ά����Ĵ���(�����洢)
    ��λ���鲻����ͬʱʡ���к��м�
	int arr[][] ={1,2,3,4,5,6};     ��
	int arr[][3]={1,2,3,4,5,6};     ��
	int arr[3][]={1,2,3,4,5,6};     ��

��ά���飺��һ�е�����������arr[0]
arr[3][4] �ڶ��е�����������arr[1]
          �����е�����������arr[2]



����������Ϊ���������Ĵ���
�����ڽ��д��ݲ�����ʱ��ʵ�����Ǵ��ݵ���Ԫ�صĵ�ַ

void bubble_sort(int arr[],int a)  //������ܵ���һ��ָ�룬���������������ʾ
{       //�൱��(int *p   )                  
	//int sz = sizeof(arr) / sizeof(arr[0]);//arr������ʾ�������飬������Ԫ��ָ��
    //sizeof(arr)    =  sizeof(int *p)=4��
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
				flag=0; //�����������ʱ����
			}
		}
		if(flag == 1)
		   break;
	}
}

int main()
{
	int arr[] = {9,8,7,6,5,4,3,2,1};//��arr���������ų�����
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
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };//int Ϊ4���ֽ�
	int *p=arr;
//������������ַ����������
//1��sizeof(������) ������������ʾ�������飬sizeof����������
//   ���������������Ĵ�С,��λ���ֽڡ�
	 int sz = sizeof(arr) / sizeof(arr[0]);
//2��&arr��ȡ��ַ��������ʱ��ȡ��������������ĵ�ַ��
	printf("%p\n", &arr);      //  0
	printf("%p\n", &arr+1);   //   4
	printf("%p\n", arr);      //   0
	printf("%p\n", arr+1);    //   4
	printf("%p\n", &arr[0]);  //   0
	printf("%p\n", &arr[0]+1);// sizeof��arr��
	return 0;
}


//void bubble_sort(int arr[], int a)  //������ܵ���һ��ָ�룬���������������ʾ
//{       //�൱��(int *p   )                  
//	//int sz = sizeof(arr) / sizeof(arr[0]);//arr������ʾ�������飬������Ԫ��ָ��
//	//sizeof(arr)    =  sizeof(int *p)=4��
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
//				flag = 0; //�����������ʱ����
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,4,6,2,3,8,9 };//��arr���������ų�����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("arr[]=%d\n", arr[i]);
//	}
//	return 0;
//}
