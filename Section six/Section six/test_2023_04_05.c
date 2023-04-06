#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	char* pc = &n;
//	int* pi = &n;
//	*pc = 0; 
//	*pi = 0; 
//	return 0;
//}

//int main()
//{
//	int* p;//创建指针变量p
//	//未初始化，此时指针内的内容是随机值
//	//也就是随机的地址，导致随机访问
//	printf("%p\n",p);//在此使用
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 0 };
//	int i = 0;
//	for (i = 0; i <= 5; i++)
//	{//这里的数组的下标是从0~4，当i=5时造成越界访问
//		//同时如果i<0的时候也会导致越界访问
//		arr[i] = 0;
//	}
//	return 0;
//}


//int* test()
//{
//	int num = 200;
//	return &num;
//	//num是一个局部变量，出了test函数
//	//会销毁
//}
//int main()
//{
//	int* p = test();
//	printf("%p\n",p);
//	return 0;
//}

//int main()
//{
//	int arr[4];
//	int* p = NULL;
//	
//	for (p=arr; p<&arr[4];)
//	{
//		*p++ = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[4];
//	int* p = NULL;
//
//	for (p = &arr[4]; p >= &arr[0]; p--)
//	{
//		*p = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//存放变量a的地址，叫做一级指针
//	int** pp = &p;
//	//存放一级指针变量的地址，叫做二级指针
//	return 0;
//}

//一维数组模拟二维数组
int main()
{
	int* arr1[3] = { 1,1,1};
	int* arr2[3] = { 3,3,3};
	int* arr3[3] = { 5,5,5};
	int* arr4[3] = { arr1,arr2,arr3 };
	//创建整形指针数组，并存放值
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 3; j++)
		{
			printf("%d ", *((*arr4+i)+j));
		}
	}
	 
	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j < 3; j++)
	//	{
	//		printf("%d ",arr4[i][j]);//arr4[i][j]相当于是*((*arr4+i)+j)
	//	}
	//}

	return 0;
}