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
//	//for (int i = 0; i < 26; i++)
//	//{
//	//	fputc('a' + i, pf);
//	//}
//	//int a = 'a';
//	//int ret = putc('a', pf);
//	//printf("%d", ret);//97
//	//printf("%d",a);//97
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
//	////读文件
//	//for (int i = 0; i < 26; i++)
//	//{
//	//	int ch = fgetc(pf);
//	//	printf("%c",ch);
//	//}
//
//
//	//int ch = 0;
//	//while ((ch = fgetc(pf))!= EOF)
//	//{
//	//	printf("%c", ch);
//	//}
//
//	//int a = 'a';
//	//int ret = fgetc(pf);
//	//printf("%d\n",ret);//97
//	//printf("%d\n",a);//97
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
//	int ret = fputs("hello\n", pf);
//	printf("%d\n",ret);
//	ret = fputs("world", pf);
//	printf("%d\n", ret);
//
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
//	int ret = fgets(arr,20,pf);
//	//读取的时候会将文件里的换行和空格读取打印，并且，一次读取遇见换行默认结束
//	printf("%s",arr);
//	printf("%d",ret);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//格式化的输入与输出
struct S
{
	char name[20];
	int age;
	float hight;
};
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
	//fprintf(pf,"%s %d %.1f",s.name,s.age,s.hight );
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
	//fscanf(pf,"%s %d %.1f",s.name,&(s.age),&(s.hight));
	//printf("%s %d %.1f", s.name, s.age, s.hight);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//二进制输入
//int main()
//{
//	struct S s = {"zhang san",24,180.2f};
//	FILE* pf = fopen("test.txt","wb");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	
	//fwrite(&s,sizeof(s),1,pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//二进制输出
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
	//fread(&s, sizeof(s), 1, pf);
	//printf("%s %d %f",s.name,s.age,s.hight);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//sscanf的使用 //sprintf的使用
//int main()
//{
//	struct S s = { "zhang san",25,180.3f };
//	struct S tmp = { 0 };
//	char buf[100] = { 0 };
//	//把结构体数据转换为字符串
//	sprintf(buf,"%s %d %f",s.name,s.age,s.hight);
//	printf("%s\n",buf);
//
//	//把字符串转化为结构体数据
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.hight));
//	printf("%s %d %f", tmp.name, tmp.age, tmp.hight);
//
//	return 0;
//}







//fseek  rewind  ftell
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen:");
//		return 1;
//	}
//	//从文件的起始位置开始偏移
//	fseek(pf, 2, SEEK_SET);
//	int ret = fgetc(pf);
//	printf("%c\n",ret);
//
//	//返回文件当中的偏移量
//	int tmp = ftell(pf);
//	printf("文件当中记录指针的位置为：%d\n",tmp);
//
//	//从指针当前位置开始偏移
//	fseek(pf, -2, SEEK_CUR);
//	ret = fgetc(pf);
//	printf("%c\n",ret);
//
//	tmp = ftell(pf);
//	printf("文件当中记录指针的位置为：%d\n", tmp);
//
//	//从文件的末尾开始偏移
//	fseek(pf,-3,SEEK_END);
//	ret = fgetc(pf);
//	printf("%c\n",ret);
//
//	tmp = ftell(pf);
//	printf("文件当中记录指针的位置为：%d\n", tmp);
//
//	//让文件当中的指针指向起始位置
//	rewind(pf);
//	tmp = ftell(pf);
//	printf("文件当中记录指针的位置为：%d\n", tmp);
//
//	return 0;
//}


int main()
{
	int c;
	FILE* pf = fopen("test.txt","r");
	if (NULL == pf)
	{
		perror("fopen:");
		return 1;
	}

	while ((c == fgetc(pf) != EOF))
	{
		putchar(c);
	}

	if (ferror(pf))
	{
		puts("I/O error when reading");
	}
	else if (feod(pf))
	{
		puts("End of file reached successfully");
	}

	fclose(pf);
	pf == NULL;
	return 0;
}