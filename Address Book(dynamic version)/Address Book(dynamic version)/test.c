#define _CRT_SECURE_NO_WARNINGS 1

#include"Contact.h"


enum menu
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};


int mian()
{
	int input = 0;
	struct Contact con;
		do 
		{
			menu();
			printf("��ѡ��\n");
			scanf("%d", &input);
			switch (input)
			{
			case ADD:
				AddContact(&con);
				break;
			case DEL:
				DelContact(&con);
				break;
			case SEARCH:
				SearchContact(&con);
				break;
			case MODIFY:
				ModifyContact(&con);
				break;
			case SHOW:
				ShowContact(&con);
				break;
			case SORT:
				SortContact(&con);
				break;
			case EXIT:
				printf("�˳�\n");
				return 0;
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;
			}
		} while (input);


	return 0;
}