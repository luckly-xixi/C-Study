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
	printf("��������ϵ������\n");
	scanf("%s", ps->data[ps->sz].name);
	printf("��������ϵ������\n");
	scanf("%s", ps->data[ps->sz].age);
	printf("��������ϵ���Ա�\n");
	scanf("%s", ps->data[ps->sz].sex);
	printf("��������ϵ�˵绰\n");
	scanf("%s", ps->data[ps->sz].tele);
	printf("��������ϵ��סַ\n");
	scanf("%s", ps->data[ps->sz].addr);

	ps->sz++;
	printf("���ӳɹ�\n");
}
