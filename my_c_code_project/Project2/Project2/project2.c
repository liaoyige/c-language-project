#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10
/*
һ������
1�����泣�� �� 1��20��100��

2��const���γ��� �ڶ���ı���ǰ�����const ʹ�����޷��ı�
   const int a=20��
   int arr[a]={0}��
   �������д���ͻᱨ���ˣ���Ϊ������ֻ���ǳ����������Ǳ�����

3��#define����ı�ʶ���������������ʶ������ľ��ǳ����������������С�
   #define MAX 10    
   int arr[MAX]={0};
   �������д���Ͳ��ᱨ���ˣ�����ע��const��#define֮�������

4��ö�ٳ���һһ�о�
   ö�ٹؼ���  -  enum
   ͨ�����������оٵķ��������峣����MALE����0��FEMALE����1��SECRET����2.
   enum Sex
{
	MALE,     //0
	FEMALE,   //1
	SECRET    //2    �������ö�ٳ����޷��ı䣬Ҳ����˵SECRET=2���ܱ����
};


�����ַ���+ת���ַ�
1����˫������������һ���ַ����ַ������ַ�������� \0 ������
   ע�⣬���Բ��ø����������һ����ֵ��ֻҪ����\0�ͻ��Զ�����
   ��������ֱ�ʾ������������С����ô���һ���ַ���һ����\0;
   char arr[] = "abc";               
   char arr[] ={'a','b','c','\0'}     //�����ַ������ַ���
   printf("%s\n", arr)                //��ӡ�ַ���

2���ַ�������arr[4]ʵ����ֻ��3�����ȵ��ַ�������
   printf("%d\n", strlen(arr));\\������ֻ��3 ��\0������ַ������ַ���
   tips:ת���ַ�����  \+���ֻ�������ĸ 
   �ټ����򵥵�ת���ַ������ӣ�  
   \0������Ԫ�صĽ���ת���ַ�  \t�ȼ���һ��tab�����Ŀո���   \n����

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