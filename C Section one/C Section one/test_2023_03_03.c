#define _CRT_SECURE_NO_WARNINGS 1


//stdio - std input  output
//.h - header
//��׼�������
////���������Ļ�ϴ�ӡ���ݣ�����ʹ��printf����⺯��
////printf��һ��C���Ա������ṩ�Ŀ⺯��
////�⺯����ʹ�ã�Ҫ����ͷ�ļ�
//int main()
////int�Ǻ����ķ�������
////���ͣ�
////main�����ǳ�������
////һ��������main�������ҽ���һ��
//{
//	printf("hello world\n");
//	printf("he he\n");
//	return 0;
//	//C������һ��Լ����
//  //����0��ʾ��������
//  //���ص��Ƿ�0����ʾ�쳣����
//}


//��ʱ�����ǻ�������Щд��
//
// д��һ���ȽϹ��ϵ�д�� 
//void main()
//{
//	return 0;
//}
//д����������׼��д��
//main()
//{
//
//}
//д������
//int main(void)//�����void����main��������Ҫ����
//{
//	return 0;
//}


//%d  ��ӡ10���Ƶ�����
//int main()
//{
//	printf("%d\n",sizeof(char));//1
//	printf("%d\n",sizeof(short));//2
//	printf("%d\n",sizeof(int));//4
//	printf("%d\n",sizeof(long));//4
//	printf("%d\n",sizeof(long long));//8
//	printf("%d\n",sizeof(float));//4
//	printf("%d\n",sizeof(double));//8
//
//	return 0;
//}

//����
//int main()
//{
//	int age = 10;
//	float weight = 45.5f;
//	//���ݺ����һ��f�Żᱻ�϶�Ϊ��float���͵�
//	//������ݵĺ��治��f���ᱻ�������Զ��϶�Ϊdouble���͵�
//	return 0;
//}

#include <stdio.h>

//int global = 2019;//ȫ�ֱ���
//int main()
//{
//	int local = 2018;//�ֲ�����
//	//���涨���global�᲻�������⣿
//	int global = 2020;//�ֲ�����
//	printf("global = %d\n", global);
//	return 0;
//}


//�������������ĺ�
//int main()
//{
//
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//����
//	scanf("%d %d",&num1,&num2);
//	//& - ȡ��ַ
//	//����
//	sum = num1 + num2;
//	//���
//	printf("%d",sum);
//	
//	return 0;
//}



//������������
//�ֲ�����
//int main()
//{
//	int a = 10;
//	{
//		//������ʼ
//		int b = 20;
//		printf("a = %d,b = %d\n",a,b);
//		//����bֻ���ڸ���������ʹ��
//		//���������
//	}
//	printf("a = %d\n",a);
//	//printf("b = %d\n",b);
//	//��������Ϊ����b�������Ѿ�������
//	return 0;
//
//}

////ȫ�ֱ���
//int a = 5;
//
//void test()
//{
//	printf("%d\n",a);
//	//ȫ�ֱ���a�����ڸ�������ʹ��
//}
//int main()
//{
//	printf("%d\n",a);
//	//ȫ�ֱ���a�����ڸ�������ʹ��
//	test();
//	return 0;
//}

//���ļ���ȫ�ֱ���
//extern int val_global;
////extern ��ר�����������ⲿ���ŵ�
//int main()
//{
//	printf("%d\n",val_global);
//	return 0;
//}


//��������������
//�ֲ�����
//int main()
//{
//	int a = 10;
//	{
//		//������ʼ������b���������ڿ�ʼ
//		int b = 20;
//		printf("a = %d,b = %d\n", a, b);
//		//����bֻ���ڸ���������ʹ��
//		//���������������b���������ڽ���
//	}
//	printf("a = %d\n",a);
//	//printf("b = %d\n",b);
//	//��������Ϊ����b ���������Ѿ�������
//	return 0;
//}


//����

//int main()
//{
//	//1.���泣��
//	//100;
//	//3.14;
//	//�����ϵ���ֵ���ɱ��޸�
//	//3.14 = 2;
//
//	//2.const���εĳ�����
//	int a = 5;
//	a = 10;
//	printf("a = %d\n",a);//���a = 10
//	//���������a����ֵ���Ը���ԭ����5�󱻸�Ϊ10
//	//˵������a��һ������
//	const int num = 8;
//	//������num��const����ʱ�����˳����Ĳ��ɱ��޸�����
//	//�����������ϻ��Ǹ�����
//	int arr1[5] = { 0 };
//	int arr2[num] = { 0 };
//	return 0;
//}



//#define MAX 100
//int main()
//{
//	printf("MAX = %d\n",MAX);//���ΪMAX = 100
//	//MAX = 20;//err   E0137	����ʽ�����ǿ��޸ĵ���ֵ
//	//˵��MAX�ǲ��ɱ��޸ĵģ�����MAXҲ�ǳ���
//	int arr[MAX] = { 0 };//δ����
//	return 0;
//}


////ö�ٳ��� һһ�о�
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n",MALE);//0
//	printf("%d\n",FEMALE);//1
//	printf("%d\n",SECRET);//2
//
//	int arr[FEMALE] = {0};//������������
//	//MALE = 20;//E0137	����ʽ�����ǿ��޸ĵ���ֵ
//	//˵��MALE��һ���������ɱ��޸�
//
//	return 0;
//}



//int main()
//{
//	char arr1[] = "abc";//�ַ����ĳ���д��
//	//ĩβ������һ��\0��ת���ַ�
//	char arr2[] = {'a','b','c'};
//	//ĩβû��ת���ַ�
//	char arr3[] = "abc\0def";//����\0ֹͣ
//	char arr4[] = { 'a','b','c' ,'\0'};
//	char arr5[] = { 'a','b','c' ,'\0','d'};//����\0ֹͣ
//	
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	printf("%s\n",arr3);
//	printf("%s\n",arr4);
//	printf("%s\n",arr5);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));
//	printf("%d\n", strlen(arr4));
//	printf("%d\n", strlen(arr5));
//	//strlen��һ���⺯���������ַ�������
//	return 0;
//}

//Add����
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int x = 1;
//	int y = 2;
//	int sum = Add(1, 2);
//	//�����ĵ��ã��������䷵��ֵ
//	printf("%d\n",sum);
//	return 0;
//
//}


//����

//int main()
//{
//	//����ȫ��ʼ����ʣ�����ֵΪ0
//	int arr1[10] = { 0 };
//	int arr2[10] = { 1,2,3 };
//	//��ȫ��ʼ��
//	int arr3[5] = { 1,2,3,4,5 };
//
//	//����һ�ֽ����䳤���飨ʹ�ñ�����ָ������Ķ��嵫�ǲ��ܳ�ʼ������c99���﷨
//	//int n = 3;
//	//int arr4[n];
//
//	return 0;
//}

int main()
{
	int arr1[5] = {1,2,3,4,5};

	printf("%d\n",arr1[3]);
	return 0;
}