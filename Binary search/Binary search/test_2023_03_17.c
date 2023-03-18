#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = sizeof(arr)/sizeof(arr[0]);
	//通过操作符sizeof来计算数组元素个数，数组名就是地址
	int find = 0;//要查找的数据
	printf("请输入要查找的数据：>");
	scanf("%d",&find);
	while (left <= right)
	{
		//int mid = (left + right) / 2;
		int mid = left + (right - left) / 2;//为了防止数据越界，建议使用这种方式
		//mid必须在循环内部，每次需要更新边界和中间下标
		if (arr[mid] > find)
		{
			right = mid - 1;
		}
		else if (arr[mid] < find)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了下标为：%d\n",mid);
			break;
		}
	}
	if (left > right)
	{
		printf("未找到该数据，数据不存在\n");
	}
	
	return 0;
}