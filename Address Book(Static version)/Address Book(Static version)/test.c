#define _CRT_SECURE_NO_WARNINGS 1

#include"Contact.h"




int main()
{
	int input = 0;
	struct Contact con;//����ͨѶ¼
	InitConcatc(&con);//��ʼ��ͨѶ¼
	do 
	{
		menu();//�˵�
		printf("��ѡ��>\n");
		scanf("%s", &input);
		switch (input)
		{
		case1:
			AddContact(&con);
			break;
		case2:
			break;
		case3:
			break;
		case4:
			break;
		case5:
			Show
			break;
		case6:
			break;
		case0:
			break;
		default:
			break;
		}
	} while (input);


	return 0;
}