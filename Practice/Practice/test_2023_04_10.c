#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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



//KiKi����ĳ��ĳ���ж�����
//��������ʵ�֡�������ݺ��·�
//������һ��������ж����졣
//int main() {
//    int year, month;
//    int arr1[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
//    int arr2[31] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    while (~scanf("%d %d", &year, &month))
//    {
//        if (((year % 100) != 0 && (year % 4) == 0) || (year % 400) == 0)
//        {
//            printf("%d\n", arr1[month]);
//        }
//        else
//        {
//            printf("%d\n", arr2[month]);
//        }
//    }
//    return 0;
//}


//KiKi���ж�������ַ��ǲ�����ĸ����������ʵ�֡�

//int main() {
//    char ch;
//    while (~scanf("%c", &ch))
//    {
//        if (((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
//        {
//            printf("%c is an alphabet.\n", ch);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", ch);
//        }
//        while (getchar() != '\n') {}//�������뻺����
//    }
//    return 0;
//}





//KiKi�������ĸ��Сдת������һ���ַ�
//�ж����Ƿ�Ϊ��д��ĸ
//����ǣ�����ת����Сд��ĸ����֮��ת��Ϊ��д��ĸ

//int main() {
//    char ch;
//    while (scanf("%c", &ch) != EOF)
//    {
//        if ((ch >= 65) && (ch <= 90))
//        {
//            printf("%c\n", ch + 32);
//        }
//        else
//        {
//            printf("%c\n", ch - 32);
//        }
//        while (getchar() != '\n') {}
//    }
//    return 0;
//}


//
//KiKi�ǳ�ϲ����������һ�ҵ�����������һ���·������˽⵽����������ǡ�˫11����11��11�գ�������·���7��
//��˫12�� ��12��12�գ�������·���8�ۣ�������Ż�ȯ���Զ����50Ԫ���Ż�ȯֻ����˫11��˫12ʹ�ã�
//��KiKi����������Ǯ����
// �����Ż�ȯ��1��ʾ�����Ż�ȯ��0��ʾ���� ע���������ڱ�ֻ֤�С�˫11���͡�˫12����
//int main() {
//    double price;
//    int month, day, flag;
//    while (~scanf("%lf %d %d %d", &price, &month, &day, &flag))
//    {
//        if (month == 11 && day == 11)
//        {
//            price = price * 0.7 - 50.0 * flag;
//        }
//        else if (month == 12 && day == 12)
//        {
//            price = price * 0.8 - 50 * flag;
//        }
//        if (price < 0)
//        {
//            printf("0.00\n");
//        }
//        else
//        {
//            printf("%.2lf\n", price);
//        }
//    }
//    return 0;
//}

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//
//arr��һ������һά���顣

//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	int i = 0;
//	int ret;
//	for (i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
//	{
//		printf("%d ",*(arr+i));
//	}
//	return 0;
//}

//�������

//int main()
//{
//	int i = 0;
//	int j = 0;
//	//scanf("%d", &n);
//	int n = 7;
//	//�ϰ벿��
//	for (i = 1; i <= n; i++)//������
//	{
//		//���ÿ�еĿո�
//		for (j=1; j<=n-i; j++)
//		{
//			printf(" ");
//		}
//		//���*
//		for (j = 1; j <= (2*i)-1; j++)
//		{
//			printf("*");
//		}
//		for (j = 1; j <=n - i; j++)
//		{
//			printf(" ");
//		}
//		printf("\n");//����
//	}
//	//�°벿��
//	for (i = n-1; i >= 1; i--)
//	{
//		//����ո�
//		for (j = 1; j <= n-i; j++)
//		{
//			printf(" ");
//		}
//		//���*
//		for (j = (2 * i) - 1; j >= 1; j--)
//		{
//			printf("*");
//		}
//		for (j = 1; j <= n - i; j++)
//		{
//			printf(" ");
//		}
//		printf("\n");//����
//	}
//
//	return 0;
//}

//
//��һ���ַ���str�����ݵߵ��������������
//1��len(str)��10000

//int main() {
//    char arr[10000];
//    int i = 0;
//    while (gets(arr));
//    //���ﲻ����scanf���ǵ���gets()����Ȼ�͵���scanf(��%c��)���ε�����������Ȼ��浽һ���ַ������У��ո���Ų�������⡣
//    {
//        int ret = strlen(arr);
//        //���ַ�������������֮��
//        for (i = ret - 1; i >= 0; i--)
//        {
//            printf("%c", arr[i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//˫ָ��
// int main()
// {
//     char str[10001] = {0};
//    // gets(str);//�⺯�����������ո���Ȼ������ȡ
//     scanf("%[^\n]",str);//����scanf�������ʽ�����Դﵽgets��ͬЧ��
//     int left = 0;
//     int right = strlen(str)-1;
//     while (left < right) 
//     {
//     char tmp = str[left];
//     str[left] = str[right];
//     str[right] = tmp;
//     left++;
//     right--;
//     }
//     printf("%s\n",str);
//     return 0;
// }


//�ݹ�
// void Reverse(char* pt [])
// {
//  if((*pt)=='\n')
//  {
//     return;    
//  }
//  Reverse(pt+1);
//  printf("%c",*pt);
// }

// int main()
// {
//     char str[10001] = {0};
//     gets(str);
//     // scanf("%[^\n]",str);
//     int len = strlen(str);
//     Reverse(str);
//     return 0;
// }


//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������


int main()
{
	int x = 0;
	int i = 0;
	int sum = 0;
	int tmp = 0;
	for (i = 0; i <= 100000; i++)
	{
		sum = 0;
		while (i)
		{
			tmp = i % 10;
			sum += (tmp * tmp * tmp);
			i /= 10;
		}
		if (i == sum)
		{
			printf("%d  ",i);
		}
	}
	return 0;
}
