#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����scanf������һЩ����
//scanf������һ����ʽΪ�� scanf("��ʽ�����ַ���", ��ַ����);
//1.scanf�ĸ�ʽ�����ַ������У��������ڵı�����¼��ʱ
//��ʽ������ʱ�м������ͨ���ո�����ģ��������ʱ�����Ҫͨ���ո���������
//���������ݸ��������ʹ�õ��Ƕ��ţ�����ʱ����Ҫͨ����������������
//int main()
//{
//	int a ;
//	int b;
//	scanf("%d %d",&a,&b);
//	printf("a = %d , b = %d \n",a,b);
//
//	return 0;
//}

//2.��ʽ����ʱ���ں������һ��\n��ת���ַ�
//int main()
//{
//	int a ;
//	int b;
//	scanf("%d %d\n",&a,&b);
//	printf("a = %d , b = %d \n",a,b);
//
//	return 0;
//}

////3.�����ʱ��������������˳���ǰ�����������ı���˳������
//int main()
//{
//	int a;
//	int b;
//	scanf("%d %d", &a, &b);
//	printf("a = %d , b = %d \n", b, a);
//
//	return 0;
//}

//4.����whileѭ�����е���������

//��ʽһ
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

//��ʽ��
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

//scanf�ķ���ֵ
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


