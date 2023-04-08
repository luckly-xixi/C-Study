#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct Piont
//{
//	int x;
//	int y;
//};
//struct book//(标签名字)
//{//成员列表
//	char name[20];
//	double price;
//	struct Piont p;//嵌套调用结构体
//	//结构体里面嵌套的结构体需要给定变量名
//};//变量列表可以在声明的时候不创建


//int main()
//{
//	struct Piont p1 = { 1,2 };
//	printf("%d %d\n",p1.x,p1.y);
//	struct book b2 = { "小黑子",15.52,{10,20} };
//	printf("%s %lf %d %d\n",b2.name,b2.price,b2.p.x,b2.p.y);
//	//嵌套结构体当中，打印结构体里面的结构体的时候，需要先找到
//	//结构体里面的结构体变量，然后再找对应的成员
//	struct book b3 = {.name="坤坤",.p.x=10 };
//	printf("%s %lf %d %d\n", b3.name, b3.price, b3.p.x, b3.p.y);
//	return 0;
//}

//int main()
//{
//	struct book b3 = { .name = "坤坤",.p.x = 10 };
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
		//通过.来找成员变量
	}
}
void Print2(struct list* ps)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->data[i]);
		//通过->找成员变量
	}
}
int main()
{
	struct list a = { "giegie",{1,2,3} };
	Print1(a);//值传递
	Print2(&a);//址传递
	return 0;
}