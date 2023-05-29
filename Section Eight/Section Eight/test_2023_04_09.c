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
//
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





//strncat的熟悉和使用


//int main()
//{
//	//char arr1[20] = "ab\0daaaaaaaa";
//	//char arr2[] = "xxxx";
//	//strncat(arr1, arr2, 5);
//
//	//char arr1[20] = "ab\0cddddd";
//	//char arr2[] = "xxx";
//	//strncat(arr1, arr2, 2);
//
//	//char arr1[20] = "ab\0cddddd";
//	//char arr2[] = "xxx";
//	//strncat(arr1, arr2, 5);
//
//	char arr1[20] = "ab\0cddddd";
//	char arr2[] = "xxx";
//	strncat(arr1, arr1, 2);
//
//	printf("%s\n",arr1);
//	return 0;
//}


//strncat自主实现

//char* my_strncat(char* dest,const char* src,size_t num)
//{
//	char* str = dest;
//
//	//库函数
//	while (*str++);
//	//遍历目的地字符串到达最后，因为while(*str++)所以停下的条件是
//	//*str == '\0'，但是由于后置++，导致str又前进一步，此时需要往后退一步
//	str--;
//	//通过个数进行控制在目的地末尾追加的字符个数
//	while (num--)
//		if ((*str++ = *src++) == 0)
//			//如果在源头当中没有那么多的字符追加到目的地末尾，只补充一个'\0'
//			return dest;
//	*str = '\0';
//	return dest;
//
//	//自主实现
//	//while (*dest)
//	//{//遍历目的地字符串到其末尾
//	//	dest++;
//	//}
//	////开始追加
//	//while (num && (*dest++ = *src++))
//	//{
//	//	num--;
//	//}
//	//if (num)
//	//{
//	//	*dest = '\0';
//	//	num--;
//	//}
//	//if (0 == num)
//	//{
//	//	*dest = '\0';
//	//}
//	//return str;
//
//}
//
//
//int main()
//{
//	//char arr1[20] = "ab\0cddddd";
//	//char arr2[] = "xxx";
//	//my_strncat(arr1, arr2, 2);
//
//	//char arr1[20] = "ab\0cddddd";
//	//char arr2[] = "xxx";
//	//my_strncat(arr1, arr2, 5);
//
//	char arr1[20] = "ab\0cddddd";
//	char arr2[] = "xxx";
//	my_strncat(arr1, arr1, 2);
//
//	printf("%s\n",arr1);
//	return 0;
//}





////strncmp的熟悉与使用
//int main()
//{
//	//char arr1[] = "abcd";
//	//char arr2[] = "abc";
//	//int ret = strncmp(arr1, arr2, 3);// - 0
//	//printf("%d\n",ret);
//
//	//char arr1[] = "abcd";
//	//char arr2[] = "abd";
//	//int ret = strncmp(arr1, arr2, 3);
//	//printf("%d\n", ret);// -1
//
//	//char arr1[] = "abdd";
//	//char arr2[] = "abb";
//	//int ret = strncmp(arr1, arr2, 3);
//	//printf("%d\n", ret); //    -    1
//
//	char arr1[] = "zbcd";
//	char arr2[] = "xxxx";
//	int ret = strncmp(arr1, arr1, 3);
//	printf("%d\n", ret);
//
//	return 0; 
//}




//strncmp的自主实现

//int my_strncmp(const char* str1,const char* str2,size_t num)
//{
//	assert(str1 && str2);
//		while ((num) && (*str1 == *str2))
//		{
//			str1++;
//			str2++;
//			num--;
//			if ((*str1 == '\0') || (*str2 == '\0')||(num == 0))
//				return 0;
//		}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}
//
//
//int main()
//{
//	
//	//char arr1[] = "abcd";
//	//char arr2[] = "abc";
//	//int ret = my_strncmp(arr1, arr2, 3);// - 0
//	//printf("%d\n",ret);
//
//	//char arr1[] = "abcd";
//	//char arr2[] = "abd";
//	//int ret = my_strncmp(arr1, arr2, 3);
//	//printf("%d\n", ret);// -1
//
//	//char arr1[] = "abdd";
//	//char arr2[] = "abb";
//	//int ret = my_strncmp(arr1, arr2, 3);
//	//printf("%d\n", ret); //    -    1
//
//	char arr1[] = "zbcd";
//	char arr2[] = "xxxx";
//	int ret = my_strncmp(arr1, arr1, 3);
//	printf("%d\n", ret);
//
//	return 0;
//}



