#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>



//int main()
//{
//	int* p = (int*)malloc(40);
//	if(NULL == p)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	int* ptr = p;
//
//	for (int i = 0; i < 10; i++)
//	{
//		*ptr = i;
//		ptr++;
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//malloc��free�Ĵ���ʹ��
//int main()
//{
//	char* p = (char*)malloc(4 * sizeof(char));
//	if (NULL == p)
//	{
//		perror("malloc");
//		return 1;
//	}
//
//	//��λλ�ã���Ϊ����ָ��p�Ĵ���ʹ��
//	p = "abcd";
//	printf("%s\n",p);
//
////ʹ�ù��������ͷ�ָ�벢�ҽ�����Ϊ�գ�null��
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//malloc��free����ȷʹ��
//int main()
//{
//	char* ps = (char*)malloc(0);
//	if (NULL == ps)
//	{
//		perror("malloc");
//		return 1;
//	}
//	ps = "a";
//	free(ps);
//	ps = NULL;
//
//
//	int* p = (int*)malloc(4 * sizeof(int));
//	if (NULL == p)
//	{
//		perror("malloc");
//		return 1;
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		*(p + i) = i;
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	return 0;
//}

//calloc��ʹ��
//int main()
//{
//	char* p = (char*)calloc(4 ,sizeof(char));
//	if (NULL != p)
//	{
//		p = "abcd";
//		int i = 0;
//		for (i = 0; i < 4; i++)
//			printf("%c", *(p + i));
//
//		free(p);
//		p = NULL;
//	}
//	else
//	{
//		printf("������");
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(4 * sizeof(int));
//	if (NULL == p)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//realloc��ʹ��
//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (NULL == p)
//	{
//		printf("���ٿռ�ʧ��\n");
//		return 1;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//
//	for (int i= 0; i < 5; i++)
//	{
//		printf("%d\n",*(p+i));
//	}
//	//�����ռ�
//	p = (int*)realloc(p, 8 * sizeof(int));
//	if (NULL == p)
//	{
//		printf("���ٿռ�ʧ��\n");
//		return 1;
//	}
//	for (int i = 0; i < 8; i++)
//	{
//		*(p + i) = i;
//	}
//
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}



//��NULLָ�������

//int main()
//{
//	int* p = (int*)malloc(INT_MAX);
//	if (NULL == p)
//	{
//		free(p);
//	}
//	return 0;
//}


//�Զ�̬���ٿռ��Խ�����


//int main()
//{
//	int* p = (int*)malloc(4 * sizeof(int));
//	if (NULL == p)
//		return 1;
//	for (int i = 0; i <= 4; i++)
//	{//�������Ѿ�Խ������ˣ�i���ܵ���4
//		*(p + i) = i;
//	}
//	for (int i = 0; i <= 4; i++)
//		printf("%d\n",*(p+i));
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//int main()
//{
//	int* p = (int*)malloc(4 * sizeof(int));
//	if (NULL == p)
//		return 1;
//	int a = 4;
//	int* ptr = &a;
//
//	free(ptr);
//
//	return 0;
//}



//ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����

//int main()
//{
//	int* p = (int*)malloc(4 * sizeof(int));
//	if (NULL == p)
//		return 1;
//
//	for(int i=0; i<2; i++)
//	{
//		*p = i;
//		p++;
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}


//��ͬһ�鶯̬�ڴ����ͷ�


//int main()
//{
//	int* p = (int*)malloc(4 * sizeof(int));
//	if (NULL == p)
//		return 1;
//
//	for (int i = 0; i < 4; i++)
//	{
//		*(p + i) = i;
//
//	}
//
//	free(p);
//
//	free(p);
//	p = NULL;
//	return 0;
//}


//��̬�����ڴ������ͷţ��ڴ�й©��3.6 ��̬�����ڴ������ͷţ��ڴ�й©��

//int main()
//{
//	int* p = (int*)malloc(4 * sizeof(int));
//	if (NULL == p)
//		return 1;
//
//	for (int i = 0; i < 4; i++)
//	{
//		*(p + i) = i;
//
//	}
////δ�����ͷ��ڴ�Ĳ���
//	return 0;
//}



//��������

//struct S
//{
//	int a;
//	int arr[];
//};


//int main()
//{
//	//�ڴ�����
//	struct S* ps = (struct S*)malloc(sizeof(int)+10*sizeof(int));
//	if (NULL == ps)
//	{
//		printf("�������");
//		return 1;
//	}
//	//ҵ����
//	ps->a = 10;
//	for (int i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//int main()
//{
//	printf("%d\n",sizeof(struct S));//4
//	return 0 ;
//}



//struct S
//{
//	int i;
//	int* p;
//};
//
//int main()
//{
//	//�ռ�����
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (NULL == ps)
//	{
//		printf("����ռ�ʧ��\n");
//		return 1;
//	}
//
//	ps->i = 10;
//	ps->p = (int*)malloc(ps->i * sizeof(int));
//
//	//ҵ����
//	for (int i = 0; i < ps->i; i++)
//	{
//		ps->p[i] = i;
//	}
//	//�ͷ�
//	free(ps);
//	ps = NULL;
//	return 0;
//}