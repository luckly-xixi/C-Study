#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stddef.h>

//
//struct Person
//{
//	char name[5];//����
//	int age;//����
//	double hight;//���
//	char sex[5];//�Ա�
//};//�ֺŲ��ܶ�



//struct Student
//{
//	char name[5];//����
//	int age;//����
//	char sex[5];//�Ա�	
//	int issue[20];//ѧ��
//}Xixi,*Ps;
////����ȫ�������ڽṹ�彨����ʱ��ֱ���ں���ķֺ�֮ǰ����Ҫ�����ı�������ָ������
////���ﴴ������ȫ�ֱ���
//
//*Ps = &Xixi;


////�����ṹ��
//struct
//{
//	int a;
//	char arr[2];
//	float c;
//}stu = { 1,{'a','c'},1.2f };


//����
//stu = { 1,{'a','c'},1.2f };
//
//int main()
//{
//	stu = { 1,{'a','c'},1.2f };
//	return 0;
//}


//��Ȼ����a��*p�����ͱ�������Ϊ�ǲ�һ����
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
//	//(struct Person)/*���Ƕ���A������*/          ( A )/*���Ƕ��������*/;
//	// (structs�ǽṹ��ؼ���)
//	//(Person�ǽṹ���ǩ)
//	struct Person A;//���ﴴ���ı����Ǿֲ�����
//
//	
//	return 0;
//}

//�ṹ�������ã�����д��
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
//}p = {3,5};//�������͵�ͬʱ�������
////p��ȫ�ֱ���
//struct coordinates A = { 2,5 };
////�����������������Ҷ���Ľṹ�������ȫ�ֱ���
//
//
//struct location
//{
//	struct coordinates;
//	float hight;
//}ps = { {1,6},1.3f };//�ṹ���Ƕ�׳�ʼ��
//
//
//int main()
//{
//	//�����������������Ҷ���Ľṹ������Ǿֲ�����
//	struct coordinates X = {2,5};
//	struct location s = { {1.56},3.22f };//�ṹ���Ƕ�׳�ʼ��
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



//#pragma pack(1)//����Ĭ�϶�����Ϊ1
//struct S1
//{
//	char a;
//	int b;
//	char c;
//};
//#pragma pack()//�ָ�Ĭ�϶�����
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