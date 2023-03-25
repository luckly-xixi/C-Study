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


//递归

//void Print(int x)
//{
//	if (x > 9 )
//	{//判断条件
//		Print(x / 10);
//	}
//	printf("%d ", x % 10);

//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	Print(a);//递归函数
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//传递1234
//	//Print(a);//递归函数
//	{//第一次调用此时a=1234
//		printf("%d ", a % 10);//输出4
//		a = a / 10;//此时a=123并且传递给Print函数
//		if (a > 9)
//		{//第二次调用此时a=123
//			printf("%d ", a % 10);//输出3
//			a = a / 10;//此时a=12并且传递给Print函数
//			//Print(x / 10);
//				if (a > 9)
//				{//第三次调用此时a=12并且传递给Print函数
//					printf("%d ", a % 10);//输出2
//					a = a / 10;//此时a=1并且传递给Print函数
//					//Print(x / 10);
//					if (a > 9)
//					{//第四次调用此时a=1并且传递给Print函数
//						//Print(a/ 10);因为不满足if的条件	
//					}
//					printf("%d ", a % 10);
//				}
//		}
//	}
//	return 0;
//}


//编写函数，求字符串的长度
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//编写函数，不创建临时变量，求字符串的长度
//int My_strlen(char* str)
//{
//	if (*str != '\0')
//		//return 1+My_strlen(str++);
//		//注意，这里的str++通过查看监视始终是‘a’这个字符
//		//对于str++是先使用str然后再++（后置++）
//		//使用的始终是str的原始数值，++没有作用
//		//其次++str的话，str的=记录的值是改变了的，会导致遗留问题
//		return 1+My_strlen(str+1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	printf("%d\n",My_strlen(arr));
//	return 0;
//}



//求n的阶乘

//int Fac(int x)
//{
//	if (x <= 1)
//		return 1;
//	else
//		return x*Fac(x-1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	printf("%d\n",Fac(n));
//	return 0;
//}


//斐波那契数列
//递归
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
////迭代
//int Fib1(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int x = 0;
//	scanf("%d",&x);
//	printf("%d\n",Fib1(x));
//	return 0;
//}

