#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct Piont
//{
//	int x;
//	int y;
//};
//struct book//(��ǩ����)
//{//��Ա�б�
//	char name[20];
//	double price;
//	struct Piont p;//Ƕ�׵��ýṹ��
//	//�ṹ������Ƕ�׵Ľṹ����Ҫ����������
//};//�����б������������ʱ�򲻴���


//int main()
//{
//	struct Piont p1 = { 1,2 };
//	printf("%d %d\n",p1.x,p1.y);
//	struct book b2 = { "С����",15.52,{10,20} };
//	printf("%s %lf %d %d\n",b2.name,b2.price,b2.p.x,b2.p.y);
//	//Ƕ�׽ṹ�嵱�У���ӡ�ṹ������Ľṹ���ʱ����Ҫ���ҵ�
//	//�ṹ������Ľṹ�������Ȼ�����Ҷ�Ӧ�ĳ�Ա
//	struct book b3 = {.name="����",.p.x=10 };
//	printf("%s %lf %d %d\n", b3.name, b3.price, b3.p.x, b3.p.y);
//	return 0;
//}

//int main()
//{
//	struct book b3 = { .name = "����",.p.x = 10 };
//	printf("%s %lf %d %d\n", b3.name, b3.price, b3.p.x, b3.p.y);
//	return 0;
//}


struct list
{
	char name[20];
	int data[10];
};
void Print1(struct list s)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ",s.data[i]);
		//ͨ��.���ҳ�Ա����
	}
}
void Print2(struct list* ps)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->data[i]);
		//ͨ��->�ҳ�Ա����
	}
}
int main()
{
	struct list a = { "giegie",{1,2,3} };
	Print1(a);//ֵ����
	Print2(&a);//ַ����
	return 0;
}