#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//�ַ�ָ��
//int main()
//{
//	//��ʽһ:ͨ��ָ�������ַ�
//	char a = 'w';
//	char* p = &a;
//	*p = 'a';
//	//��ʽ����ֱ����ָ�뵱�д���ַ���
//	char* pt = "abcdef";
//	//��Ϊָ��pt���д�ŵ��ǳ����ַ������ǲ����Ա��޸ĵ�
//	//����һ��дΪ��const char* pt = "abcdef";
//	*pt = 'a';
//	return 0;
//}


//ͨ���������ʽ���ܲ���
void print_arr1(int arr[3][5]/*�����3����ʡ�Ե���5������ʡ��*/, int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}


//ͨ������ָ�����ʽ���ܲ�������ͨ��������ʽ���
//void print_arr2 (int(*arr)[5]/*�����5����ʡ��*/, int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}


//ͨ������ָ�����ʽ���ܲ�������ͨ��ָ��ƫ��������ʽ���
void print_arr2(int(*arr)[5]/*�����5����ʡ��*/, int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf("%d ", *(*(arr+i)+j));
		}
		printf("\n");
	}
}

//����ָ��
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	print_arr1(arr, 3, 5);
//	//������arr����ʾ��Ԫ�صĵ�ַ
//	//���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��
//	//�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
//	//��������ָ��������
//	print_arr2(arr, 3, 5);
//	return 0;
//}

//һά���鴫��
//void test(int arr[10]/*���������ֿ���ʡ��*/)
//{}
//void test(int* arr/*һά���鱾�ʾ��Ǵ���������Ԫ�صĵ�ַ*/)
//{}


//һάָ�����鴫��
//void test(int* arr[]/*�����е����ֿ�ʡ��*/)
//{}
//void test(int** arr)
//{}//һάָ�����鱾�ʴ��ݵ����������Ԫ�ص�ַ��Ҳ����ָ��ĵ�ַ
////�����ö���ָ�����
//
//int main()
//{
//	int* arr2[20] = { 0 };
//	test(arr2);
//}


//void test(int arr[][5]/*������ֻ��ʡ���в���ʡ����*/)
//{}
//�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
//��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
//�����ŷ������㡣

//void test(int(*arr)[5])
//{}//��ά���鴫�Σ����ݹ�������һ��һά����ĵ�ַ��Ҳ����һά�����ָ�룬����ֻ��ͨ��ָ�����
////������һ������ָ��
//
//void test(int* p)
//{}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int arr[4];
//	test(&a);//1.����a�ĵ�ַ
//	test(p);//2.ָ�루��ű���a�ĵ�ַ��
//	test(arr);//3.һά���������������Ԫ�صĵ�ַ��
//	return 0;
//}

//void test(int** pp)
//{}
//int main()
//{
//	int a = 2;
//	int* p = &a;
//	int** pp = &p;
//	int* arr[5];
//	test(&p);//1.һ��ָ��ĵ�ַ
//	test(pp);//2.����ָ�루�����һ��ָ��ĵ�ַ��
//	test(arr);//3.һάָ�����飨���ָ������飩������������Ԫ�ص�ַ��
//	return 0;
//}

//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
////����ָ��
//int main()
//{
//	int(*p1)(int, int) = Add;
//	int(*p2)(int, int) = &Add;
//	int(*p3)(int x, int y) = Add;
//	int(*p4)(int x, int y) = &Add;
//	//p1,p2,p3,p4���Ǻ���ָ�룬����Add��&Add���Ǻ����ĵ�ַ
//	//int sum = (*p2)(2, 3);*����ʡ��
//	int sum = p2(2, 3);
//	printf("%d\n",sum);
//	return 0;
//}
//


