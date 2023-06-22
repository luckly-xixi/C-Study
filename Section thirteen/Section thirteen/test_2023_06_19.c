#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<errno.h>
#include<string.h>


//
////文件打开和关闭
// 
// 
// 
//int main()
//{
//	FILE* pf;
//	//打开文件
//	pf = fopen("text.txt","w");//相对路径
//	//pf = fopen("D:\\data\\text.txt","w");//绝对路径
//	//检查
//	if (NULL == pf)
//	{
//		perror("fopen");
//	}
//
//	//关闭文件
//	fcolse(pf);
//	//置为空
//	pf = NULL;
//	return 0;
//}




//写入字符
//int main()
//{
//	//打开文件
//   FILE* pf = fopen("test.txt", "w");//相对路径
//	//检查
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	for (int i = 0; i < 26; i++)
//	{
//		fputc('a' + i, pf);
//	}
//
//	//关闭文件
//	fclose(pf);
//	//置为空
//	pf = NULL;
//
//	return 0;
//}


//读字符
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("D:\\Gittee本地仓库\\C-learn\\c-learn\\Section thirteen\\Section thirteen\\test.txt", "r");//相对路径
//	 //检查
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//
//	//读文件
//	//for (int i = 0; i < 26; i++)
//	//{
//	//	int ch = fgetc(pf);
//	//	printf("%c",ch);
//	//}
//
//
//	int ch = 0;
//	while ((ch = fgetc(pf))!= EOF)
//	{
//		printf("%c", ch);
//	}
//
//
//	//关闭文件
//	fclose(pf);
//	//置为空
//	pf = NULL;
//	return 0;
//}


//写字符串
//int main()
//{
//	FILE* pf = fopen("test.txt","w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	
//	//fputs("hello",pf);
//	//fputs("world",pf);
// //会自动在字符串后面放一个' \0 '
// //并且在写文件的时候不在字符串中主动放一个换行转义字符的话，并不会在文件当中主动换行
// //多次输入的时候默认在字符串末尾去加上之后加的相对应的字符串
//	fputs("hello\n", pf);
//	fputs("world", pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//读字符串
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//		fputs("hello",pf);
//
//	char arr[20]="**********";
//	fgets(arr,20,pf);
//	//读取的时候会将文件里的换行和空格读取打印，并且，一次读取遇见换行默认结束
//	printf("%s",arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//格式化的输入与输出
//struct S
//{
//	char name[20];
//	int age;
//	float hight;
//};
//格式化写文件
//int main()
//{
//	struct S s = { "zhangsan",5,174.2f };
//	FILE* pf = fopen("test.txt","w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	
//	fprintf(pf,"%s %d %.1f",s.name,s.age,s.hight );
//	
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//格式化的读文件
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fscanf(pf,"%s %d %.1f",s.name,&(s.age),&(s.hight));
//	printf("%s %d %.1f", s.name, s.age, s.hight);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

