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


//stelen��ʹ�ú���Ϥ��


//int main()
//{
//	//char* p1 = "abcdef"; - 6
//	//char arr1[] = "abcdef"; - 6
//	//int len = strlen(p1);
//	//int len = strlen(arr1);
//	//char arr2[] = {'a','b','c'};
//	//int len = strlen(arr2); - ���ֵ
//
//	//char* p2 = 'a';
//	//int len = strlen(p2); - #error
//	printf("%d\n",len);
//	return 0;
//}


//int main()
//{
//	//������Ϊ >
//	if (strlen("abc") - strlen("abcdef") > 0 )
//		//��if�е����ͨ�����������ַ����ĳ��ȣ�3-6����������stelen�������ص�
//		//�������޷���������ô3-6�õ���-3Ҳ�����޷�����������
//		printf(">\n");
//	else
//		printf("<\n");
//	return 0;
//}



//ģ��ʵ��stelen

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


//strcpy��ʹ�ã������ַ��������޸ģ�
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


//strcpy��ģ��ʵ��
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




//strcatʹ��
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


//ģ��ʵ��
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest&&src);
//	char* str = dest;
//
//	while (*dest)
//	//while (*dest++);  �������⣬Ŀ�ĵؿռ��ڵ�'\0'δ�����ǵ�
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



//strcmp��ʹ��
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


//ģ��ʵ��


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
//		printf("���ַ������\n");
//	else if (ret > 0)
//		printf("��һ���ַ�����\n");
//	else
//		printf("�ڶ����ַ�����\n");
//	printf("%d\n", ret);
//	
//	return 0;
//}


//strncpy��ʹ�ú���Ϥ
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


//strncpy������ʵ��
//char* my_strncpy(char* dest, const char* src, size_t num)
//{
//	assert(dest && src);
//	char* start = dest;
//	//�⺯�������ʵ��
//	//while (num&&(*dest++ = *src++) != '\0')
//	//{//�����ַ�
//	//	num--;
//	//}
//	//if (num)
//	////������src���浽�ַ���ĩβ����ô��dest���油\0
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





//strncat����Ϥ��ʹ��


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


//strncat����ʵ��

//char* my_strncat(char* dest,const char* src,size_t num)
//{
//	char* str = dest;
//
//	//�⺯��
//	while (*str++);
//	//����Ŀ�ĵ��ַ������������Ϊwhile(*str++)����ͣ�µ�������
//	//*str == '\0'���������ں���++������str��ǰ��һ������ʱ��Ҫ������һ��
//	str--;
//	//ͨ���������п�����Ŀ�ĵ�ĩβ׷�ӵ��ַ�����
//	while (num--)
//		if ((*str++ = *src++) == 0)
//			//�����Դͷ����û����ô����ַ�׷�ӵ�Ŀ�ĵ�ĩβ��ֻ����һ��'\0'
//			return dest;
//	*str = '\0';
//	return dest;
//
//	//����ʵ��
//	//while (*dest)
//	//{//����Ŀ�ĵ��ַ�������ĩβ
//	//	dest++;
//	//}
//	////��ʼ׷��
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





////strncmp����Ϥ��ʹ��
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




//strncmp������ʵ��

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



//strstr ����Ϥ���ʺ�
//int main()
//{
//	char arr1[] = "abcefgggabcd";
//	char arr2[] = "abcd";
//	char* p = strstr(arr1, arr2);
//	printf("%s\n",p);
//	return 0;
//}




//strstr����ʵ�֣�BF �㷨��
//char* my_strstr(const char* str1,const char* str2)
//{
////	//����һ��
////	const char* s1 = str1;
////	const char* s2 = str2;
////	const char* p = str1;
//////str1��str2��������Ҫ��������¼λ�ã���������p�������������������е�s1��������Ӵ�
////	//���е�s2��ȥ���бȽ��ַ���һ����
////	while (*p)//��ץ�������е�p
////	{
////		s1 = p;
////		s2 = str2;//���Ӵ���ͷ��ʼ���������ַ��Ƚ�
////		while (*s1 != '\0' && *s2 != '\0' && (*s1 == *s2))
////		{//�������Ӵ���Ϊ������ĩβ�����ұȽϵ��ַ�һ��
////			s1++;
////			s2++;
////		}
////		if (*s2 == '\0')
////		{//�������Ӵ�������ϣ�˵���Ӵ�������������
////			return (char*)p;
////		}
////		p++;
////	}
////	return NULL;
//
//
//
//	//��������
//	assert(str1&&str2);//���� 
//	int str1len = strlen(str1);
//	int str2len = strlen(str2);
//	//����������Ӵ��ĳ�������ʹ�������±�
//	int i = 0;
//	int j = 0;
//
//	while (i < str1len || j < str2len)
//	{
//		//����������Ӵ���ȶ������һ��
//		if (str1[i] == str2[j])
//		{
//			i++;
//			j++;
//		}
//		else
//		{//���������Ӵ���Ϊ0��������Ϊƥ��ɹ�����һ��
//			i = i - j + 1;
//			j = 0;
//		}
//	}
//
//	if (str2len >= j)
//	{//�Ӵ�������ϣ�˵���ҵ�
//		return str1+i-j;
//	}
//	return NULL;//�����������˵���Ӵ��������в�����
//}



//strstrʵ��(KMP�㷨)

//void GetNext(char* sub,int* next,int lenSub)
//{//��next����
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
//	//����������Ӵ��ĳ������ڷ����������ʹ��
//	int lenStr = strlen(str);
//	int lenSub = strlen(sub);
//	
//	//���Ϸ�����Ŀ���
//	if (lenStr == 0 || lenSub == 0)
//		return -1;//���ַ������
//	if (pos < 0 || pos >= lenStr)
//		return -1;//pos�±겻�Ϸ�
//	
//	//��next�������ռ�
//	int* next = (int*)malloc(sizeof(int) * lenSub);
//	assert(next);
//
//	//���next����
//	GetNext(sub, next, lenSub);
//
//	//�趨���������Ӵ�����ʱ�ı�־
//	int i = pos;//��������
//	int j = 0;//�����Ӵ�
//
//
//	while (i<lenStr && j<lenSub)
//	{
//		if (j == -1 || str[i] == sub[j])
//		{//�����Ƚ���һ��
//			i++;
//			j++;
//		}
//		else
//		{//������ͨ��next�������
//			j = next[j];
//		}
//	}
//	if (j >= lenSub)
//	{//����������
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
//	int i = 0;//����
//	int j = 0;//�Ӵ�
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
//		printf("������\n");
//	else
//		printf("%s\n",p);
//	return 0;
//}


//strtok��Ϥʹ��

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
//	//forѭ���÷�
//	for (char* p = strtok(arr1,arr2); p != NULL; p = strtok(NULL,arr2))
//	{
//		printf("%s\n",p);
//	}
//
//	return 0;
//}


//strtok��ʵ��
char* my_strtok(char* str,const char* sep)
{
	assert(str && sep);
	static char* s1 = NULL;
	static const char* s2 = NULL;
	static int sz1 = 0;
	static int sz2 = 0;
	static int count = 0;
	//��һ�ν���
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
	//���ǵ�һ��
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

	//forѭ���÷�
	for (char* p = my_strtok(arr1, arr2); p != NULL; p = my_strtok(NULL, arr2))
	{
		printf("%s\n", p);
	}
	return 0;
}