//strstr 的熟悉和适合
//int main()
//{
//	char arr1[] = "abcefgggabcd";
//	char arr2[] = "abcd";
//	char* p = strstr(arr1, arr2);
//	printf("%s\n",p);
//	return 0;
//}




//strstr自主实现（BF 算法）
//char* my_strstr(const char* str1,const char* str2)
//{
////	//方法一：
////	const char* s1 = str1;
////	const char* s2 = str2;
////	const char* p = str1;
//////str1和str2不动，主要是用来记录位置，让主串中p遍历主串，而主串当中的s1用于配合子串
////	//当中的s2来去进行比较字符的一致性
////	while (*p)//主抓主串当中的p
////	{
////		s1 = p;
////		s2 = str2;//让子串从头开始和主串的字符比较
////		while (*s1 != '\0' && *s2 != '\0' && (*s1 == *s2))
////		{//主串和子串都为遍历到末尾，并且比较的字符一样
////			s1++;
////			s2++;
////		}
////		if (*s2 == '\0')
////		{//在这里子串遍历完毕，说明子串存在于主串中
////			return (char*)p;
////		}
////		p++;
////	}
////	return NULL;
//
//
//
//	//方法二：
//	assert(str1&&str2);//断言 
//	int str1len = strlen(str1);
//	int str2len = strlen(str2);
//	//求出主串和子串的长度用于使用数组下标
//	int i = 0;
//	int j = 0;
//
//	while (i < str1len || j < str2len)
//	{
//		//如果主串和子串相等都向后走一步
//		if (str1[i] == str2[j])
//		{
//			i++;
//			j++;
//		}
//		else
//		{//不等则让子串置为0，主串置为匹配成功的下一个
//			i = i - j + 1;
//			j = 0;
//		}
//	}
//
//	if (str2len >= j)
//	{//子串遍历完毕，说明找到
//		return str1+i-j;
//	}
//	return NULL;//主串遍历完毕说明子串在主串中不存在
//}



//strstr实现(KMP算法)

//void GetNext(char* sub,int* next,int lenSub)
//{//求next数组
//	next[0] = -1;
//	next[1] = 0;
//	int i = 2;
//	int k = 0;
//
//	while (i < lenSub)
//	{
//		if (k == -1 || sub[i - 1] == sub[k])
//		{
//			next[i] = k + 1;
//			i++;
//			k++;
//		}
//		else
//		{
//			k = next[k];
//		}
//	}
//}
//
//
//
//int KMP(const char* str, const char* sub, int pos)
//{
//	assert(str && sub);
//	//求出主串和子串的长度用于方便访问数组使用
//	int lenStr = strlen(str);
//	int lenSub = strlen(sub);
//	
//	//不合法情况的考虑
//	if (lenStr == 0 || lenSub == 0)
//		return -1;//空字符串情况
//	if (pos < 0 || pos >= lenStr)
//		return -1;//pos下标不合法
//	
//	//给next数组分配空间
//	int* next = (int*)malloc(sizeof(int) * lenSub);
//	assert(next);
//
//	//求出next数组
//	GetNext(sub, next, lenSub);
//
//	//设定出主串和子串遍历时的标志
//	int i = pos;//遍历主串
//	int j = 0;//遍历子串
//
//
//	while (i<lenStr && j<lenSub)
//	{
//		if (j == -1 || str[i] == sub[j])
//		{//相等则比较下一个
//			i++;
//			j++;
//		}
//		else
//		{//不等则通过next数组回退
//			j = next[j];
//		}
//	}
//	if (j >= lenSub)
//	{//遍历完的情况
//		return i - j;
//	}
//	return -1;
//}

