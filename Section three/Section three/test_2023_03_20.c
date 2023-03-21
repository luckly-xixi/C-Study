#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//
//int Max(int x, int y)//这里的x，y就是形式参数
//{//这个就是自定义函数
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 2;
//	int b = 4 ;
//	Max(a,b);//调用自定义函数
//	//这里的a，b就是实际参数
//	return 0;
//}
//
//
//
//void Swap(int* x ,int* y)//接受的也是变量的地址
//{//Swap函数的实现，这个函数就是自定义函数
//	int z = 0;
//	z =  *x;
//	*x = *y;
//	*y = z;
//}
//int main()
//{
//	int a = 6;
//	int b = 3;
//	printf("交换前的a = %d  b = %d\n", a,b);
//	Swap(&a,&b);//调用Swap函数
//	//传递的是变量的地址
//	printf("交换过后的a = %d  b = %d\n",a,b);
//	return 0;
//}


//函数如果不写返回值  函数会默认返回一个值
//一般是最后一条指令产生的结果
//int test()
//{
//	int a = 4;
//	int b = 6;
//	int c = a + b;
//}
//
//
//int main()
//{
//	printf("%d\n",test());
//	return 0;
//}

// 
////链式访问
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//void Print(int x)
//{
//	printf("%d",x);
//}
//int main()
//{
//	int a = 6;
//	int b = 3;
//	Print(Max(a,b));
//	//把Max函数的返回值作为参数传给Print函数
//	//相当于是
//	/*int c = Max(a, b);
//	Print(c);*/
//	return 0;
//}

////嵌套调用
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 6;
//	int b = 3;
//	Max(a, b);
//	//在main函数当中调用Max函数
//	return 0;
//}

