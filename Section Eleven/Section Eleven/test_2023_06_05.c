#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stddef.h>

//
//struct Person
//{
//	char name[5];//姓名
//	int age;//年龄
//	double hight;//身高
//	char sex[5];//性别
//};//分号不能丢



//struct Student
//{
//	char name[5];//姓名
//	int age;//年龄
//	char sex[5];//性别	
//	int issue[20];//学号
//}Xixi,*Ps;
////不完全声明，在结构体建立的时候直接在后面的分号之前跟上要创建的变量名或指针名等
////这里创建的是全局变量
//
//*Ps = &Xixi;


////匿名结构体
//struct
//{
//	int a;
//	char arr[2];
//	float c;
//}stu = { 1,{'a','c'},1.2f };


//报错
//stu = { 1,{'a','c'},1.2f };
//
//int main()
//{
//	stu = { 1,{'a','c'},1.2f };
//	return 0;
//}


//依然报错，a和*p的类型编译器认为是不一样的
//struct
//{
//	int a;
//	char arr[2];
//	float c;
//}a;
//
//struct
//{
//	int a;
//	char arr[2];
//	float c;
//}*p;
//
//p = &a;
//
//int main()
//{
//	p = &a;
//	return 0;
//}

//int main()
//{
//	//(struct Person)/*这是对象A的类型*/          ( A )/*这是对象变量名*/;
//	// (structs是结构体关键字)
//	//(Person是结构体标签)
//	struct Person A;//这里创建的变量是局部变量
//
//	
//	return 0;
//}

//结构体自引用，错误写法
//struct Node
//{
//	int data;
//	struct Node next;
//};
//
//int main()
//{
//	return 0;
//}


//struct Node
//{
//	int data;
//	struct Node* next;
//};



//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	Node node;
//	return 0;
//}



//struct coordinates
//{
//	int x;
//	int y;
//}p = {3,5};//声明类型的同时定义变量
////p是全局变量
//struct coordinates A = { 2,5 };
////在主函数外声明并且定义的结构体变量是全局变量
//
//
//struct location
//{
//	struct coordinates;
//	float hight;
//}ps = { {1,6},1.3f };//结构体的嵌套初始化
//
//
//int main()
//{
//	//在主函数内声明并且定义的结构体变量是局部变量
//	struct coordinates X = {2,5};
//	struct location s = { {1.56},3.22f };//结构体的嵌套初始化
//	return 0;
//}



//struct S1
//{
//	char a;
//	int b;
//	char c;
//};
//
//int main()
//{
//	struct S1 s1 = {'s',4,'x'};
//	printf("%d\n",sizeof(s1));//12
//	printf("%d\n",offsetof(struct S1,a));//0
//	printf("%d\n",offsetof(struct S1,b));//4
//	printf("%d\n",offsetof(struct S1,c));//8
//	return 0;
//}



//#pragma pack(1)//设置默认对其数为1
//struct S1
//{
//	char a;
//	int b;
//	char c;
//};
//#pragma pack()//恢复默认对其数
//int main()
//{
//	struct S1 s = { 's',4,'a' };
//	printf("%d\n",sizeof(struct S1));//6
//	return 0;
//}


struct A
{
	int a : 2;
	int b : 5;
	int c : 10;
	int d : 30;
};

int main()
{
	printf("%d\n",sizeof(struct A));// 8
	return 0;
}