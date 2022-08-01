#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 1000

enum Option    //枚举法增加代码的可读性
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

struct PeoInfo
{
	char name[20];
	int age;
	char sex[5];
	char tele[12];
	char addr[30];
};

struct Contact
{
	struct PeoInfo data[MAX];
	int size;
};

void InitContact(struct Contact *ps);
void AddContact(struct Contact *ps);
void ShowContact(const struct Contact *ps);    //const 修饰指针表示指针所指向的对象不会被改变
void DelContact(struct Contact *ps);
void SearchContact(struct Contact *ps);
