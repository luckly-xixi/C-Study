#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = sizeof(arr)/sizeof(arr[0]);
	//ͨ��������sizeof����������Ԫ�ظ��������������ǵ�ַ
	int find = 0;//Ҫ���ҵ�����
	printf("������Ҫ���ҵ����ݣ�>");
	scanf("%d",&find);
	while (left <= right)
	{
		//int mid = (left + right) / 2;
		int mid = left + (right - left) / 2;//Ϊ�˷�ֹ����Խ�磬����ʹ�����ַ�ʽ
		//mid������ѭ���ڲ���ÿ����Ҫ���±߽���м��±�
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
			printf("�ҵ����±�Ϊ��%d\n",mid);
			break;
		}
	}
	if (left > right)
	{
		printf("δ�ҵ������ݣ����ݲ�����\n");
	}
	
	return 0;
}