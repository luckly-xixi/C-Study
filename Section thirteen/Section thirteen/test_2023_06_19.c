#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>



//文件打开和关闭
int main()
{
	FILE* pf;
	//打开文件
	pf = fopen("text.txt","w");
	if (NULL == pf)
	{
		perror("fopen");
	}


	//关闭文件
	fcolse(pf);

	return 0;
}