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
		printf("ͨѶ¼����\n");
		return;
	}
	printf("��������ϵ������\n");
	scanf("%s", ps->data[ps->sz].name);
	printf("��������ϵ������\n");
	scanf("%d", &ps->data[ps->sz].age);
	//ע������������������Ҫ��ȡ��ַ����
	//�������Ϊ�����飬����ֱ�Ӽ�Ϊ��ַ
	printf("��������ϵ���Ա�\n");
	scanf("%s", ps->data[ps->sz].sex);
	printf("��������ϵ�˵绰\n");
	scanf("%s", ps->data[ps->sz].tele);
	printf("��������ϵ��סַ\n");
	scanf("%s", ps->data[ps->sz].addr);

	ps->sz++;
	printf("���ӳɹ�\n");
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
	//�ҳ�Ա
	char name[MAX_NAME];
	printf("������Ҫɾ������ϵ������\n");
	scanf("%s",name);
	int ret = FindByName(ps,name);
	//ɾ��
	if (-1 == ret)
		printf("��ϵ�˲�����\n");
	else
	{
		for (int i = ret; i < ps->sz-1; i++)
		{
			ps->data[i] = ps->data[i + 1];
		}
		ps->sz--;
		printf("ɾ���ɹ�\n");
	}
}



void SearchContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ���ϵ������\n");
	scanf("%s", name);
	int ret = FindByName(ps, name);
	if (-1 == ret)
		printf("��ϵ�˲�����\n");
	else
	{
		printf("%s\t%d\t%s\t%s\t%s\n", "����", "����", "�Ա�", "�绰", "��ַ");

		printf("%s\t%d\t%s\t%s\t%s\n",
			ps->data[ret].name,
			ps->data[ret].age,
			ps->data[ret].sex,
			ps->data[ret].tele,
			ps->data[ret].addr);
		printf("��ӡ���\n");
	}
}



void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸ĵ���ϵ������\n");
	scanf("%s", name);
	int ret = FindByName(ps, name);
	if (-1 == ret)
		printf("��ϵ�˲�����\n");
	else
	{
		printf("��������ϵ������\n");
		scanf("%s", ps->data[ret].name);
		printf("��������ϵ������\n");
		scanf("%d", &ps->data[ret].age);
		//ע������������������Ҫ��ȡ��ַ����
		//�������Ϊ�����飬����ֱ�Ӽ�Ϊ��ַ
		printf("��������ϵ���Ա�\n");
		scanf("%s", ps->data[ret].sex);
		printf("��������ϵ�˵绰\n");
		scanf("%s", ps->data[ret].tele);
		printf("��������ϵ��סַ\n");
		scanf("%s", ps->data[ret].addr);
	}
}



void ShowContact(const struct Contact* ps)
{
	int i = 0;
	printf("%s\t%d\t%s\t%s\t%s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("��ӡ���\n");
}

int CmpByAge(const void* e1, const void* e2)
{
	return ((struct PeoInfo*)e1)->age - ((struct PeoInfo*)e2)->age;
}

void SortContact(struct Contact* ps)
{
	qsort(ps->data, ps->sz, sizeof(struct PeoInfo), CmpByAge);
}