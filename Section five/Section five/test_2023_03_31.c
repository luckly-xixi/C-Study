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
int main()
{
	int a = 3;
	//00000000000000000000000000000011 - ����
	int b = -5;
	//10000000000000000000000000000101 - ԭ��
	//11111111111111111111111111111010 - ����
	//11111111111111111111111111111011 - ����

	printf("%d\n", a ^ b);
	return 0;
}