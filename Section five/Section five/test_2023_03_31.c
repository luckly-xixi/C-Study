#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


////����������
//int main()
//{
//	int a = 4;
//	//00000000000000000000000000000100 - ����ԭ���������һ
//	int b = a << 1;
//	//00000000000000000000000000000010 - ����ԭ���������һ
//	printf("a = %d,b = %d\n",a,b);
//	return 0;
//}


////����������
//int main()
//{
//	int a = -4;
//	//10000000000000000000000000000100 - ԭ��
//	//11111111111111111111111111111011 - ����
//	//11111111111111111111111111111100 - ����
//	int b = a << 1;
//	//11111111111111111111111111111000 - ����
//	//11111111111111111111111111110111 - ����
//	//10000000000000000000000000001000 - ԭ��
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}

//����������
//int main()
//{
//	int a = 4;
//	//00000000000000000000000000000100 - ����ԭ���������һ
//	int b = a >> 1;
//	//00000000000000000000000000000010 - ����ԭ���������һ
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}\\//����������

////����������
//int main()
//{
//	int a = -4;
//	//10000000000000000000000000000100 - ԭ��
//	//11111111111111111111111111111011 - ����
//	//11111111111111111111111111111100 - ����
//	int b = a >> 1;
//	//11111111111111111111111111111110 - ����
//	//11111111111111111111111111111101 - ����
//	//10000000000000000000000000000010 - ԭ��
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}

////��λ��������λ����
//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011 - ����
//	int b = -5;
//	//10000000000000000000000000000101 - ԭ��
//	//11111111111111111111111111111010 - ����
//	//11111111111111111111111111111011 - ����
//
//	printf("%d\n",a&b);
//	return 0;
//}

////��λ��������λ����
//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011 - ����
//	int b = -5;
//	//10000000000000000000000000000101 - ԭ��
//	//11111111111111111111111111111010 - ����
//	//11111111111111111111111111111011 - ����
//
//	printf("%d\n", a | b);
//	return 0;
//}

//��λ��������λ�����
//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011 - ����
//	int b = -5;
//	//10000000000000000000000000000101 - ԭ��
//	//11111111111111111111111111111010 - ����
//	//11111111111111111111111111111011 - ����
//
//	printf("%d\n", a ^ b);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = a = a + 1;
//	//�൱����b�ڳ�ʼ����ʱ��ֱ�ӰѸı�����a����ֵ
//	//��������b��������֮ǰ����a����ֵ��0�Ѿ���Ϊ��1
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	a += 1;
//	//�൱����a = a + 1;�ļ�
//	printf("a = %d\n",a);
//	int b = 2;
//	b *= 3;//�൱����b = b * 3;�ļ�
//	printf("b = %d\n", b);
//	int c = 10;
//	c >>= 1;//�൱����c = c >> 1;�ļ�
//	printf("c = %d\n", c);
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int* pa = &a;//ȡ������a�ĵ�ַ����pa�������ָ���������
//	//int*(*˵��pa������һ��ָ�룬��int˵��ָ�������������)
//	//�������int*�Ǹ����壬������int���ͺ�*�������ò��������ĸ���
//	printf("%p\n",pa);//��ӡpa����ֵ��pa��һ������ָ�� - %p�Ǵ�ӡ��ַ�ĸ�ʽ
//	printf("%p\n",&a);//��ӡ����a�ĵ�ַ��ȡ������a�ĵ�ַ���Ҵ�ӡ����
//	printf("%d\n",*(&a));//��ӡ����a��ֵ��&a��ȡ��a��ַ
//	//*�������ò��������ǰ��ҵ�a�ĵ�ַ���Ҵ�ӡ�������������
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	printf("%d\n",sizeof(a));
//	printf("%zu\n",sizeof(a));
//	//��Ȼsizeof��һ������������ô�����a�Ĵ�С��ʱ��󷽵������ǲ��ǿ��Բ��ô���
//	printf("%zu\n",sizeof a);//��ʵ֤�����������ʱ����Բ�������
//	//��ô��һ�������أ�
//	printf("%zu\n", sizeof(int));
//	//printf("%zu\n", sizeof int);//�ᱨ������������˵����Ҫ������
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = 2;
//	printf("%zu\n",sizeof(a = b + 4));
//	//���sizeof���еı��ʽ�����м����ˣ���ô����a����ֵӦ����6
//	printf("%d\n",a);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//00000000000000000000000000001010
//	int n = 0;
//	scanf("%d",&n);
//	//��a�Ķ�����λ��nλ��Ϊ1
//	a = a | (1 << (n - 1));
//	printf("a = %d\n",a);
//	//��a�Ķ�����λ��nλ��Ϊ0
//	scanf("%d",&n);
//	a = a & ~(1 << (n - 1));
//	printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//�����߼��룬�ǲ��ҵ���˼�����ǲ������ģ������ң��������ߵĲ�������Ϊ�棬����Ч
//	//���������ٵľ�ֱ��ֹͣ�����Һ󷽣��ұߣ��ı��ʽ���߲�����ֱ�Ӳ���ע����ִ�У�
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	printf("i = %d\n",i);
//	//���߼����������۲�����Ϊ���٣�ֻ��ע�棨��0���٣�0����ִ����ϣ�������٣�Ҳ����0����1
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++||++b||d++;
//	//�߼����ǻ��ߵ���˼���ǲ������������ߵĲ�����ֻҪ��һ��Ϊ�棬ֱ����Ч
//	//����������
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	printf("i = %d\n", i);
//	return 0;
//}