//
//void GetNext(char* sub, int* next, int lenSub)
//{
//	next[0] = -1;
//	next[1] = 0; 
//
//	int i = 2;
//	int k = 0;
//
//	while (i < lenSub)
//	{
//		if (k == -1 || sub[i - 1] == sub[k])
//		{
//			next[i] = k + 1;
//			i++;
//			k++;
//		}
//		else
//		{
//			k = next[k];
//		}
//	}
//}
//
//char* my_strstr(const char* str, const char* sub)
//{
//	assert(str && sub);
//	
//	int lenStr = strlen(str);
//	int lenSub = strlen(sub);
//
//	if (lenStr == 0 || lenSub == 0)
//		return NULL;
//
//	int* next = (int*)malloc(sizeof(int) * lenSub);
//	assert(next);
//	
//	GetNext(sub,next,lenSub);
//
//	int i = 0;//主串
//	int j = 0;//子串
//	
//	while (i<lenStr && j<lenSub)
//	{
//		if (j == -1 || str[i] == sub[j])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//	if (j >= lenSub)
//	{
//		return str+i - j;
//	}
//	return NULL;
//}
//
//
//int main()
//{
//	char arr1[] = "abcefgggabcd";
//	char arr2[] = "bcd";
//	char* p = my_strstr(arr1, arr2);
//	if (NULL == p)
//		printf("不存在\n");
//	else
//		printf("%s\n",p);
//	return 0;
//}


//strtok熟悉使用

//int main()
//{
//	char arr1[] = "xixi@qq.com";
//	char arr2[] = "@.";
//
//	//char* p = strtok(arr1, arr2);
//	//printf("%s\n",p);
//	//
//	//p = strtok(NULL, arr2);
//	//printf("%s\n", p);
//
//	//p = strtok(NULL, arr2);
//	//printf("%s\n", p);
//
//	//for循环用法
//	for (char* p = strtok(arr1,arr2); p != NULL; p = strtok(NULL,arr2))
//	{
//		printf("%s\n",p);
//	}
//
//	return 0;
//}


//strtok的实现
char* my_strtok(char* str,const char* sep)
{
	assert(str && sep);
	static char* s1 = NULL;
	static const char* s2 = NULL;
	static int sz1 = 0;
	static int sz2 = 0;
	static int count = 0;
	//第一次进入
	if (str != NULL)
	{
		sz1 = strlen(str);
		sz1 = strlen(sep);
		s2 = str;
		for (*str; str != '\0'; str++)
		{
			for (int i = 0; i < sz2; i++)
			{
				if (i == 0)
				{
					count++;
				}
				if (*str == *(sep + i))
				{
					*str = 0;
					s1 = str;
					return s2;
				}
			}
		}
	}
	//不是第一次
	else
	{
		s2 = s1 + 1;
		str = s2;
		sz2 = strlen(sep);
		for (*str; str != '\0'; str++)
		{
			for (int i = 0; i < sz2; i++)
			{
				if (i == 0)
				{
					count++;
				}
				if (*str == *(sep + i))
				{
					*str = 0;
					s1 = str;
					return s2;
				}
			}
		}
		if (count > sz1)
		{
			return NULL;
		}
		return s2;
	}
}


int main()
{
	char arr1[] = "xixi@qq.com";
	char arr2[] = "@.";

	//char* p = strtok(arr1, arr2);
	//printf("%s\n",p);

	//p = strtok(NULL, arr2);
	//printf("%s\n", p);

	//p = strtok(NULL, arr2);
	//printf("%s\n", p);

	//for循环用法
	for (char* p = my_strtok(arr1, arr2); p != NULL; p = my_strtok(NULL, arr2))
	{
		printf("%s\n", p);
	}
	return 0;
}