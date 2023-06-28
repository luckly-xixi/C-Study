#define _CRT_SECURE_NO_WARNINGS 1

#include"Contact.h"

//柔性数组首次开辟空间
struct Contact* Oepning_up_space()
{
	struct Contact* pf = (struct Contact*)malloc(sizeof(int) + sizeof(struct PeoInfo) * 10);
	if (NULL == pf)
	{
		perror("Opening up malloc:");
		return NULL;
	}
	return pf;
}

//初始化通讯录
void InitConcatc(struct Contact* ps)
{
	ps->sz = 0;
	//置为空
	memset(ps->data, NULL, 10 * sizeof(struct PeoInfo));
}


//加载数据
void DownloadContact(struct Contact* ps)
{
	FILE* p = fopen("Contact.txt", "rb");
	if (NULL == p)
	{
		perror("加载数据失败\n");
		return;
	}
	
	while(feof(p))
	{
		struct Contact s;
		fscanf(p, "%s\t%d\t%s\t%s\t%s\n",
			ps->data[ps->sz].name,
			ps->data[ps->sz].age,
			ps->data[ps->sz].sex,
			ps->data[ps->sz].tele,
			ps->data[ps->sz].addr);
		ps->sz++;
	}
}


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

struct Contact* is_full(struct Contact* ps)
{
	if (sizeof(struct PeoInfo) == ps->sz)
	{
		//如果满了就增容
		struct PeoInfo* p = realloc(ps, sizeof(int) + (ps->sz / 2 + ps->sz) * sizeof(struct PeoInfo));
		if (NULL == p)
		{
			//判断调整空间是否出错
			perror("调整空间realloc:");
			return NULL;
		}
		return p;
	}
	return ps;
}

//void grow()
//{
//	struct PeoInfo* p = malloc(10*sizeof(struct PeoInfo));
//	if (NULL == p)
//	{
//		perror("起始开辟空间malloc:");
//	}
//}

//增加通讯录
void AddContact(struct Contact* ps)
{
	//if (0 == ps->sz)
	//{//调整空间
	//	grow(ps);
	//}
	// 
	//检查是否容量满了
	struct Contact* p = is_full(ps);
	if (NULL == p)
	{
		printf("空间错误\n");
		return;
	}
	printf("请输入联系人姓名：\n");
	scanf("%s", ps->data[ps->sz].name);
	printf("请输入联系人性别：\n");
	scanf("%s", ps->data[ps->sz].sex);
	printf("请输入联系人年龄：\n");
	scanf("%s", &ps->data[ps->sz].age);
	printf("请输入联系人电话：\n");
	scanf("%s", ps->data[ps->sz].tele);
	printf("请输入联系人住址：\n");
	scanf("%s", ps->data[ps->sz].addr);

	ps->sz++;
	printf("增加成功\n");
}


int is_empty(struct Contact* ps)
{
	if (0 == ps->sz)
	{
		return 0;
	}
	return 1;
}


int FindByName(struct Contact* ps, char name[])
{
	for (int i = 0; i < ps->sz; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			//寻找联系人存在
			return i;
		}
	}
	//不存在
	return -1;
}

//删除通讯录成员
void DelContact(struct Contact* ps)
{
	//判断通讯录是否为空
	int ret = is_empty(ps);
	if (0 == ret)
	{
		printf("通讯录为空\n");
		return;
	}
	//查找指定联系人
	char name[MAX_NAME];
	printf("请输入要删除的联系人姓名:\n");
	scanf("%s", name);
	int tmp = FindByName(ps, name);
	if (-1 == tmp)
	{
		printf("该联系人不存在\n");
	}
	//删除
	else
	{
		for (int i = tmp; i < ps->sz - 1; i++)
		{
			ps->data[i] = ps->data[i + 1];
		}
		ps->sz--;
		printf("删除成功\n");
	}
}



//查找联系人
void SearchContact(struct Contact* ps)
{
	int ret = is_empty(ps);
	if (0 == ret)
	{
		printf("通讯录为空\n");
		return;
	}

	char name[MAX_NAME];
	printf("请输入要查找的联系人姓名:\n");
	scanf("%s", name);


	int tmp = FindByName(ps, name);
	if (-1 == tmp)
	{
		printf("该联系人不存在\n");
	}
	else
	{
		printf("%s\t%d\t%s\t%s\t%s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%s\t%d\t%s\t%s\t%s\n",
			ps->data[tmp].name,
			ps->data[tmp].age,
			ps->data[tmp].sex,
			ps->data[tmp].tele,
			ps->data[tmp].addr);
	}

}



//修改联系人
void ModifyContact(struct Contact* ps)
{
	int ret = is_empty(ps);
	if (0 == ret)
	{
		printf("通讯录为空\n");
		return;
	}

	char name[MAX_NAME];
	printf("请输入要查找的联系人姓名:\n");
	scanf("%s", name);


	int tmp = FindByName(ps, name);
	if (-1 == tmp)
	{
		printf("该联系人不存在\n");
	}
	else
	{
		printf("请输入联系人名字\n");
		scanf("%s", ps->data[ret].name);
		printf("请输入联系人年龄\n");
		scanf("%d", &ps->data[ret].age);
		printf("请输入联系人性别\n");
		scanf("%s", ps->data[ret].sex);
		printf("请输入联系人电话\n");
		scanf("%s", ps->data[ret].tele);
		printf("请输入联系人住址\n");
		scanf("%s", ps->data[ret].addr);

		printf("修改成功\n");
	}

}


//打印展示
void ShowContact(const struct Contact* ps)
{
	int i = 0;
	printf("%s\t%d\t%s\t%s\t%s\n", "姓名", "年龄", "性别", "电话", "地址");
	for (i = 0; i < ps->sz; i++)
	{
		printf("%s\t%d\t%s\t%s\t%s\n",
			ps->data[i].name,
			ps->data[i].age,
			ps->data[i].sex,
			ps->data[i].tele,
			ps->data[i].addr);
	}
	printf("打印完毕\n");
}


//通讯录排序
int CmpByAge(const void* e1, const void* e2)
{
	return ((struct PeoInfo*)e1)->age - ((struct PeoInfo*)e2)->age;
}

void SortContact(struct Contact* ps)
{
	qsort(ps->data, ps->sz, sizeof(struct PeoInfo), CmpByAge);
}


//存储通讯录到文件中
void SaveContact(struct Contact* ps)
{
	//打开文件
	FILE* p = fopen("Contact.txt", "wb");
	if (NULL == p)
	{
		perror("SaveContact");
		return;
	}
	//写文件
	for (int i = 0; i < ps->sz; i++)
	{
		fprintf(p, "%s\t%d\t%s\t%s\t%s\n",
			ps->data[i].name,
			ps->data[i].age,
			ps->data[i].sex,
			ps->data[i].tele,
			ps->data[i].addr);
	}

	fclose(p);
	p = NULL;
}