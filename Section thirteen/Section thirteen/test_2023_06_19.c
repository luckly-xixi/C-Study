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
//	//for (int i = 0; i < 26; i++)
//	//{
//	//	fputc('a' + i, pf);
//	//}
//	//int a = 'a';
//	//int ret = putc('a', pf);
//	//printf("%d", ret);//97
//	//printf("%d",a);//97
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
//	////���ļ�
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
//	int ret = fgets(arr,20,pf);
//	//��ȡ��ʱ��Ὣ�ļ���Ļ��кͿո��ȡ��ӡ�����ң�һ�ζ�ȡ��������Ĭ�Ͻ���
//	printf("%s",arr);
//	printf("%d",ret);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//��ʽ�������������
struct S
{
	char name[20];
	int age;
	float hight;
};
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
	//fprintf(pf,"%s %d %.1f",s.name,s.age,s.hight );
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
	//fscanf(pf,"%s %d %.1f",s.name,&(s.age),&(s.hight));
	//printf("%s %d %.1f", s.name, s.age, s.hight);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//����������
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


//���������
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


//sscanf��ʹ�� //sprintf��ʹ��
//int main()
//{
//	struct S s = { "zhang san",25,180.3f };
//	struct S tmp = { 0 };
//	char buf[100] = { 0 };
//	//�ѽṹ������ת��Ϊ�ַ���
//	sprintf(buf,"%s %d %f",s.name,s.age,s.hight);
//	printf("%s\n",buf);
//
//	//���ַ���ת��Ϊ�ṹ������
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
//	//���ļ�����ʼλ�ÿ�ʼƫ��
//	fseek(pf, 2, SEEK_SET);
//	int ret = fgetc(pf);
//	printf("%c\n",ret);
//
//	//�����ļ����е�ƫ����
//	int tmp = ftell(pf);
//	printf("�ļ����м�¼ָ���λ��Ϊ��%d\n",tmp);
//
//	//��ָ�뵱ǰλ�ÿ�ʼƫ��
//	fseek(pf, -2, SEEK_CUR);
//	ret = fgetc(pf);
//	printf("%c\n",ret);
//
//	tmp = ftell(pf);
//	printf("�ļ����м�¼ָ���λ��Ϊ��%d\n", tmp);
//
//	//���ļ���ĩβ��ʼƫ��
//	fseek(pf,-3,SEEK_END);
//	ret = fgetc(pf);
//	printf("%c\n",ret);
//
//	tmp = ftell(pf);
//	printf("�ļ����м�¼ָ���λ��Ϊ��%d\n", tmp);
//
//	//���ļ����е�ָ��ָ����ʼλ��
//	rewind(pf);
//	tmp = ftell(pf);
//	printf("�ļ����м�¼ָ���λ��Ϊ��%d\n", tmp);
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