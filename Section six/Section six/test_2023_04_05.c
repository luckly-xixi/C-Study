#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	char* pc = &n;
//	int* pi = &n;
//	*pc = 0; 
//	*pi = 0; 
//	return 0;
//}

//int main()
//{
//	int* p;//����ָ�����p
//	//δ��ʼ������ʱָ���ڵ����������ֵ
//	//Ҳ��������ĵ�ַ�������������
//	printf("%p\n",p);//�ڴ�ʹ��
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 0 };
//	int i = 0;
//	for (i = 0; i <= 5; i++)
//	{//�����������±��Ǵ�0~4����i=5ʱ���Խ�����
//		//ͬʱ���i<0��ʱ��Ҳ�ᵼ��Խ�����
//		arr[i] = 0;
//	}
//	return 0;
//}


//int* test()
//{
//	int num = 200;
//	return &num;
//	//num��һ���ֲ�����������test����
//	//������
//}
//int main()
//{
//	int* p = test();
//	printf("%p\n",p);
//	return 0;
//}

//int main()
//{
//	int arr[4];
//	int* p = NULL;
//	
//	for (p=arr; p<&arr[4];)
//	{
//		*p++ = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[4];
//	int* p = NULL;
//
//	for (p = &arr[4]; p >= &arr[0]; p--)
//	{
//		*p = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//��ű���a�ĵ�ַ������һ��ָ��
//	int** pp = &p;
//	//���һ��ָ������ĵ�ַ����������ָ��
//	return 0;
//}

//һά����ģ���ά����
int main()
{
	int* arr1[3] = { 1,1,1};
	int* arr2[3] = { 3,3,3};
	int* arr3[3] = { 5,5,5};
	int* arr4[3] = { arr1,arr2,arr3 };
	//��������ָ�����飬�����ֵ
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 3; j++)
		{
			printf("%d ", *((*arr4+i)+j));
		}
	}
	 
	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j < 3; j++)
	//	{
	//		printf("%d ",arr4[i][j]);//arr4[i][j]�൱����*((*arr4+i)+j)
	//	}
	//}

	return 0;
}