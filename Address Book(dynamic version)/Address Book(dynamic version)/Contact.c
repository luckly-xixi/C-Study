#define _CRT_SECURE_NO_WARNINGS 1

#include"Contact.h"

//菜单
void menu()
{
	printf("******************************\n");
	printf("****  1.add      2.del    ****\n");
	printf("****  3.search   4.modify ****\n");
	printf("****  5.show     6.sort   ****\n");
	printf("****       0.exit         ****\n");
	printf("******************************\n");
}


//初始化通讯录
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

//增加通讯录
void AddContact(struct Contact* ps)
{
	if (0 == ps->sz)
	{//调整空间
		grow(ps);
	}
	is_full(ps);

}