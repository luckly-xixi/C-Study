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

int main()
{
	int input = 0;
	struct Contact con;//����ͨѶ¼
	InitConcatc(&con);//��ʼ��ͨѶ¼
	do 
	{
		menu();//�˵�
		printf("��ѡ��>\n");
		scanf("%d", &input);
		switch (input)
		{
//������switchʹ��
		/*case 1:
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			SearchContact(&con);
			break;
		case 4:
			ModifyContact(&con);
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			SortContact(&con);
			break;
		case 0:
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;*/


//ö�����͵�����
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