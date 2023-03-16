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


//int main()
//{
//	int a = 10;//1. 表达式语句
//	//创建int型变量并且赋值为10
//	Add(a);//2. 函数调用语句
//	//函数调用语句，调用Add函数并且传参
//	//3. 控制语句用于控制程序的执行流程，以实现程序的各种结构方式
//	// （C语言支持三种结构：顺序结构、选
//	//择结构、循环结构），它们由特定的语句定义符组成，C语言有九种控制语句
//	//4. 复合语句，就是其他四种语句的组合，来实现你的逻辑
//	;//5. 空语句
//	//其实一个分号就是一个空语句
//}


//int main()
//{
//	//无分支单纯是判断
//	//if(表达式)
//	//语句;
//	int a = 0;
//	scanf("%d",&a);
//	if (a > 3)
//		printf("这个数字比3大");
//	return 0;
//}

//int main()
//{
//	//双分支（非此即彼）
//	//if (表达式)
//	//	语句1;
//	//else
//	//	语句2;
//	int a = 0;
//	scanf("%d", &a);
//	if (a > 3)
//		printf("这个数字比3大");
//	else
//		printf("这个数字比3小");
//	return 0;
//}

//int main()
//{
//	//多分支
//	/*if (表达式1)
//		语句1;
//	else if (表达式2)
//		语句2;
//	else
//		语句3;*/
//	int a = 0;
//	scanf("%d", &a);
//	if (a > 3 && a < 5)
//		printf("这个数字比3大,比5小");
//	else if (a > 5 && a < 7)
//		printf("这个数字比5大，比7小");
//	else
//		printf("这个数为%d\n",a);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	switch (a)//括号里面的必须是整形表达式
//	{
//	case 1://case后面跟的必须是整形常量表达式
//		printf("路线一");
//		break;
//	case 2:
//		printf("路线二");
//		break;
//	case 3:
//		printf("路线三");
//		break;
//	case 4:
//		printf("路线四");
//		break;
//	case 5:
//		printf("路线五");
//		break;
//	default:
//		printf("输入错误");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	while (i<10)//括号内的是判断的条件
//	{//即满足括号内的判断就会进入while循环里面执行
//		//while里面的相关逻辑
//		printf("%d ",i);
//		i++;
//		//如果没有i++那么i恒等于0，一直满足while判断条件
//		//程序死循环打印0
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", i);
//		if (5 == i)
//			//当i==5的时候执行break直接结束循环
//			break;
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//		if (5 == i)
//			//当i==5的时候跳过continue之后的代码逻辑
//			//直接进入循环的判断入口
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = getchar();
//	//读取一个字符并将其ASCII码值返回存入变量ch当中
//	putchar(ch);
//	//将ch当中的数字转换为ASCII值对应的符号输出
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//
//	//相关逻辑。。。。。
//
//	while ((ch = getchar()) != EOF)
//	{//当字符不为EOF，连续读取字符，遇见EOF则停止
//	//通常本段代码会进行对输入缓存区的清理
//		;
//	}
//
//	//相关逻辑。。。。。
//	return 0;
//}

//int main()
//{
//	char passward[20];
//	printf("请输入密码：>");
//	scanf("%s",passward);
//	//读取输入的密码
//	printf("请确认密码:>(Y\N)");
//	//通过输入Y\N来确认
//	int a = getchar();
//	if (a == 'Y')         
//	{      
//		printf("确认成功！\n");
//	}
//	else
//	{
//		printf("确认错误！\n");
//	}
//	return 0;
//}

//int main()
//{
//	char passward[20];
//	printf("请输入密码：>");
//	scanf("%s", passward);
//	//读取输入的密码
//	getchar();
//	//清理缓存区
//	printf("请确认密码:>(Y\N)");
//	//通过输入Y\N来确认
//	int a = getchar();
//	if (a == 'Y')
//	{
//		printf("确认成功！\n");
//	}
//	else
//	{
//		printf("确认错误！\n");
//	}
//	return 0;
//}

//int main()
//{
//	char passward[20];
//	printf("请输入密码：>");
//	scanf("%s", passward);
//	//读取输入的密码
//	while (getchar()!='\n')
//	{
//		;
//	//直接将输入缓冲区回车之前的所有字符读取走
//	}
//	//清理缓存区
//	printf("请确认密码:>(Y\N)");
//	//通过输入Y\N来确认
//	int a = getchar();
//	if (a == 'Y')
//	{
//		printf("确认成功！\n");
//	}
//	else
//	{
//		printf("确认错误！\n");
//	}
//	return 0;
//}

//通过getchar函数来实现只打印特定字符的范围
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!= EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		
//		putchar(ch);
//	}
//	return 0;
//}



//for循环
//for (表达式1; 表达式2; 表达式3)
//循环语句;
//int main()
//{
//	int i = 0;
//	for (i=0; i<10 ;i++)
//	{
//			//表达式1
//			//表达式1为初始化部分，用于初始化循环变量的。
//			//表达式2
//			//表达式2为条件判断部分，用于判断循环时候终止。
//			//表达式3
//			//表达式3为调整部分，用于循环条件的调整。
//		printf("i = %d\n",i);
//	}
//	return 0;
//}

//程序死循环
//int main()
//{
//	for (;;)
//	{
//		printf("滴滴\n");
//	}
//	return 0;
//}

//循环的嵌套
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{//进入第一层for循环就会执行下面的代码（第二层for循环）
//		for (j = 1; j < 10; j++)
//		{//每一次的第一层for循环执行都会打印10次
//			printf("滴滴\n");
//		}
//	}
//	//所以总共会打印100个滴滴，也就是执行100次逻辑
//	return 0;
//}


////省略了初始化
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{//进入第一层循环此时i为0，然后进行第二层的循环
//	//第二层执行完毕j为10，第二次执行第一层循环的时候j依然为10
//	//导致除了第一次的时候第二层循环能够满足条件进入执行其余的都不可以
//		for (; j < 10; j++)
//		{
//			printf("滴滴\n");
//		}
//	}
//	//省略初始化的时候这个循环只会执行10次
//	return 0;
//}

//多个变量控制的for循环
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//do while循环
int main()
{
	int i = 0;
	do
	{
		i++;
		printf("%d\n",i);
	} while (i < 10);
	
	return 0;
}