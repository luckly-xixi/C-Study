#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>



//�ļ��򿪺͹ر�
int main()
{
	FILE* pf;
	//���ļ�
	pf = fopen("text.txt","w");
	if (NULL == pf)
	{
		perror("fopen");
	}


	//�ر��ļ�
	fcolse(pf);

	return 0;
}