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

//int main()
//{
//	int a = 5;
//	int b = 2;
//	printf("%zu\n",sizeof(a = b + 4));
//	//如果sizeof当中的表达式语句进行计算了，那么变量a的数值应该是6
//	printf("%d\n",a);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//00000000000000000000000000001010
//	int n = 0;
//	scanf("%d",&n);
//	//把a的二进制位第n位置为1
//	a = a | (1 << (n - 1));
//	printf("a = %d\n",a);
//	//把a的二进制位第n位置为0
//	scanf("%d",&n);
//	a = a & ~(1 << (n - 1));
//	printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//对于逻辑与，是并且的意思，就是操作符的（从左到右）左右两边的操作数都为真，才生效
//	//但凡遇见假的就直接停止，并且后方（右边）的表达式或者操作数直接不关注（不执行）
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	printf("i = %d\n",i);
//	//而逻辑操作符无论操作数为多少，只关注真（非0）假（0），执行完毕，返回真假，也就是0或者1
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++||++b||d++;
//	//逻辑或是或者的意思，是操作符左右两边的操作数只要有一个为真，直接生效
//	//当即返回真
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	printf("i = %d\n", i);
//	return 0;
//}


//int main()
//{
//	int a = 6;
//	int b = 0;
//	b = (a > 5) ? 3 : -3;
//	//相当于是下方逻辑
//	//if (a > 5)
//	//	b = 3;
//	//else
//	//	b = -3;
//	printf("b = %d\n",b);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式
//	printf("c = %d\n",c);
//}

//int main()
//{
//	int a = get_val();
//	count_val(a);
//	while (a = get_val(), count_val(a), a > 0)
//	{
//		//业务处理
//	}
//	//while (a > 0)
//	//{//业务处理
//	//	a = get_val();
//	//	count_val(a);
//	//}
//	return 0;
//}

//struct Handsome
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct Handsome boy = {"西西",18};
//	printf("%s %d\n",boy.name,boy.age);
//	//通过 . 来访问结构体中的成员，用法：结构体名 . 成员变量
//	struct Handsome* ps = &boy;//结构体指针
//	printf("%s %d\n",(*ps).name, (*ps).age);
//	//此处通过解引用操作符来将结构体指针转化为结构体，(*ps)当中的括号不能去掉
//	printf("%s %d\n",ps->name,ps->age);
//	//这里用指针配合->来访问成员，用法：结构体指针 -> 成员变量
//	return 0;
//}

//int main()
//{
//	char a = 5;//00000101 - a存放在内存中的形式，计算时发生整形提升
//	//00000000000000000000000000000101 - 5的补码
//	char b = 126;//01111110 - b存放在内存中的形式，计算时发生整形提升
//	//00000000000000000000000001111110 - 126的补码
//	char c = a + b;
//	//c在内存中100000011
//	//整形提升
//	//11111111111111111111111100000011补码
//	//11111111111111111111111100000010反码
//	//10000000000000000000000111111101原码 - -125
//	printf("c = %d\n",c);
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;//十六进制数据
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//	//在这使用a的数值，发生整形提升了
//	//a的存储时数据10110110
//	//判断的时候的a：11111111111111111111111110110110
//	//已经不是原来的数据了
//		printf("a");
//	if (b == 0xb600)
//	//	同理
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}


//#include <stdio.h>
//
//int hanoi(int n, char a, char b, char c)
//{
//    int count = 0; // 记录移动次数
//
//    if (n > 0) {
//        count += hanoi(n - 1, a, c, b); // 将n-1个圆盘从A移动到B
//        printf("Move disk %d from %c to %c\n", n, a, c); // 将第n个圆盘从A移动到C
//        count++;
//        count += hanoi(n - 1, b, a, c); // 将n-1个圆盘从B移动到C
//    }
//
//    return count;
//}
//
//int main()
//{
//    int n, count;
//
//    printf("Enter the number of disks: ");
//    scanf("%d", &n);
//
//    count = hanoi(n, 'A', 'B', 'C');
//    printf("\nTotal number of moves: %d\n", count);
//
//    return 0;
//}



