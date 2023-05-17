#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int const* p = &a;
//	*p = 20;
//	p = b;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* const p = &a;
//	p = &b;
//	*p = b;
//}


//stelen的使用和熟悉：


//int main()
//{
//	//char* p1 = "abcdef"; - 6
//	//char arr1[] = "abcdef"; - 6
//	//int len = strlen(p1);
//	//int len = strlen(arr1);
//	//char arr2[] = {'a','b','c'};
//	//int len = strlen(arr2); - 随机值
//
//	//char* p2 = 'a';
//	//int len = strlen(p2); - #error
//	printf("%d\n",len);
//	return 0;
//}


//模拟实现stelen

int my_strlen(const char* str)
{
	assert(str);
	int count = 0;
	while (str++)
	{
		count++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n",len);
	return 0;
}