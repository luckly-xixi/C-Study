#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<errno.h>
#include<string.h>


//
////�ļ��򿪺͹ر�
// 
// 
// 
//int main()
//{
//	FILE* pf;
//	//���ļ�
//	pf = fopen("text.txt","w");//���·��
//	//pf = fopen("D:\\data\\text.txt","w");//����·��
//	//���
//	if (NULL == pf)
//	{
//		perror("fopen");
//	}
//
//	//�ر��ļ�
//	fcolse(pf);
//	//��Ϊ��
//	pf = NULL;
//	return 0;
//}




//д���ַ�
//int main()
//{
//	//���ļ�
//   FILE* pf = fopen("test.txt", "w");//���·��
//	//���
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
//	//�ر��ļ�
//	fclose(pf);
//	//��Ϊ��
//	pf = NULL;
//
//	return 0;
//}


//���ַ�
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("D:\\Gittee���زֿ�\\C-learn\\c-learn\\Section thirteen\\Section thirteen\\test.txt", "r");//���·��
//	 //���
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//
//	//���ļ�
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
//	//�ر��ļ�
//	fclose(pf);
//	//��Ϊ��
//	pf = NULL;
//	return 0;
//}


//д�ַ���
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
// //���Զ����ַ��������һ��' \0 '
// //������д�ļ���ʱ�����ַ�����������һ������ת���ַ��Ļ������������ļ�������������
// //��������ʱ��Ĭ�����ַ���ĩβȥ����֮��ӵ����Ӧ���ַ���
//	fputs("hello\n", pf);
//	fputs("world", pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//���ַ���
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
//	//��ȡ��ʱ��Ὣ�ļ���Ļ��кͿո��ȡ��ӡ�����ң�һ�ζ�ȡ��������Ĭ�Ͻ���
//	printf("%s",arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//��ʽ�������������
//struct S
//{
//	char name[20];
//	int age;
//	float hight;
//};
//��ʽ��д�ļ�
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



//��ʽ���Ķ��ļ�
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

