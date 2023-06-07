#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>



int main()
{
	int* p = (int*)malloc(40);
	if(NULL == p)
	{
		printf("%s\n",strerror(errno));
	}
	int* ptr = p;

	for (int i = 0; i < 10; i++)
	{
		*ptr = i;
		ptr++;
	}

	free(p);
	p = NULL;

	return 0;
}