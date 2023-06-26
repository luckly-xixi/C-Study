#define _CRT_SECURE_NO_WARNINGS 1

#include"Contact.h"

//���������״ο��ٿռ�
struct Contact* Oepning_up_space()
{
	struct Contcat* pf = (struct Contact*)maolloc(sizeof(int) + sizeof(struct PeoInfo) * 10);
	if (NULL == pf)
	{
		perror("Opening up malloc:");
		return NULL;
	}
	return pf;
}

//��ʼ��ͨѶ¼
void InitConcatc(struct Contact* ps)
{
	ps->sz = 0;
	//��Ϊ��
	memset(ps->data,NULL,10*sizeof(struct PeoInfo));
}

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


void is_full(struct Contact* ps)
{
	if (sizeof(struct PeoInfo) == ps->sz)
	{
		struct PeoInfo* p = realloc(ps, (sizeof(struct PeoInfo) + sizeof(struct PeoInfo) / 2) * sizeof(struct PeoInfo));
		if (NULL == p)
		{
			perror("�����ռ�realloc:");
			return;
		}
	}
}

//void grow()
//{
//	struct PeoInfo* p = malloc(10*sizeof(struct PeoInfo));
//	if (NULL == p)
//	{
//		perror("��ʼ���ٿռ�malloc:");
//	}
//}

//����ͨѶ¼
void AddContact(struct Contact* ps)
{
	//if (0 == ps->sz)
	//{//�����ռ�
	//	grow(ps);
	//}
	is_full(ps);

	printf("��������ϵ��������\n");
	scanf("%s",ps->data[ps->sz].name);
	printf("��������ϵ���Ա�\n");
	scanf("%s", ps->data[ps->sz].sex);
	printf("��������ϵ�����䣺\n");
	scanf("%s", &ps->data[ps->sz].age);
	printf("��������ϵ�˵绰��\n");
	scanf("%s", ps->data[ps->sz].tele);
	printf("��������ϵ��סַ��\n");
	scanf("%s", ps->data[ps->sz].addr);
		
	ps->sz++;
	printf("���ӳɹ�\n");
}


int is_empty(struct Contact* ps)
{
	if (0 == ps->sz)
	{
		return 0;
	}
	return 1;
}


int FindByName(struct Contact* ps,char name[])
{
	for (int i = 0; i < ps->sz; i++)
	{
		if (0 == strcmp(ps->data[i].name,name))
		{
			return i;
		}
	}
	return -1;
}

//ɾ��ͨѶ¼��Ա
void DelContact(struct Contact* ps)
{
//�ж�ͨѶ¼�Ƿ�Ϊ��
	int ret = is_empty(ps);
	if (0 == ret)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
//����ָ����ϵ��
	char name[MAX_NAME];
	printf("������Ҫɾ������ϵ������:\n");
	scanf("%s",name);
	int tmp = FindByName(ps,name);
	if (-1 == tmp)
	{
		printf("����ϵ�˲�����\n");
	}
//ɾ��
	else
	{
		for (int i = tmp;  i < ps->sz-1; i++)
		{
			ps->data[i] = ps->data[i + 1];
		}
		ps->sz--;
		printf("ɾ���ɹ�\n");
	}
}



//������ϵ��
void SearchContact(struct Contact* ps)
{
	int ret = is_empty(ps);
	if (0 == ret)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}

	char name[MAX_NAME];
	printf("������Ҫ���ҵ���ϵ������:\n");
	scanf("%s", name);


	int tmp = FindByName(ps, name);
	if (-1 == tmp)
	{
		printf("����ϵ�˲�����\n");
	}
	else
	{
		printf("%s\t%d\t%s\t%s\t%s\n", "����", "����", "�Ա�", "�绰", "��ַ");
			printf("%s\t%d\t%s\t%s\t%s\n",
				ps->data[tmp].name,
				ps->data[tmp].age,
				ps->data[tmp].sex,
				ps->data[tmp].tele,
				ps->data[tmp].addr);
	}

}



//�޸���ϵ��
void ModifyContact(struct Contact* ps)
{
	int ret = is_empty(ps);
	if (0 == ret)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}

	char name[MAX_NAME];
	printf("������Ҫ���ҵ���ϵ������:\n");
	scanf("%s", name);


	int tmp = FindByName(ps, name);
	if (-1 == tmp)
	{
		printf("����ϵ�˲�����\n");
	}
	else
	{
		printf("��������ϵ������\n");
		scanf("%s", ps->data[ret].name);
		printf("��������ϵ������\n");
		scanf("%d", &ps->data[ret].age);
		printf("��������ϵ���Ա�\n");
		scanf("%s", ps->data[ret].sex);
		printf("��������ϵ�˵绰\n");
		scanf("%s", ps->data[ret].tele);
		printf("��������ϵ��סַ\n");
		scanf("%s", ps->data[ret].addr);

		printf("�޸ĳɹ�\n");
	}

}


//��ӡչʾ
void ShowContact(const struct Contact* ps)
{
	int i = 0;
	printf("%s\t%d\t%s\t%s\t%s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < ps->sz; i++)
	{
		printf("%s\t%d\t%s\t%s\t%s\n",
			ps->data[i].name,
			ps->data[i].age,
			ps->data[i].sex,
			ps->data[i].tele,
			ps->data[i].addr);
	}
	printf("��ӡ���\n");
}


//ͨѶ¼����
int CmpByAge(const void* e1, const void* e2)
{
	return ((struct PeoInfo*)e1)->age - ((struct PeoInfo*)e2)->age;
}

void SortContact(struct Contact* ps)
{
	qsort(ps->data, ps->sz, sizeof(struct PeoInfo), CmpByAge);
}
