

//stdio - std input  output
//.h - header
//标准输入输出
////如果想在屏幕上打印数据，可以使用printf这个库函数
////printf是一个C语言编译器提供的库函数
////库函数的使用，要包含头文件
//int main()
////int是函数的返回类型
////解释：
////main函数是程序的入口
////一个工程中main函数有且仅有一个
//{
//	printf("hello world\n");
//	printf("he he\n");
//	return 0;
//	//C语言有一个约定；
//  //返回0表示正常返回
//  //返回的是非0，表示异常返回
//}


//有时候我们会遇见这些写法
//
// 写法一：比较古老的写法 
//void main()
//{
//	return 0;
//}
//写法二：不标准的写法
//main()
//{
//
//}
//写法三：
//int main(void)//这里的void表是main函数不需要参数
//{
//	return 0;
//}


//%d  打印10进制的整数
//int main()
//{
//	printf("%d\n",sizeof(char));//1
//	printf("%d\n",sizeof(short));//2
//	printf("%d\n",sizeof(int));//4
//	printf("%d\n",sizeof(long));//4
//	printf("%d\n",sizeof(long long));//8
//	printf("%d\n",sizeof(float));//4
//	printf("%d\n",sizeof(double));//8
//
//	return 0;
//}

//变量
//int main()
//{
//	int age = 10;
//	float weight = 45.5f;
//	//数据后跟上一个f才会被认定为是float类型的
//	//如果数据的后面不跟f，会被编译器自动认定为double类型的
//	return 0;
//}

#include <stdio.h>

int global = 2019;//全局变量
int main()
{
	int local = 2018;//局部变量
	//下面定义的global会不会有问题？
	int global = 2020;//局部变量
	printf("global = %d\n", global);
	return 0;
}

