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

//malloc和free的错误使用
//int main()
//{
//	char* p = (char*)malloc(4 * sizeof(char));
//	if (NULL == p)
//	{
//		perror("malloc");
//		return 1;
//	}
//
//	//错位位置，因为对于指针p的错误使用
//	p = "abcd";
//	printf("%s\n",p);
//
////使用过后主动释放指针并且将其置为空（null）
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//malloc和free的正确使用
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

//calloc的使用
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
//		printf("出错了");
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


//realloc的使用
//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (NULL == p)
//	{
//		printf("开辟空间失败\n");
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
//	//调整空间
//	p = (int*)realloc(p, 8 * sizeof(int));
//	if (NULL == p)
//	{
//		printf("开辟空间失败\n");
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
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}