//int main()
//{
//	int a = 6;
//	int b = 0;
//	b = (a > 5) ? 3 : -3;
//	//�൱�����·��߼�
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
//	int c = (a > b, a = b + 10, a, b = a + 1);//���ű��ʽ
//	printf("c = %d\n",c);
//}

//int main()
//{
//	int a = get_val();
//	count_val(a);
//	while (a = get_val(), count_val(a), a > 0)
//	{
//		//ҵ����
//	}
//	//while (a > 0)
//	//{//ҵ����
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
//	struct Handsome boy = {"����",18};
//	printf("%s %d\n",boy.name,boy.age);
//	//ͨ�� . �����ʽṹ���еĳ�Ա���÷����ṹ���� . ��Ա����
//	struct Handsome* ps = &boy;//�ṹ��ָ��
//	printf("%s %d\n",(*ps).name, (*ps).age);
//	//�˴�ͨ�������ò����������ṹ��ָ��ת��Ϊ�ṹ�壬(*ps)���е����Ų���ȥ��
//	printf("%s %d\n",ps->name,ps->age);
//	//������ָ�����->�����ʳ�Ա���÷����ṹ��ָ�� -> ��Ա����
//	return 0;
//}

//int main()
//{
//	char a = 5;//00000101 - a������ڴ��е���ʽ������ʱ������������
//	//00000000000000000000000000000101 - 5�Ĳ���
//	char b = 126;//01111110 - b������ڴ��е���ʽ������ʱ������������
//	//00000000000000000000000001111110 - 126�Ĳ���
//	char c = a + b;
//	//c���ڴ���100000011
//	//��������
//	//11111111111111111111111100000011����
//	//11111111111111111111111100000010����
//	//10000000000000000000000111111101ԭ�� - -125
//	printf("c = %d\n",c);
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;//ʮ����������
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//	//����ʹ��a����ֵ����������������
//	//a�Ĵ洢ʱ����10110110
//	//�жϵ�ʱ���a��11111111111111111111111110110110
//	//�Ѿ�����ԭ����������
//		printf("a");
//	if (b == 0xb600)
//	//	ͬ��
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}


