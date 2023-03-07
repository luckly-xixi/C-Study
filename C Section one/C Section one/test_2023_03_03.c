#define _CRT_SECURE_NO_WARNINGS 1


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

//int global = 2019;//全局变量
//int main()
//{
//	int local = 2018;//局部变量
//	//下面定义的global会不会有问题？
//	int global = 2020;//局部变量
//	printf("global = %d\n", global);
//	return 0;
//}


//计算两个整数的和
//int main()
//{
//
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入
//	scanf("%d %d",&num1,&num2);
//	//& - 取地址
//	//计算
//	sum = num1 + num2;
//	//输出
//	printf("%d",sum);
//	
//	return 0;
//}



//变量的作用域
//局部变量
//int main()
//{
//	int a = 10;
//	{
//		//作用域开始
//		int b = 20;
//		printf("a = %d,b = %d\n",a,b);
//		//变量b只能在该作用域当中使用
//		//作用域结束
//	}
//	printf("a = %d\n",a);
//	//printf("b = %d\n",b);
//	//报错，因为变量b作用域已经结束了
//	return 0;
//
//}

////全局变量
//int a = 5;
//
//void test()
//{
//	printf("%d\n",a);
//	//全局变量a可以在该作用域使用
//}
//int main()
//{
//	printf("%d\n",a);
//	//全局变量a可以在该作用域使用
//	test();
//	return 0;
//}

//跨文件的全局变量
//extern int val_global;
////extern 是专门用来声明外部符号的
//int main()
//{
//	printf("%d\n",val_global);
//	return 0;
//}


//变量的声明周期
//局部变量
//int main()
//{
//	int a = 10;
//	{
//		//作用域开始，变量b的生命周期开始
//		int b = 20;
//		printf("a = %d,b = %d\n", a, b);
//		//变量b只能在该作用域当中使用
//		//作用域结束，变量b的生命周期结束
//	}
//	printf("a = %d\n",a);
//	//printf("b = %d\n",b);
//	//报错，因为变量b 生命周期已经结束了
//	return 0;
//}


//常量

//int main()
//{
//	//1.字面常量
//	//100;
//	//3.14;
//	//字面上的数值不可被修改
//	//3.14 = 2;
//
//	//2.const修饰的常变量
//	int a = 5;
//	a = 10;
//	printf("a = %d\n",a);//输出a = 10
//	//在这里变量a的数值可以更改原本是5后被改为10
//	//说明变量a是一个变量
//	const int num = 8;
//	//当变量num被const修饰时具有了常量的不可被修改属性
//	//但是它本质上还是个变量
//	int arr1[5] = { 0 };
//	int arr2[num] = { 0 };
//	return 0;
//}



//#define MAX 100
//int main()
//{
//	printf("MAX = %d\n",MAX);//输出为MAX = 100
//	//MAX = 20;//err   E0137	表达式必须是可修改的左值
//	//说明MAX是不可被修改的，所以MAX也是常量
//	int arr[MAX] = { 0 };//未报错
//	return 0;
//}


////枚举常量 一一列举
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n",MALE);//0
//	printf("%d\n",FEMALE);//1
//	printf("%d\n",SECRET);//2
//
//	int arr[FEMALE] = {0};//可以正常运行
//	//MALE = 20;//E0137	表达式必须是可修改的左值
//	//说明MALE是一个常量不可被修改
//
//	return 0;
//}



//int main()
//{
//	char arr1[] = "abc";//字符串的常用写法
//	//末尾隐藏了一个\0的转义字符
//	char arr2[] = {'a','b','c'};
//	//末尾没有转义字符
//	char arr3[] = "abc\0def";//遇见\0停止
//	char arr4[] = { 'a','b','c' ,'\0'};
//	char arr5[] = { 'a','b','c' ,'\0','d'};//遇见\0停止
//	
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	printf("%s\n",arr3);
//	printf("%s\n",arr4);
//	printf("%s\n",arr5);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));
//	printf("%d\n", strlen(arr4));
//	printf("%d\n", strlen(arr5));
//	//strlen是一个库函数，计算字符串长度
//	return 0;
//}

//Add函数
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int x = 1;
//	int y = 2;
//	int sum = Add(1, 2);
//	//函数的调用，并接收其返回值
//	printf("%d\n",sum);
//	return 0;
//
//}


//数组

//int main()
//{
//	//不完全初始化，剩余的数值为0
//	int arr1[10] = { 0 };
//	int arr2[10] = { 1,2,3 };
//	//完全初始化
//	int arr3[5] = { 1,2,3,4,5 };
//
//	//还有一种叫做变长数组（使用变量来指定数组的定义但是不能初始化），c99的语法
//	//int n = 3;
//	//int arr4[n];
//
//	return 0;
//}

//int main()
//{
//	int arr1[5] = {1,2,3,4,5};
//
//	printf("%d\n",arr1[3]);
//	return 0;
//}


//int main()
//{
//	printf("%d\n", 8 / 2);
//	printf("%d\n", 7 / 2);
////正常情况下，除号的除法运算结果
////如果是没有小数的时候即为商
////如果结果是小数的话，结果是取整数部分，不会通过小数来进位
////也就是说只取整数部分的结果
//	printf("%lf\n", 7.0 / 2);
//	printf("%lf\n", 7 / 2.0);
//	printf("%lf\n", 7.0 / 2.0);
//	//要使结果为小数，那么需要除号两边至少有一个数据是小数
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 8 % 2);
//	printf("%d\n", 7 % 2);
//	//取余就是取两个数经过除法运算后的余数
//	return 0;
//}

