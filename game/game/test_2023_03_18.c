#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>



//闪烁打印字符串
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

//实现密码登录（三次机会）
//int main()
//{
//	int i = 0;
//	char passward[20];
//	printf("请输入密码:>");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s",passward);
//		if (strcmp(passward, "giaogiao") == 0)
//		{
//			printf("密码正确，登陆成功\n");
//		}
//		else
//		{
//			printf("密码错误请重新输入\n");
//			break;
//		}
//	}
//	if (3 == i)
//	{
//		printf("三次密码错误，退出程序\n");
//	}
//
//	return 0;
//}




//猜数字游戏

void game()
{
	//游戏函数
	int guess = 0;
	int ret = rand()%100 + 1;
	//printf("%d",ret);
	//产生随机数
	while (1)
	{
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你猜中了！！\n");
			break;
		}
	}
}


void menu()
{
	//菜单函数
	printf("#############################\n");
	printf("######    1.  play     ######\n");
	printf("######    0.  exit     ######\n");
	printf("#############################\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//通过时间戳来产生随机数 - 随机数的生成器
	do
	{
		//进入程序，打印菜单
		menu();
		printf("请选择：>");
		scanf("%d",&input);
		//通过输入input的值来选择
		switch(input)
		{
		case 1:
			printf("游戏开始,请输入你猜测的数值（1 ~100）\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);

	return 0;
}