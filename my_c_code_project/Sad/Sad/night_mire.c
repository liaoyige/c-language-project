#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*
tips:ָ���Ǻ�����һ��ʹ�õģ�ָ���ʹ���ǿ���һ���ռ�����ŵ�ַ�ġ�
*/

//int main()
//{
//	//δ��ʼ����ָ����� p��Ұָ��
//	int arr[] = { 1, 3, 4 };
//	int *p=arr;    //�ֲ���������ʼ��������Ĭ�Ϸŵ���һ�����ֵ��
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
//	int a = 10;    //�����a�Ǿֲ������������ʱ�򱻴������뿪֮�����١�
//	return &a;     //������ʹ��return����a�ĵ�ַʱ��ԭ��a�Ŀռ�ͱ������ˣ�
//	               //�����ǵ��ú�������a�Ŀռ��ʱ��ʵ�����ǷǷ����ʡ�
//}
//
//int main()
//{
//	int *p=test();
//	printf("%d\n", *p);//�Ƿ�����a�Ŀռ䡣
//	return 0;
//}

/*
һ�����Ұָ��ļ�����������ȷʹ��ָ�뷽����
	1��ָ���ʼ��----����ָ�����Ͳ����ϵ�ַ��NULL��
	2��С��ָ��Խ��                    
	3��ָ��ָ��Ŀռ��ͷź�-����ָ����NULL 
	4��ָ��ʹ��֮ǰ�����Ч��

����ָ��+-����
	Example��
	#define N_VALUES 5
	float values[N_VALUES];
	float *vp;

	for(*vp=values[0];vp<value[N_VALUES];)
	{
	   *vp++ = 0;    //�� *vp=0 �� �� vp++
	}

��������ָ�루���Ƶ�n��ָ�룩
int     a=10;
int   *pa=&a;    //pa��ָ�����  ��pa ����һ����ַ��
int **ppa=&pa;   //�����**ppa���Ƕ���ָ�룬���pa��ַ�ĵ�ַ��

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