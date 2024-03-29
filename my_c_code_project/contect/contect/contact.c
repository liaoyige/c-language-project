#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
#include<string.h>

static int find(struct Contact *ps,char name[20])
{
	int i = 0;
	for (i = 0; i < ps->size;i++)
	{
		if (0 == strcmp(ps->data[i].name, name));
		{
			return i;
		}
	}
	return -1;
}

void SearchContact(struct Contact *ps)
{
	char name[20];
	int i = 0;
	printf("请输入要查找人的名字：>");
	scanf("%s",name);
	i = find(ps, name);
	if (i == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		
	}
}

void DelContact(struct Contact *ps)
{
	char name[20];
	printf("请输入要删除人的名字：>");
	scanf("%s", name);
	int i = 0;
		i = find(ps, name);
	//1、查找要删除的人在哪个位置
	//for (i = 0; i < ps->size; i++)
	//{
	//	if (0 == strcmp(ps->data[i].name, name))    //字符串1  ＝ 字符串2，返回值 ＝ 0；
	//	{											//字符串1  >  字符串2，返回值 >  0；
	//		break;									//字符串1  <  字符串2，返回值 <  0。
	//	}
	//}
	if (i == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		//删除
		int j = 0;
		for (j = i; j < ps->size-1;j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
	
}

void InitContact(struct Contact *ps)
{
	memset(ps->data, 0,sizeof(ps->data));
	ps->size = 0;
}

void AddContact(struct Contact *ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满，无法增加！\n");
	}
	else
	{
		printf("请输入名字：>");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄：>");
		scanf("%d", &ps->data[ps->size].age);
		printf("请输入性别：>");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话：>");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址：>");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}
}

void ShowContact(const struct Contact *ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-10s%-4s\t %-5s\t %-7s\t %-10s\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{ 
			printf("%-10s%-4d\t %-5s\t %-7s\t %-10s\n",
				ps->data[i].name, 
				ps->data[i].age, 
				ps->data[i].sex, 
				ps->data[i].tele, 
				ps->data[i].addr);
		}
	}
}