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

//malloc��free��ʹ��
//int main()
//{
//	char* p = (char*)malloc(4 * sizeof(char));
//	p = "abcd";
//	printf("%s\n",p);
//
////ʹ�ù��������ͷ�ָ�벢�ҽ�����Ϊ�գ�NULL��
//	free(p);
//	p = NULL;
//
//
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

int main()
{
	int* p = (int*)malloc(4 * sizeof(int));
	if (NULL == p)
	{
		perror("malloc");
		return 1;
	}
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		*(p + i) = i;
	}

	for (i = 0; i < 4; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}