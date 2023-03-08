#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//关于scanf函数的一些问题
//scanf函数的一般形式为： scanf("格式控制字符串", 地址表列);
//1.scanf的格式控制字符串当中，两个相邻的变量，录入时
//格式化设置时中间如果是通过空格隔开的，在输入的时候就需要通过空格来把输入
//的两个数据隔开，如果使用的是逗号，输入时就需要通过逗号来隔开数据
//int main()
//{
//	int a ;
//	int b;
//	scanf("%d %d",&a,&b);
//	printf("a = %d , b = %d \n",a,b);
//
//	return 0;
//}

//2.格式化的时候在后面加了一个\n的转义字符
//int main()
//{
//	int a ;
//	int b;
//	scanf("%d %d\n",&a,&b);
//	printf("a = %d , b = %d \n",a,b);
//
//	return 0;
//}

////3.输出的时候输出函数的输出顺序是按照输出函数的变量顺序来的
//int main()
//{
//	int a;
//	int b;
//	scanf("%d %d", &a, &b);
//	printf("a = %d , b = %d \n", b, a);
//
//	return 0;
//}

//4.放在while循环当中的连环输入

//方式一
//int main()
//{
//	int a;
//	while (scanf("%d",&a) == 1)
//	{
//	
//		printf("a = %d\n",a);
//	}
//
//	return 0;
//}

//方式二
//int main()
//{
//	int a;
//	while(scanf("%d",&a)!=EOF)
//	{
//
//		printf("a = %d\n", a);
//	}
//
//	return 0;
//}

//scanf的返回值
//int main()
//{
//	int a;
//	int b;
//	int ret = scanf("%d %d",&a,&b);
//	printf("ret = %d\n",ret);
//	printf("a = %d\n",a);
//	printf("b = %d\n",b);
//	return 0;
//}


