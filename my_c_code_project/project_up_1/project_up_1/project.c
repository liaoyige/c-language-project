#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
C�������͵ķ���
1���������ͣ����Ա���;��е����ͣ�
	char 
	short 
	int
	long 
	float
	double

���μ��壺
char
    unsigned char       tips:������з��������޷������������λ�ǲ���У��λ
    signed	char			 �з��������λ��1����������0�����������޷�����	
short						 ȫ��������  []��int��ʡ�ɲ�ʡ
	unsigned short[int]
	signed	 short[int]
int
	unsigned  int
	signed	  int
long
	unsigned  long[int]
	signed	  long[int]

�����ͼ��壺
	float      �����ȸ�������
	double	   ˫���ȸ�������

2���Զ������ͣ��������ͣ�

��������   
	int  arr[10]-->int [10]��int��������
	char str[10]-->char[10]��char��������
�ṹ������ struct
ö������   enum
��������   union

ָ������
	int   *pi
	char  *pc
	float *pf
	void  *pv   //�޾������͵�ָ��

3����С�˸���
	��ˣ��洢��ģʽ�����ݵĵ�λ�������ڴ�ĸߵ�ַ�У����ݵĸ�λ�����ڵ͵�ַ�С�
	С�ˣ��洢��ģʽ�����ݵĵ�λ�������ڴ�ĵ͵�ַ�У����ݵĸ�λ�����ڸߵ�ַ�С�

tips��ָ�����͵�����
	1��ָ�����;�����ָ������ú��ܷ����ֽ�����С��char * p ����һ���ֽ�   int *p  �����ĸ��ֽ�
	2��ָ�����;�����ָ��+1��-1���ӵĻ��߼����Ǽ����ֽڡ�  char * p; p+1����һ���ַ���1���ֽڣ��� int * p; p+1����һ�����Σ�4���ֽڣ�

practice:
��������С���ֽ���ĸ�����һ��С�������жϵ�ǰ�������ֽ���
���оٳ�Linux�������̼��ͨ�ŷ�ʽ�������жԱ�˵����
*/

//int check_sys()
//{
//	int i = 1;
//	return (*(char *)&i);//ָ������;�����ָ������ú��ܷ����ֽ�����С��
//}

//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//		printf("���\n");
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char *p = &a;
//	//p++;
//	*p = 0;
//	return 0;
//}


int main()
{
	int a = 0x11223344;//  44 33 22 11
	return 0;
}