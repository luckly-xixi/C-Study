#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




//void/*�������޷���ֵ*/ Add(void/*������Ҫ����*/)
//{}
//int main()
//{
//	int a = 10;
//	Add();
//	void* p= &a;//�����͵�ָ��
//	//ʹ�õ�ʱ��ǿתΪ���Ӧ��ָ�����ͷ���ᱨ��
//	printf("%p\n", (int*)p);
//	return 0;
//}



//�������洢�����ӣ�
int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	return 0;
}