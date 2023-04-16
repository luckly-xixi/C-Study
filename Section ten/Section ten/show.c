#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//字符指针
//int main()
//{
//	//方式一:通过指针简介存放字符
//	char a = 'w';
//	char* p = &a;
//	*p = 'a';
//	//方式二：直接在指针当中存放字符串
//	char* pt = "abcdef";
//	//因为指针pt当中存放的是常量字符串，是不可以被修改的
//	//所以一般写为：const char* pt = "abcdef";
//	*pt = 'a';
//	return 0;
//}


//通过数组的形式接受参数
void print_arr1(int arr[3][5]/*这里的3可以省略但是5不可以省略*/, int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}


//通过数组指针的形式接受参数，并通过数组形式输出
//void print_arr2 (int(*arr)[5]/*这里的5可以省略*/, int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}


//通过数组指针的形式接受参数，并通过指针偏移量的形式输出
void print_arr2(int(*arr)[5]/*这里的5可以省略*/, int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf("%d ", *(*(arr+i)+j));
		}
		printf("\n");
	}
}

//数组指针
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	print_arr1(arr, 3, 5);
//	//数组名arr，表示首元素的地址
//	//但是二维数组的首元素是二维数组的第一行
//	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//	//可以数组指针来接收
//	print_arr2(arr, 3, 5);
//	return 0;
//}

//一维数组传参
//void test(int arr[10]/*方块中数字可以省略*/)
//{}
//void test(int* arr/*一维数组本质就是传递数组首元素的地址*/)
//{}


//一维指针数组传参
//void test(int* arr[]/*方块中的数字可省略*/)
//{}
//void test(int** arr)
//{}//一维指针数组本质传递的是数组的首元素地址，也就是指针的地址
////所以用二级指针接收
//
//int main()
//{
//	int* arr2[20] = { 0 };
//	test(arr2);
//}


//void test(int arr[][5]/*方块中只能省略行不可省略列*/)
//{}
//总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
//因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
//这样才方便运算。

//void test(int(*arr)[5])
//{}//二维数组传参，传递过来的是一个一维数组的地址，也就是一维数组的指针，所以只能通过指针接收
////并且是一个数组指针
//
//void test(int* p)
//{}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int arr[4];
//	test(&a);//1.变量a的地址
//	test(p);//2.指针（存放变量a的地址）
//	test(arr);//3.一维数组的数组名（首元素的地址）
//	return 0;
//}

//void test(int** pp)
//{}
//int main()
//{
//	int a = 2;
//	int* p = &a;
//	int** pp = &p;
//	int* arr[5];
//	test(&p);//1.一级指针的地址
//	test(pp);//2.二级指针（存放了一级指针的地址）
//	test(arr);//3.一维指针数组（存放指针的数组）的数组名（首元素地址）
//	return 0;
//}

//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
////函数指针
//int main()
//{
//	int(*p1)(int, int) = Add;
//	int(*p2)(int, int) = &Add;
//	int(*p3)(int x, int y) = Add;
//	int(*p4)(int x, int y) = &Add;
//	//p1,p2,p3,p4都是函数指针，并且Add和&Add都是函数的地址
//	//int sum = (*p2)(2, 3);*可以省略
//	int sum = p2(2, 3);
//	printf("%d\n",sum);
//	return 0;
//}
//


