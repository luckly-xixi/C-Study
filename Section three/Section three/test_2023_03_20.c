#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//
//int Max(int x, int y)//�����x��y������ʽ����
//{//��������Զ��庯��
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 2;
//	int b = 4 ;
//	Max(a,b);//�����Զ��庯��
//	//�����a��b����ʵ�ʲ���
//	return 0;
//}
//
//
//
//void Swap(int* x ,int* y)//���ܵ�Ҳ�Ǳ����ĵ�ַ
//{//Swap������ʵ�֣�������������Զ��庯��
//	int z = 0;
//	z =  *x;
//	*x = *y;
//	*y = z;
//}
//int main()
//{
//	int a = 6;
//	int b = 3;
//	printf("����ǰ��a = %d  b = %d\n", a,b);
//	Swap(&a,&b);//����Swap����
//	//���ݵ��Ǳ����ĵ�ַ
//	printf("���������a = %d  b = %d\n",a,b);
//	return 0;
//}


//���������д����ֵ  ������Ĭ�Ϸ���һ��ֵ
//һ�������һ��ָ������Ľ��
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
////��ʽ����
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
//	//��Max�����ķ���ֵ��Ϊ��������Print����
//	//�൱����
//	/*int c = Max(a, b);
//	Print(c);*/
//	return 0;
//}

////Ƕ�׵���
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 6;
//	int b = 3;
//	Max(a, b);
//	//��main�������е���Max����
//	return 0;
//}


//�ݹ�

//void Print(int x)
//{
//	if (x > 9 )
//	{//�ж�����
//		Print(x / 10);
//	}
//	printf("%d ", x % 10);

//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	Print(a);//�ݹ麯��
//	return 0;
//}


int main()
{
	int a = 0;
	scanf("%d", &a);//����1234
	//Print(a);//�ݹ麯��
	{//��һ�ε��ô�ʱa=1234
		printf("%d ", a % 10);//���4
		a = a / 10;//��ʱa=123���Ҵ��ݸ�Print����
		if (a > 9)
		{//�ڶ��ε��ô�ʱa=123
			printf("%d ", a % 10);//���3
			a = a / 10;//��ʱa=12���Ҵ��ݸ�Print����
			//Print(x / 10);
				if (a > 9)
				{//�����ε��ô�ʱa=12���Ҵ��ݸ�Print����
					printf("%d ", a % 10);//���2
					a = a / 10;//��ʱa=1���Ҵ��ݸ�Print����
					//Print(x / 10);
					if (a > 9)
					{//���Ĵε��ô�ʱa=1���Ҵ��ݸ�Print����
						//Print(a/ 10);��Ϊ������if������	
					}
					printf("%d ", a % 10);
				}
		}
	}
	return 0;
}
