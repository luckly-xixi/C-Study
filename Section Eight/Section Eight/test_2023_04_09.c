#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include <cassert>

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

//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	
//	while (*str++)
//	{
//		count++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}


//strcpy的使用
//int main()
//{
//	char arr1[] = "abcdeee";
//	char arr2[] = "vvvv";
//	char arr3 = "abbbb";
//	char arr4 = "acccc";
//	//strcpy(arr1,arr2);
//	//strcpy(arr2,arr1); - error
//	//printf("%s\n",arr2);
//	//printf("%s\n",arr1);
//	strcpy(arr3, arr4);
//	strcpy(arr4, arr3);
//	//printf("%s\n",arr3); - error
//	//printf("%s\n",arr4); -error
//	//printf("%s\n",arr3); -error
//}


//strcpy的模拟实现
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest&&src);
//	char* str = dest;
//	while (*(dest++)&&*(src++))
//	{
//		*dest = *src;
//		//*str = *src;
//		//str++;
//		//src++;
//	}
//	return str;
//}
//
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "acdeg";
//	my_strcpy(arr1,arr2);
//	printf("%s\n",arr1);
//	//printf("%s\n",arr2);
//	return 0;
//}




//strcat使用
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "md\0zzsb";
//	//char arr2[] = "mdzzsb";
//	strcat(arr1,arr2);
//	//strcat(arr1,arr1);
//	printf("%s\n",arr1);
//	return 0;
//}



char* my_strcat(char* dest, const char* src)
{
	assert(dest&&src);
	char* str = dest;
	while (*dest++)
	{
	}
	while((*dest++ = *src++))
	//while (*src)
	{
	/*	*dest = *src;
		dest++; 
		src++;*/
	}
	*dest = *src;
	return str;
}


int main()
{
	//char arr1[20] = "abcd";
	char arr1[20] = "abcdef";
	char arr2[] = "md\0zzsb";
	//char arr2[] = "xxxx";
	my_strcat(arr1,arr2);
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}


