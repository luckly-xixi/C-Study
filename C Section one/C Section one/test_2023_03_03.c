

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

int global = 2019;//ȫ�ֱ���
int main()
{
	int local = 2018;//�ֲ�����
	//���涨���global�᲻�������⣿
	int global = 2020;//�ֲ�����
	printf("global = %d\n", global);
	return 0;
}

