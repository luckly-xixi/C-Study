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

//malloc和free的使用
//int main()
//{
//	char* p = (char*)malloc(4 * sizeof(char));
//	p = "abcd";
//	printf("%s\n",p);
//
////使用过后主动释放指针并且将其置为空（NULL）
//	free(p);
//	p = NULL;
//
//
//	return 0;
//}


//calloc的使用
int main()
{
	char* p = (char*)calloc(4 ,sizeof(char));
	p = "abcd";

	for (int i = 0; i < 4; i++)
		printf("%c",*(p+i));

	free(p);
	p = NULL;

	return 0;
}