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