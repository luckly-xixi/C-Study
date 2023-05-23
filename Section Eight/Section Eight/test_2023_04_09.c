#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include <string.h>

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


//int main()
//{
//	//输出结果为 >
//	if (strlen("abc") - strlen("abcdef") > 0 )
//		//在if中的语句通过计算两个字符串的长度，3-6，但是由于stelen函数返回的
//		//类型是无符号数，那么3-6得到的-3也是以无符号数来看待
//		printf(">\n");
//	else
//		printf("<\n");
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


//strcpy的使用（常量字符串不可修改）
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


//模拟实现
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest&&src);
//	char* str = dest;
//	while (*dest)
//	//while (*dest++);  存在问题，目的地空间内的'\0'未被覆盖掉
//	{
//		dest++;
//	}
//	//while((*dest++ = *src++))
//	while (*src)
//	{
//		*dest = *src;
//		dest++; 
//		src++;
//	}
//	*dest = *src;
//	return str;
//}
//
//
//int main()
//{
//	//char arr1[20] = "abcd";
//	char arr1[20] = "abcdef";
//	char arr2[] = "md\0zzsb";
//	//char arr2[] = "xxxx";
//	my_strcat(arr1,arr2);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}



//strcmp的使用
//int main()
//{
//	
//	//char arr1[20] = "abcdef";
//	//char arr2[] = "md";
//	//int ret = strcmp(arr1, arr2); //-1
//	// 
//	//char arr3[] = "ndd";
//	//char arr4[] = "amdd";
//	//int ret = strcmp(arr3,arr4);  //1
//
//	//char arr5[] = "n";
//	//char arr6[] = "n";
//	//int ret = strcmp(arr5, arr6);  //0
//	
//	//char arr7[] = "acc";
//	//char arr8[] = "accd";
//	//int ret = strcmp(arr7,arr8); //- 1
//
//	char arr9[] = "accd";
//	char arr10[] = "acc";
//	int ret = strcmp(arr9, arr10); //1
//
//	printf("%d\n", ret);
//	return 0;
//}


//模拟实现


//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1, str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//	//return str1 - str2;
//}
//
//
//int main()
//{
//	//char arr1[] = "abcd";
//	//char arr2[] = "vv";
//	//int ret = my_strcmp(arr1,arr2);
//
//
//	char arr3[] = "abcd";
//	char arr4[] = "abcd";
//	int ret = my_strcmp(arr3, arr4);
//
//	if (ret == 0)
//		printf("两字符串相等\n");
//	else if (ret > 0)
//		printf("第一个字符串大\n");
//	else
//		printf("第二个字符串大\n");
//	printf("%d\n", ret);
//	
//	return 0;
//}


//strncpy的使用和熟悉
//int main()
//{
//	//char arr1[] = "abcdef";
//	//char arr2[] = "xxxxx";
//	//strncpy(arr1,arr2,3);
//	//printf("%s\n",arr1);// - xxxdef
//
//	//char arr3[] = "abcdef";
//	//char arr4[] = "xx";
//	//strncpy(arr3, arr4, 5);
//	//printf("%s\n", arr3);// - xx\0\0\0
//	return 0;
//}


//strncpy的自主实现
//char* my_strncpy(char* dest, const char* src, size_t num)
//{
//	assert(dest && src);
//	char* start = dest;
//	//库函数里面的实现
//	//while (num&&(*dest++ = *src++) != '\0')
//	//{//拷贝字符
//	//	num--;
//	//}
//	//if (num)
//	////当出现src里面到字符串末尾，那么在dest里面补\0
//	//	while (--num)
//	//		*dest++ = '\0';
//	while (num)
//	{
//		if (*src == '\0')
//			break;
//		*dest = *src;
//		dest++;
//		src++;
//		num--;
//	}
//	while(num)
//	{
//		*dest = '\0';
//		dest++;
//		num--;
//	}
//	return start;
//}
//
//int main()
//{
//	/*char arr1[] = "abcdef";
//	char arr2[] = "xxxxx";
//	my_strncpy(arr1, arr2, 3);
//	printf("%s\n", arr1);*/
//
//	char arr3[] = "abcdef";
//	char arr4[] = "xx";
//	my_strncpy(arr3, arr4, 5);
//	printf("%s\n", arr3);// - xx\0\0\0
//	return 0;
//}