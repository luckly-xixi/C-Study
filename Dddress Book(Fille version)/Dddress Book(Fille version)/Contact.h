#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

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


//���������״ο��ٿռ�
struct Contact* Oepning_up_space();

//��ʼ��ͨѶ¼
void InitConcatc(struct Contact* ps);

//�˵�
void menu();

//����ͨѶ¼
void AddContact(struct Contact* ps);

//ɾ��ͨѶ¼��Ա
void DelContact(struct Contact* ps);

//������ϵ��
void SearchContact(struct Contact* ps);

//�޸���ϵ��
void ModifyContact(struct Contact* ps);

//ͨѶ¼����
void SortContact(struct Contact* ps);

//��ӡչʾ
void ShowContact(const struct Contact* ps);

//��������
void DowloadContact(struct Contact* ps);

//�洢ͨѶ¼���ļ���
void SaveContact(struct Contact* ps);