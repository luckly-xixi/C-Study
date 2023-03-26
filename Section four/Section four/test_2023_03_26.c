#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//int main()
//{ //实例化数组
//	int arr1[10] = { 1,2,3 };
//	int arr2[] = {1,2,3,4,5,6};
//	int arr3[] = { 1,2,3,4 };
//	//初始化数组
//	return 0 ;
//}

//int main()
//{
//	int n = 2;
//	int arr[n] = { 1,2 };
//	//变长数组实例化，但是vs2019不支持C99语法
//	//可以根据变量n的大小来指定数组长度
//	return 0;
//}

//int main()
//{
//	char arr1[4] = { 'a','b','c','d'};
//	//指定数组长度并完全初始化
//	char arr2[4] = { 'a','b','c'};
//	//指定数组长度但是并未完全初始化
//	char arr3[] = "abcd";
//	//不指定数组长度
//	char arr4[] = {'a','b','x'};
//	return 0;
//}

//int main()
//{
//	char arr1[3] = "acv";
//	char arr2[3] = "a";
//	char arr3[3] = {'a','v','c'};
//	char arr4[3] = {'a','v'};
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//	printf("%d\n",strlen(arr3));
//	printf("%d\n",strlen(arr4));
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };//数组的不完全初始化
//	  //计算数组的元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对数组内容赋值,数组是使用下标来访问的，下标从0开始。所以：
//	int i = 0;//做下标
//	for (i = 0; i < 10; i++)//这里写10,也可与<=9
//	{
//		arr[i] = i;
//	}
//	//输出数组的内容
//	for (i = 0; i < 10; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//计算数组的个数
//	for (i = 0; i < sz; ++i)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//		//%p打印地址格式
//	}
//	return 0;
//}

//int main()
//{
//	//完全初始化
//	//在这里面3代表行，4代表列
//	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	//不完全初始化
//	int arr2[2][2] = { 1,2,3 };
//	//二维数组指定数组长度的时候可以省略掉行
//	int arr3[][2] = { {1,2},{3,4} };
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	//打印数组
//	int j = 0;//控制列
//	for (j = 0; j < 4; j++)
//	{
//		int i = 0;//控制行
//		for (i = 0; i < 3; i++)
//		{
//			printf("%d ", arr[i][j]);
//			//通过下标引用操作符和i，j来找到对应的元素
//		}
//		printf("\n");
//	}
//	//int i = 0;//控制行
//	//for (i = 0; i < 3; i++)
////{
////	int j = 0;//控制列
////	for (j = 0; j < 4; j++)
////	{
////		printf("%d ", arr[i][j]);
////		//通过下标引用操作符和i，j来找到对应的元素
////	}
////	printf("\n");
////}
//	return 0;
//}


//int main()
//{
//	int arr[3][4];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}

//一维数组的越界访问
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	//下标是0~4五个元素
//	int i = 0;
//	for (i=0; i<=5; i++)
//	{//这里的元素下表是0~5六个元素，最后一个元素是越界访问了
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//二维数组的越界访问
int main()
{
	int arr[2][3] = { 1,2,3,4,5 };
	//这里的元素行是0~1，列是0~2，总元素个数是6
	int i = 0;
	for (i = 0; i < 2; i++)
	{//行没错
		int j = 0;
		for (j = 0; j <= 3; j++)
		{//列多访问一个
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}