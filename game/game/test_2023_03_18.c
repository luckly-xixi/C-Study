#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>



//��˸��ӡ�ַ���
//int main()
//{
//	char arr1[] = "welcome to there!!!!";
//	char arr2[] = "####################";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf(arr2);
//		Sleep(1000);
//		system("cls");
//	}
//	printf(arr2);
//
//	return 0;
//}

//ʵ�������¼�����λ��ᣩ
//int main()
//{
//	int i = 0;
//	char passward[20];
//	printf("����������:>");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s",passward);
//		if (strcmp(passward, "giaogiao") == 0)
//		{
//			printf("������ȷ����½�ɹ�\n");
//		}
//		else
//		{
//			printf("�����������������\n");
//			break;
//		}
//	}
//	if (3 == i)
//	{
//		printf("������������˳�����\n");
//	}
//
//	return 0;
//}




//��������Ϸ

void game()
{
	//��Ϸ����
	int guess = 0;
	int ret = rand()%100 + 1;
	//printf("%d",ret);
	//���������
	while (1)
	{
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ������ˣ���\n");
			break;
		}
	}
}


void menu()
{
	//�˵�����
	printf("#############################\n");
	printf("######    1.  play     ######\n");
	printf("######    0.  exit     ######\n");
	printf("#############################\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//ͨ��ʱ�������������� - �������������
	do
	{
		//������򣬴�ӡ�˵�
		menu();
		printf("��ѡ��>");
		scanf("%d",&input);
		//ͨ������input��ֵ��ѡ��
		switch(input)
		{
		case 1:
			printf("��Ϸ��ʼ,��������²����ֵ��1 ~100��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);

	return 0;
}