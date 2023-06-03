#define _CRT_SECURE_NO_WARNINGS 1

#include"Contact.h"


void menu()
{
	printf("******************************\n");
	printf("****  1.add      2.del    ****\n");
	printf("****  3.search   4.modify ****\n");
	printf("****  5.show     6.sort   ****\n");
	printf("****       0.exit         ****\n");
	printf("******************************\n");
}

void InitConcatc(struct Contact* ps)
{
	ps->sz = 0;
	memset(ps->data,MAX*sizeof(ps->data));
	//memset(ps->data,MAX*sizeof(struct PeoInfo));
}


void AddContact(struct Contact* ps)
{
	printf("请输入联系人名字\n");
	scanf("%s", ps->data[ps->sz].name);
	printf("请输入联系人年龄\n");
	scanf("%s", ps->data[ps->sz].age);
	printf("请输入联系人性别\n");
	scanf("%s", ps->data[ps->sz].sex);
	printf("请输入联系人电话\n");
	scanf("%s", ps->data[ps->sz].tele);
	printf("请输入联系人住址\n");
	scanf("%s", ps->data[ps->sz].addr);

	ps->sz++;
	printf("增加成功\n");
}
