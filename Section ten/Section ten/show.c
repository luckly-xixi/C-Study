#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	//方式一
	char a = 'w';
	char* p = &a;
	//方式二
	char b = "abcdef";
	char* pt = "abcdef";
	return 0;
}