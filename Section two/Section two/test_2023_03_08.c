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


int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{//当字符不为EOF，连续读取字符，遇见EOF则停止
	//通常本段代码会进行输入缓存区的清理
		;
	}
	return 0;
}