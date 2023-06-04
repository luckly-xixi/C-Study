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
	memset(ps->data,0,MAX*sizeof(struct PeoInfo));
}
 


void AddContact(struct Contact* ps)
{
	if (ps->sz >= MAX)
	{
		printf("通讯录已满\n");
		return;
	}
	printf("请输入联系人名字\n");
	scanf("%s", ps->data[ps->sz].name);
	printf("请输入联系人年龄\n");
	scanf("%d", &ps->data[ps->sz].age);
	//注意年龄是整数，输入要加取地址符号
	//其余的因为是数组，所以直接即为地址
	printf("请输入联系人性别\n");
	scanf("%s", ps->data[ps->sz].sex);
	printf("请输入联系人电话\n");
	scanf("%s", ps->data[ps->sz].tele);
	printf("请输入联系人住址\n");
	scanf("%s", ps->data[ps->sz].addr);

	ps->sz++;
	printf("增加成功\n");
}



static int FindByName(const struct Contact* ps, char name[])
{
	for (int i = 0; i < ps->sz; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
			return i;
	}
	return -1;
}

void DelContact(struct Contact* ps)
{
	//找成员
	char name[MAX_NAME];
	printf("请输入要删除的联系人姓名\n");
	scanf("%s",name);
	int ret = FindByName(ps,name);
	//删除
	if (-1 == ret)
		printf("联系人不存在\n");
	else
	{
		for (int i = ret; i < ps->sz-1; i++)
		{
			ps->data[i] = ps->data[i + 1];
		}
		ps->sz--;
		printf("删除成功\n");
	}
}



void SearchContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找的联系人姓名\n");
	scanf("%s", name);
	int ret = FindByName(ps, name);
	if (-1 == ret)
		printf("联系人不存在\n");
	else
	{
		printf("%s\t%d\t%s\t%s\t%s\n", "姓名", "年龄", "性别", "电话", "地址");

		printf("%s\t%d\t%s\t%s\t%s\n",
			ps->data[ret].name,
			ps->data[ret].age,
			ps->data[ret].sex,
			ps->data[ret].tele,
			ps->data[ret].addr);
		printf("打印完毕\n");
	}
}



void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改的联系人姓名\n");
	scanf("%s", name);
	int ret = FindByName(ps, name);
	if (-1 == ret)
		printf("联系人不存在\n");
	else
	{
		printf("请输入联系人名字\n");
		scanf("%s", ps->data[ret].name);
		printf("请输入联系人年龄\n");
		scanf("%d", &ps->data[ret].age);
		//注意年龄是整数，输入要加取地址符号
		//其余的因为是数组，所以直接即为地址
		printf("请输入联系人性别\n");
		scanf("%s", ps->data[ret].sex);
		printf("请输入联系人电话\n");
		scanf("%s", ps->data[ret].tele);
		printf("请输入联系人住址\n");
		scanf("%s", ps->data[ret].addr);
	}
}



void ShowContact(const struct Contact* ps)
{
	int i = 0;
	printf("%s\t%d\t%s\t%s\t%s\n", "姓名", "年龄", "性别", "电话", "地址");
	for (i=0; i<ps->sz; i++)
	{
		//printf("%-20s %d %-5s %-13s %s-30\n",
		//	ps->data->name, 
		//	ps->data->age, 
		//	ps->data->sex,
		//	ps->data->tele,
		//	ps->data->addr);

		printf("%s\t%d\t%s\t%s\t%s\n",
			ps->data[i].name,
			ps->data[i].age,
			ps->data[i].sex,
			ps->data[i].tele,
			ps->data[i].addr);
	}
	printf("打印完毕\n");
}

int CmpByAge(const void* e1, const void* e2)
{
	return ((struct PeoInfo*)e1)->age - ((struct PeoInfo*)e2)->age;
}

void SortContact(struct Contact* ps)
{
	qsort(ps->data, ps->sz, sizeof(struct PeoInfo), CmpByAge);
}