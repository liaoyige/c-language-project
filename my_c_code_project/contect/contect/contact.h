#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 1000

enum Option    //ö�ٷ����Ӵ���Ŀɶ���
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
void ShowContact(const struct Contact *ps);    //const ����ָ���ʾָ����ָ��Ķ��󲻻ᱻ�ı�
void DelContact(struct Contact *ps);
void SearchContact(struct Contact *ps);
