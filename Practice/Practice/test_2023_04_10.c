#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����������������������ʱ������

//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d\n",a);
//	printf("b = %d\n",b);
//	return 0;
//}

//ͳ�ƶ�������1�ĸ���
//int main()
//{
//	int a = 0;
//	int count = 0;
//	scanf("%d",&a);
//	int i = 0;
//	for (i=0; i<32; i++)
//	{
//		if (a & 1 == 1)
//		{
//			count++;
//		}
//		a >>= 1;
//	}
//	printf("%d\n",count);
//	return 0;
//}

//�����������������������������Ƹ�ʽ�ж��ٸ�λ��ͬ
//int main() {
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int x = a ^ b;
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if (x & 1)
//        {
//            count++;
//        }
//        x >>= 1;
//    }
//    printf("%d\n", count);
//    return 0;
//}

//��ӡ���������Ƶ�����λ��ż��λ
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	int i = 0;
//	int count1 = 0;
//	int count2 = 0;
//	for (i = 0; i < 32; i+=2)
//	{
//		if ((a >> i) & 1) 
//		{
//			count1++;
//		}
//	}
//	for (i = 1; i <= 31; i+=2)
//	{
//		if ((a >> i) & 1)
//		{
//			count2++;
//		}
//	}
//	printf("���� = %d\n",count1);
//	printf("ż�� = %d\n",count2);
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int m = 0;
//	int count1 = 0;
//	int count2 = 0;
//	for (int i = 0; i < 32; i+=2)
//	{
//		if (x & (x-1))
//		{
//			count1++;
//		}
//	}
//	for (int i = 1; i < 32; i+=2)
//	{
//		if (x & (x - 1))
//		{
//			count2++;
//		}
//	}
//	printf("���� = %d\n",count1);
//	printf("ż�� = %d\n", count2);
//	return 0;
//}

//KiKi��֪��һ��n�׷����Ƿ�Ϊ�����Ǿ������������ж��������Ǿ������Խ������µ�Ԫ�ض�Ϊ0�ľ������Խ���Ϊ�Ӿ�������Ͻ������½ǵ�����
//3
//1 2 3
//0 4 5
//0 0 6
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    int arr[10][10];
//    int i, j;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d ", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < i; j++)
//        {
//
//            if (arr[i][j] != 0)
//            {
//                printf("NO\n");
//                return 0;
//            }
//        }
//    }
//    printf("YES\n");
//    return 0;
//}

//����˼·��¼��Ԫ�ص�ͬʱ�ж��Ƿ�Ϊ�����Ǿ���
//int main()
//{
//    int n;
//    scanf("%d", &n); //��ȡn
//    int arr[n][n];
//    int i, j;
//    int flag = 1;
//    for (i = 0; i < n; i++)  //����n*nԪ��
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (i > j) //i>jʱΪ�����ǵ�Ԫ��
//            {
//                if (arr[i][j] != 0) { //������Ԫ�����в���0��
//                    flag = 0; //��־��Ϊ�����Ǿ���                
//                    //break 
//                }
//            }
//        }
//    }
//    printf("%s", (flag ? "YES" : "NO"));
//
//    return 0;
//}

//С�����ڿ���ѧϰ�˶����ư˽�����ʮ�����ƺ�
//�Խ���ת��������Ũ�����Ȥ����Ϊ��������������6
//��������֪��һ������ʾΪ�����ƺ�Ľ����������������������⡣
//void Six(int x)
//{
//    if (x > 5)
//    {
//        Six(x / 6);
//    }
//    printf("%d", x % 6);
//}
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    Six(n);
//    return 0;
//}

//��һ���������У��������ظ���������
//��ɾ��ָ����ĳһ�����������ɾ��ָ������֮�������
//������δ��ɾ�����ֵ�ǰ��λ��û�з����ı䡣
//int main() {
//    int n = 0;
//    int x = 0;
//    scanf("%d", &n);//���Ի�Ϊ
//    //while(~scanf("%d",&n))��Ϊscanf��ȡ���������־ͻ᷵�����ֵĸ���
//    //���scanf��ȡʧ�ܻ᷵��-1�����κ�����ȡ�������Ϊ������+1ȡ������0���⣬0ȡ����-1��
//    //��while(scanf("%d",&n)!=EOF)����EOF����Ϊ-1��
//    int arr[50];
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//
//    scanf("%d", &x);
//   /* for (i = 0; i < n; i++)
//    {
//        if (arr[i] == x)
//        {
//            continue;
//        }
//        printf("%d ", arr[i]);
//
//    }*/
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != x)
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//    return 0;
//}

//ʵ���������
//int main()
//{
//	int a,b,c;
//	while (~scanf("%d %d",&a,&b))
//	{
//		c = a % b;
//		printf("%d\n",c);
//	}
//	return 0;
//}

//С��������ڿ���ѧϰ����������������������Լ������С������
//��������Ȼ���������������������Լ������С������֮��
//������������������⡣

//int main() {
//    long long a, b;//ʹ��long long���ͷ�����ֵ����
//    scanf("%d %d", &a, &b);
//    long long max, min, tmp;
//    //շת�����
//    long long n, m;//�����м����������Ӱ������С������
//    n = a;
//    m = b;
//    while (tmp = n % m)
//    {
//        n = m;
//        m = tmp;
//    }
//    max = m;
//    //��С������=n*m/max
//    min = a * b / max;
//    printf("%lld", min + max);
//    return 0;
//}


//С�����Ͽ���Ҫ��n��̨��
//��Ϊ���ȱȽϳ�������ÿ�ο���ѡ����һ�׻���������
//��ô��һ���ж������߷���


//쳲��������е�˼��
//int Size(int n)
//{
//    if (n <= 2)
//    {
//        return n;
//    }
//    return Size(n - 2) + Size(n - 1);
//}
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int sum = Size(n);
//    printf("%d", sum);
//    return 0;
//}


//int main() {
//    int fib(int i);
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d", fib(n));
//    return 0;
//}
//int fib(int n) {//̨��Ϊ1,2ʱ�߷��ֱ�1��2�� 1:(1) 2:(1,1),(2)
//                //Ҫ����n��ʱ�����ҵ�һ��Ҫô�ߵ�1�ף�Ҫô����2�ף�   eg:      ��3�� 
//                //����һ������1�׵�ʱ����ô��ʣn-1��̨��          ��һ������1�ף�ʣ��2��
//                //����һ������2�׵�ʱ����ô��ʣn-2��̨��          ��һ������2�ף�ʣ��1��
//                //��ת��Ϊ������1��ʣ��̨�׵��߷�+��2��ʱʣ��̨�׵��߷������ɵ��Ƶ������һ�����߷��ж�����
//    return n <= 2 ? n : fib(n - 1) + fib(n - 2);
//}