//#include <stdio.h>
//
//int hanoi(int n, char a, char b, char c)
//{
//    if (n == 1) {
//        printf("Move disk from %c to %c\n", a, c); // 将第1个圆盘从A移动到C
//        return 1;
//    }
//    else {
//        int count = 0;
//
//        count += hanoi(n - 1, a, c, b); // 将n-1个圆盘从A移动到B
//        printf("Move disk from %c to %c\n", a, c); // 将第n个圆盘从A移动到C
//        count++;
//        count += hanoi(n - 1, b, a, c); // 将n-1个圆盘从B移动到C
//
//        return count;
//    }
//}
//
//int main()
//{
//    int n, count;
//
//    printf("输入圆盘的数量: ");
//    scanf("%d", &n);
//
//    count = hanoi(2 * n, 'A', 'B', 'C');
//    printf("\n完成任务所需的最少移动次数: %d\n", count);
//
//    return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int hanoi(int n)
//{
//    int count = 0;
//    if (n == 1) {
//        count = 1;
//    }
//    else {
//        int i;
//        for (i = 1; i <= n; i++) {
//            count = 2 * hanoi(n - i) + pow(2, i - 1) - 1;
//        }
//    }
//
//    return count;
//}
//
//int main()
//{
//    int n, count;
//
//    printf("输入圆盘的数量: ");
//    scanf("%d", &n);
//
//    count = hanoi(n);
//    printf("\n完成任务所需的最少移动次数: %d\n", count);
//
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct stack {
//    int top;
//    int capacity;
//    int* array;
//} Stack;
//
//Stack* createStack(int capacity) {
//    Stack* stack = (Stack*)malloc(sizeof(Stack));
//    stack->top = -1;
//    stack->capacity = capacity;
//    stack->array = (int*)malloc(capacity * sizeof(int));
//    return stack;
//}
//
//void push(Stack* stack, int item) {
//    if (stack->top == stack->capacity - 1) {
//        printf("栈溢出错误");
//        exit(1);
//    }
//
//    stack->top++;
//    stack->array[stack->top] = item;
//}
//
//int pop(Stack* stack) {
//    if (stack->top == -1) {
//        printf("栈下溢错误");
//        exit(1);
//    }
//
//    int item = stack->array[stack->top];
//    stack->top--;
//    return item;
//}
//
//void hanoi(int n)
//{
//    Stack* src = createStack(n);
//    Stack* tmp = createStack(n);
//    Stack* dst = createStack(n);
//
//    int i;
//    for (i = n; i >= 1; i--) {
//        push(src, i);
//    }
//
//    int count = 0;
//    int flag = 1;
//    while (src->top != -1 || tmp->top != -1) {
//        if (flag) {
//            if (src->top == -1) {
//                int tmpItem = pop(tmp);
//                int dstItem = pop(dst);
//                push(src, dstItem);
//                push(src, tmpItem);
//            }
//            else if (tmp->top == -1) {
//                int srcItem = pop(src);
//                int dstItem = pop(dst);
//                push(tmp, dstItem);
//                push(tmp, srcItem);
//            }
//            else if (src->array[src->top] > tmp->array[tmp->top]) {
//                int dstItem = pop(dst);
//                int tmpItem = pop(tmp);
//                push(dst, tmpItem);
//                push(dst, dstItem);
//                count++;
//            }
//            else {
//                int dstItem = pop(dst);
//                int srcItem = pop(src);
//                push(tmp, srcItem);
//                push(tmp, dstItem);
//                count++;
//            }
//        }
//        else {
//            if (src->top == -1) {
//                int tmpItem = pop(tmp);
//                int dstItem = pop(dst);
//                push(src, tmpItem);
//                push(src, dstItem);
//            }
//            else if (dst->top == -1) {
//                int srcItem = pop(src);
//                int tmpItem = pop(tmp);
//                push(dst, tmpItem);
//                push(dst, srcItem);
//            }
//            else if (src->array[src->top] > dst->array[dst->top]) {
//                int tmpItem = pop(tmp);
//                int dstItem = pop(dst);
//                push(src, dstItem);
//                push(src, tmpItem);
//                count++;
//            }
//            else {
//                int tmpItem = pop(tmp);
//                int srcItem = pop(src);
//                push(dst, srcItem);
//                push(dst, tmpItem);
//                count++;
//            }
//        }
//
//        flag = !flag;
//    }
//
//    printf("\n完成任务所需的最少移动次数: %d\n", count);
//}
//
//int main()
//{
//    int n;
//
//    printf("输入圆盘的数量: ");
//    scanf("%d", &n);
//
//    hanoi(n);
//
//    return 0;
//}


//#include <stdio.h>
//
//// 定义栈结构（用于存储汉诺塔移动过程中的状态）
//typedef struct {
//    int n;      // 当前待移动的圆盘数量
//    char src;   // 源柱子
//    char tmp;   // 中间柱子
//    char dst;   // 目标柱子
//} Stack;
//
//// 定义栈的操作：入栈和出栈
//void push(Stack* stack, int* top, Stack element) {
//    stack[++(*top)] = element;
//}
//
//Stack pop(Stack* stack, int* top) {
//    return stack[(*top)--];
//}

// 汉诺塔非递归迭代方法
//int hanoi(int n) {
//    Stack stack[100];   // 定义一个栈，用于存储汉诺塔移动过程中的状态
//    int top = -1;       // 栈顶指针
//    int count = 0;      // 移动次数
//    Stack cur;          // 当前状态
//
//    // 初始状态入栈
//    cur.n = n;
//    cur.src = 'A';
//    cur.tmp = 'B';
//    cur.dst = 'C';
//    push(stack, &top, cur);
//
//    while (top >= 0) {
//        // 出栈当前状态
//        cur = pop(stack, &top);
//
//        if (cur.n == 1) {
//            printf("从 %c 移动圆盘到 %c\n", cur.src, cur.dst);
//            count++;
//        }
//        else {
//            // 将当前状态按照移动规则分解成三个子任务，并推入栈中
//            Stack temp;
//
//            // 移动子任务1：将 n-1 个圆盘从 src 柱移动到 tmp 柱
//            temp.n = cur.n - 1;
//            temp.src = cur.src;
//            temp.tmp = cur.dst;
//            temp.dst = cur.tmp;
//            push(stack, &top, temp);
//
//            // 移动子任务2：将第 n 个圆盘从 src 柱移动到 dst 柱
//            printf("从 %c 移动圆盘到 %c\n", cur.src, cur.dst);
//            count++;
//
//            // 移动子任务3：将 n-1 个圆盘从 tmp 柱移动到 dst 柱
//            temp.n = cur.n - 1;
//            temp.src = cur.tmp;
//            temp.tmp = cur.src;
//            temp.dst = cur.dst;
//            push(stack, &top, temp);
//        }
//    }
//
//    return count;
//}
//
//int main() {
//    int n;
//
//    printf("输入圆盘的数量: ");
//    scanf("%d", &n);
//
//    int count = hanoi(n);
//
//    printf("\n完成任务所需的最少移动次数: %d\n", count);
//
//    return 0;
//}
