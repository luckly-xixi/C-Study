#define _CRT_SECURE_NO_WARNINGS 1

#include"Contact.h"

//�˵�
void menu()
{
	printf("******************************\n");
	printf("****  1.add      2.del    ****\n");
	printf("****  3.search   4.modify ****\n");
	printf("****  5.show     6.sort   ****\n");
	printf("****       0.exit         ****\n");
	printf("******************************\n");
}


//��ʼ��ͨѶ¼
void InitConcatc(struct Contact* ps)
{
	ps->sz = 0; 
	memset(ps->data,0,10*sizeof(struct PeoInfo));
}

void is_full(struct Contact* ps)
{
	if( == pd->sz)
}

void grow()
{
	malloc(10*sizeof(struct PeoInfo));
}

//����ͨѶ¼
void AddContact(struct Contact* ps)
{
	if (0 == ps->sz)
	{//�����ռ�
		grow(ps);
	}
	is_full(ps);

}