//#include <stdio.h>
//
//int hanoi(int n, char a, char b, char c)
//{
//    int count = 0; // ��¼�ƶ�����
//
//    if (n > 0) {
//        count += hanoi(n - 1, a, c, b); // ��n-1��Բ�̴�A�ƶ���B
//        printf("Move disk %d from %c to %c\n", n, a, c); // ����n��Բ�̴�A�ƶ���C
//        count++;
//        count += hanoi(n - 1, b, a, c); // ��n-1��Բ�̴�B�ƶ���C
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
//        printf("Move disk from %c to %c\n", a, c); // ����1��Բ�̴�A�ƶ���C
//        return 1;
//    }
//    else {
//        int count = 0;
//
//        count += hanoi(n - 1, a, c, b); // ��n-1��Բ�̴�A�ƶ���B
//        printf("Move disk from %c to %c\n", a, c); // ����n��Բ�̴�A�ƶ���C
//        count++;
//        count += hanoi(n - 1, b, a, c); // ��n-1��Բ�̴�B�ƶ���C
//
//        return count;
//    }
//}
//
//int main()
//{
//    int n, count;
//
//    printf("����Բ�̵�����: ");
//    scanf("%d", &n);
//
//    count = hanoi(2 * n, 'A', 'B', 'C');
//    printf("\n�����������������ƶ�����: %d\n", count);
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
//    printf("����Բ�̵�����: ");
//    scanf("%d", &n);
//
//    count = hanoi(n);
//    printf("\n�����������������ƶ�����: %d\n", count);
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
//        printf("ջ�������");
//        exit(1);
//    }
//
//    stack->top++;
//    stack->array[stack->top] = item;
//}
//
//int pop(Stack* stack) {
//    if (stack->top == -1) {
//        printf("ջ�������");
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
//    printf("\n�����������������ƶ�����: %d\n", count);
//}
//
//int main()
//{
//    int n;
//
//    printf("����Բ�̵�����: ");
//    scanf("%d", &n);
//
//    hanoi(n);
//
//    return 0;
//}


//#include <stdio.h>
//
//// ����ջ�ṹ�����ڴ洢��ŵ���ƶ������е�״̬��
//typedef struct {
//    int n;      // ��ǰ���ƶ���Բ������
//    char src;   // Դ����
//    char tmp;   // �м�����
//    char dst;   // Ŀ������
//} Stack;
//
//// ����ջ�Ĳ�������ջ�ͳ�ջ
//void push(Stack* stack, int* top, Stack element) {
//    stack[++(*top)] = element;
//}
//
//Stack pop(Stack* stack, int* top) {
//    return stack[(*top)--];
//}

// ��ŵ���ǵݹ��������
//int hanoi(int n) {
//    Stack stack[100];   // ����һ��ջ�����ڴ洢��ŵ���ƶ������е�״̬
//    int top = -1;       // ջ��ָ��
//    int count = 0;      // �ƶ�����
//    Stack cur;          // ��ǰ״̬
//
//    // ��ʼ״̬��ջ
//    cur.n = n;
//    cur.src = 'A';
//    cur.tmp = 'B';
//    cur.dst = 'C';
//    push(stack, &top, cur);
//
//    while (top >= 0) {
//        // ��ջ��ǰ״̬
//        cur = pop(stack, &top);
//
//        if (cur.n == 1) {
//            printf("�� %c �ƶ�Բ�̵� %c\n", cur.src, cur.dst);
//            count++;
//        }
//        else {
//            // ����ǰ״̬�����ƶ�����ֽ�����������񣬲�����ջ��
//            Stack temp;
//
//            // �ƶ�������1���� n-1 ��Բ�̴� src ���ƶ��� tmp ��
//            temp.n = cur.n - 1;
//            temp.src = cur.src;
//            temp.tmp = cur.dst;
//            temp.dst = cur.tmp;
//            push(stack, &top, temp);
//
//            // �ƶ�������2������ n ��Բ�̴� src ���ƶ��� dst ��
//            printf("�� %c �ƶ�Բ�̵� %c\n", cur.src, cur.dst);
//            count++;
//
//            // �ƶ�������3���� n-1 ��Բ�̴� tmp ���ƶ��� dst ��
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
//    printf("����Բ�̵�����: ");
//    scanf("%d", &n);
//
//    int count = hanoi(n);
//
//    printf("\n�����������������ƶ�����: %d\n", count);
//
//    return 0;
//}
