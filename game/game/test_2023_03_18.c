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

