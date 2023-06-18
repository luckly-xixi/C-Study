#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>
#include<string.h>



#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30



struct PeoInfo 
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	int age;
	char addr[MAX_ADDR];
};

struct Contact
{
	struct PeoInfo data[MAX];
	int sz;
};

//int main()
//{
//	int ret = sizeof(struct PeoInfo);
//	printf("%d\n",ret);//76
//	return 0;
//}

//int main()
//{
//	int ret = sizeof(struct Contact);
//	printf("%d\n", ret);//7604
//	return 0;
//}

//菜单
void menu();

//初始化通讯录
void InitConcatc(struct Contact* ps);

//增加通讯录
void AddContact(struct Contact* ps);

//删除通讯录成员
void DelContact(struct Contact* ps);

//查找联系人
void SearchContact(struct Contact* ps);

//修改联系人
void ModifyContact(struct Contact* ps);

//通讯录排序
void SortContact(struct Contact* ps);

//打印展示
void ShowContact(const struct Contact* ps);