//int main()
//{
//	//+=
//	int a = 0;
//	a = a + 2;
//	a += 2;
//	//-=
//	int b = 0; 
//	b = b - 2;
//	b -= 2; 
//	//*=
//	int c = 0;
//	c = c * 2; 
//	c *= 2;//相当于上面的c = c * 2; 
//	//......其他的复合操作符类比上面
//	return 0;
//}


//int main()
//{
//	int a = 20;int arr1[] = {1,2,3,4,5};
//	printf("%d\n",sizeof(a));
//	printf("%d\n",sizeof a);
//	//sizeof是一个操作符，所以求变量的大小的时候他的括号可以去掉
//	printf("%d\n",sizeof(int));
//	//也可以求类型所占空间大小
//	//printf("%d\n",sizeof int);//语法错误
//	//但是不能去掉括号
//	printf("%d\n",sizeof(arr1));
//	//所求的是数组的总大小
//	printf("%d\n", sizeof(arr1[0]));
//	//所求的是数组下标为0的元素的大小
//	printf("%d\n", sizeof(arr1)/sizeof(arr1[0]));
//	//求的是数组里面的元素个数
//	return 0;
//}

//int main()
//{
//	//求俩个数字的最大值
//	int a = 1;
//	int b = 2;
//	//exp1 ? exp2 : exp3
//	int m = (a > b ? a : b);
//	//这个操作符的作用就是，exp1的判断是真，那么exp2的结果就是整个表达式的结果
//	//否则（也就是exp1是假），exp3的结果是整个表达式的结果
//	printf("%d\n",m);
//	return 0;
//}
//
//int main()
//{
//	int a = 2;
//	int b = 3;
//	int c = 0;
//	int x = (a = b - c, b = c + a, c = a + b, a = a + b + c);
//	//			a=3			b=3		c=6			a=12
//	//exp1, exp2, exp3, …expN
//	//逗号表达式：
//	//表达式从左到右以此计算，但是最后一个表达式的结果是整个表达式的结果
//	printf("%d\n",x);
//	return 0;
//}

//int Add(int x,int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int arr1[] = {1,2,3,4,5};//这里面的arr1[]的[]就是下标引用操作符
//	printf("%d\n",Add(arr1[0], arr1[2]));//这里面的Add()当中的()就是
//	//函数调用操作符
//	return 0;
//}


//typedef unsigned int uint;
//int main()
//{
//	uint a = 9;
//	//这里的uint就是unsigned int 的简化
//	//在上方我们给其简化（重命名为uint）
//	printf("%d\n",a);
//	
//	return 0;
//}

//static修饰局部变量
//void test()
//{
//	//int a = 1;
//	static int a = 1;
//	a++;
//	printf("%d ",a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//static修饰全局变量

//extern int v_loge ;
//int main()
//{
//	printf("%d\n",v_loge);
//	return 0;
//}

//static修饰函数
//extern int Add(int x, int y);
//int main()
//{
//	int a = 2;
//	int c = 3;
//	printf("%d\n",Add(a,c));
//	return 0;
//}

//
////#define定义的常量
//#define MAX 100
////#define定义的是常量
//int main()
//{
//	printf("%d\n",MAX);
//	//可以直接打印出来
//	int arr[MAX] = {0};
//	//可以用做数组的定义
//	return 0;
//}

////#define定义的宏
//#define ADD(X,Y) ((X)+(Y))
//
////Add函数
//int Add(int x,int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 2;
//	int b = 4;
//	int sum1 = Add(a,b);
//	printf("%d\n",sum1);
//	//使用定义的宏
//	int sum2 = ADD(a, b);
//	printf("%d\n",sum2);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int类型的内存大小是四个字节
//	printf("%p\n",&a);
//	//& - 是取地址，意思是去除后面变量的地址
//	// 而取地址取出的是变量a的第一个字节空间的地址
//	//%p是以输出地址的形式格式化输出
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;//int*当中*说明变量p是一个指针，而int说明该指针指向的
//	//对象是int类型的
//	//取出变量a的地址存放在指针变量p当中
//	printf("%d\n", *p);
//	printf("%d\n", p);
//
//	printf("%p\n", p);
//	*p = 20;
//	//*p中的*是解引用操作符，意思是将p地址里的内容取出来输出
//	printf("%d\n",*p);
//	return 0;
//}
//
//int main()
//{
//	printf("%zu\n",sizeof(char*));
//	printf("%zu\n",sizeof(short*));
//	printf("%zu\n",sizeof(int*));
//	printf("%zu\n",sizeof(long*));
//	printf("%zu\n",sizeof(float*));
//	printf("%zu\n",sizeof(double*));
//
//	return 0;
//}
//
//struct Stu
////struct是结构体的关键字，Stu是结构体名字
//{
//	//里面放结构体变量，一般是描述对象的相关属性
//};//大括号后面要加；


struct Stu
{
	char name[20];//名字
	int age;//年龄
	char sex[5];//性别
	char id[15];//学号
};

int main()
{
	struct Stu s = {"张三",19 ,"man","11232324"};
	//对象s的实例化，按照上方结构体的创建输入相对应的属性
	printf("%s %d %s %s\n",s.name,s.age,s.sex,s.id);
	//结构体的打印（访问）需要通过结构体变量名.成员属性
	struct Stu* ps = &s;
	printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age, ps->sex, ps -> id);
	//结构体的访问通过->操作符是通过指针变量进行访问
	return 0;
}