#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


////正整数左移
//int main()
//{
//	int a = 4;
//	//00000000000000000000000000000100 - 整数原反补三码合一
//	int b = a << 1;
//	//00000000000000000000000000000010 - 整数原反补三码合一
//	printf("a = %d,b = %d\n",a,b);
//	return 0;
//}


////负整数左移
//int main()
//{
//	int a = -4;
//	//10000000000000000000000000000100 - 原码
//	//11111111111111111111111111111011 - 反码
//	//11111111111111111111111111111100 - 补码
//	int b = a << 1;
//	//11111111111111111111111111111000 - 补码
//	//11111111111111111111111111110111 - 反码
//	//10000000000000000000000000001000 - 原码
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}

//正整数右移
//int main()
//{
//	int a = 4;
//	//00000000000000000000000000000100 - 整数原反补三码合一
//	int b = a >> 1;
//	//00000000000000000000000000000010 - 整数原反补三码合一
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}\\//正整数右移

////负整数右移
//int main()
//{
//	int a = -4;
//	//10000000000000000000000000000100 - 原码
//	//11111111111111111111111111111011 - 反码
//	//11111111111111111111111111111100 - 补码
//	int b = a >> 1;
//	//11111111111111111111111111111110 - 补码
//	//11111111111111111111111111111101 - 反码
//	//10000000000000000000000000000010 - 原码
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}

////按位（二进制位）与
//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011 - 补码
//	int b = -5;
//	//10000000000000000000000000000101 - 原码
//	//11111111111111111111111111111010 - 反码
//	//11111111111111111111111111111011 - 补码
//
//	printf("%d\n",a&b);
//	return 0;
//}

////按位（二进制位）或
//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011 - 补码
//	int b = -5;
//	//10000000000000000000000000000101 - 原码
//	//11111111111111111111111111111010 - 反码
//	//11111111111111111111111111111011 - 补码
//
//	printf("%d\n", a | b);
//	return 0;
//}

//按位（二进制位）异或
//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011 - 补码
//	int b = -5;
//	//10000000000000000000000000000101 - 原码
//	//11111111111111111111111111111010 - 反码
//	//11111111111111111111111111111011 - 补码
//
//	printf("%d\n", a ^ b);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = a = a + 1;
//	//相当于是b在初始化的时候，直接把改变过后的a的数值
//	//给到变量b，而在这之前变量a的数值从0已经变为了1
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	a += 1;
//	//相当于是a = a + 1;的简化
//	printf("a = %d\n",a);
//	int b = 2;
//	b *= 3;//相当于是b = b * 3;的简化
//	printf("b = %d\n", b);
//	int c = 10;
//	c >>= 1;//相当于是c = c >> 1;的简化
//	printf("c = %d\n", c);
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int* pa = &a;//取出变量a的地址放入pa这个整形指针变量当中
//	//int*(*说明pa变量是一个指针，而int说明指针的类型是整形)
//	//这里面的int*是个整体，并不是int类型和*（解引用操作符）的复合
//	printf("%p\n",pa);//打印pa的数值，pa是一个整形指针 - %p是打印地址的格式
//	printf("%p\n",&a);//打印变量a的地址，取出变量a的地址并且打印出来
//	printf("%d\n",*(&a));//打印变量a的值，&a是取出a地址
//	//*（解引用操作符）是把找到a的地址并且打印里面的数据内容
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	printf("%d\n",sizeof(a));
//	printf("%zu\n",sizeof(a));
//	//既然sizeof是一个操作符，那么求变量a的大小的时候后方的括号是不是可以不用带？
//	printf("%zu\n",sizeof a);//事实证明，求变量的时候可以不带括号
//	//那么求一个类型呢？
//	printf("%zu\n", sizeof(int));
//	//printf("%zu\n", sizeof int);//会报错，对于类型来说，需要带括号
//	return 0;
//}

int main()
{
	int a = 5;
	int b = 2;
	printf("%zu\n",sizeof(a = b + 4));
	//如果sizeof当中的表达式语句进行计算了，那么变量a的数值应该是6
	printf("%d\n",a);
	return 0;
}