#define _CRT_SECURE_NO_WARNINGS 1

#include"Contact.h"




int main()
{
	int input = 0;
	struct Contact con;//创建通讯录
	InitConcatc(&con);//初始化通讯录
	do 
	{
		menu();//菜单
		printf("请选择：>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
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
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);


	return 0;
}