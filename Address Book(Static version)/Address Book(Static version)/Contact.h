#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#define MAX 100
#define MAX_NAME 100
#define MAX_SEX 100
#define MAX_TELE 100
#define MAX_ADDR 100

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


//�˵�
void menu();

//��ʼ��ͨѶ¼
void InitConcatc(struct Contact* ps);


//����ͨѶ¼
void AddContact(struct Contact* ps);
