#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<assert.h>

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


//���0��100000֮��������������������
//��������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����������
//
//int is_Narcissistic(int i)
//{
//	int num = 1;
//	//λ����1��ʼ��һ����������һλ��
//	int tmp = i;
//	while (tmp/=10)
//	{//��i��λ��
//		num++;
//	}
//	tmp = i;
//
//	int sum = 0;
//	while (tmp)
//	{
//		int n = num;
//		int a = tmp % 10;
//		int num1 = 1;
//		while (n--)
//		{//���
//			num1 *= a;
//		}
//		sum += num1;
//		tmp /= 10;
//	}
//	if (i == sum)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{//����1~100000������
//		//�ж��Ƿ���ˮ�ɻ���
//		if (is_Narcissistic(i))
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i=0; i<=100000; i++)
//	{
//		int n = 1;//һ����������1λ��
//		int tmp = i;
//		int sum = 0;
//		while (tmp/=10)
//		{//��i��λ��
//			n++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp%10,n);
//			//pow�ǿ⺯����η�
//			tmp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ",i);
//		}
//	}
//
//	return 0;
//}




//
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d",&a,&n);
//	int i = 0;
//	int sum = 0;
//	int sn = 0;
//	for (i=0; i<n; i++)
//	{
//		sum = sum * 10 + a;
//		sn += sum;
//	}
//	printf("%d\n",sum);
//	return 0;
//}



//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//int main()
//{//������룬sum�ĳ�ʼֵ����Ϊ�տ�ʼû����ȥ���ᵼ�´�������
//	int drink = 15;
//	int bottle = drink;
//	int sum = 0;
//	while(bottle >= 2)
//	{
//		sum += drink;
//		drink = bottle / 2;
//		bottle = drink + bottle % 2;
//		/*sum += bottle / 2;
//		bottle = bottle / 2 + bottle % 2;*/
//	}
//	//sum += 1;//�������ѭ���У���ƿ�ӱ�Ϊ1��ʱ�����һƿ������Ϊѭ��û�м���ȥ
//	printf("%d ",sum);
//	return 0;
//}

//�Ľ�
//int main()
//{
//	int drink = 35;
//	int bottle = drink;
//	int sum = 0;
//	while ((bottle >= 2)||(drink >= 1))
//	{
//		sum += drink;
//		drink = bottle / 2;
//		bottle = drink + bottle % 2;
//	}
//	printf("%d ", sum);
//	return 0;
//}


//int main()
//{
//	int total = 0;//�ܹ�����ƿ��ˮ
//	int empty = 0;//��ƿ����
//	int money = 0;//Ǯ��
//	scanf("%d",&money);
//	total = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	return 0;
//}

//
//����ˮ�ɻ��� - Lily Number������������֣����м��ֳ���������
//����1461 ���Բ�ֳɣ�1��461��, ��14��61��, ��146��1),
//������в�ֺ�ĳ˻�֮�͵�����������һ��Lily Number��
//���磺
//655 = 6 * 55 + 65 * 5
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//��� 5λ���е����� Lily Number��


//int main() {
//    int i = 0;
//    int sum = 0;
//    for (i = 10000; i < 99999; i++)
//    {
//        sum = ((i / 10000) * (i % 10000)) + ((i / 1000) * (i % 1000)) + ((i / 100) * (i % 100)) + ((i / 10) * (i % 10));
//        if (sum == i)
//            printf("%d ", i);
//    }
//    return 0;
//}

//���������ѭ����ԭ��
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello \n");
//    }
//    //��vs���б�����ϰ���ڵ�ַ�Ӹߵ���ʹ�ò��Ҵ�ű���
//    //���� i ����arr���鴴�������� i �ĵ�ַ��arr����ĵ�ַ��
//    // ���� i ������arr֮���������int������С
//    //����arr�������ڴ浱���ɵ͵���������ŵ�
//    //������Խ����ʵ�ʱ����ʵ��˱��� i �����Ϊ��0������forѭ��������ѭ�����
//    return 0;
//}




//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//int main()
//{
//	int arr[] = { 2,5,4,3,7,6,8,1 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	while (left<right)
//	{
//		while (0 != (arr[left] % 2))
//		{
//			left++;
//		}
//		while (0 == (arr[right] % 2))
//		{
//			right--;
//		}
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	//��ӡ����
//	for (int i = 0; i <= (sizeof(arr) / sizeof(arr[0])) - 1; i++ )
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}



//ģ��ʵ�ֿ⺯��strcpy

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest&&src);
//	char* ret = dest;//����Ҫ��¼һ��Ŀ���ַ����Ϊ֮��Ҫ����
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	/*while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;*/
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "sssss";
//	char arr2[] = "abuc";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	printf("%s\n", strcpy(arr1, arr2));
//	return 0;
//}




//ģ��ʵ�ֿ⺯��strlen

//int my_strlen(const char* str)
//{
//	assert(str);
//	int sum = 0;
//	while (*str++)
//	{
//		sum++;
//	}
//	return sum;
//}
//int main()
//{
//	char arr[] = "abcd\0efad";
//	printf("%d\n",strlen(arr));
//	printf("%d\n",my_strlen(arr));
//	return 0;
//}


//����n���ɼ����������n���ɼ�����߷�������ͷ����Ĳ
//���У���һ��Ϊn����ʾn���ɼ����������10000��
//�ڶ���Ϊn���ɼ���������ʾ����Χ0~100�����Կո������
//int main()
//{
//    int min = 100;
//    int max = 0;
//    int n = 0;
//    int a = 0;
//    int ch = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &a);
//        if (a < min)
//            min = a;
//        if (a > max)
//            max = a;
//    }
//    printf("%d", max - min);
//    return 0;
//}

//����һ���������У��ж��Ƿ����������У�����ָ�����е�������С����������ߴӴ�С����(��ͬԪ��Ҳ��Ϊ����)��
//���ݷ�Χ��3��n��50  �����е�ֵ������1��val��100
//��һ������һ������N(3��N��50)��
////�ڶ�������N���������ÿո�ָ�N���������Ϊһ�У���������������sorted���������unsorted��

//int main()
//{
//    int a[55], n, flag1 = 0, flag2 = 0, i;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//        if (i > 0) {
//            if (a[i] < a[i - 1]) {
//                flag1 = 1;
//            }
//            else if (a[i] > a[i - 1]) {
//                flag2 = 1;
//            }
//        }
//    }
//    if (flag1 && flag2) printf("unsorted\n");//ֻ�е�flag1��flag2��Ϊ1��ʱ����������
//    else printf("sorted\n");
//}


//int main()
//{
//    int i, arr[100], n, cnt1 = 0, cnt2 = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n - 1; i++)
//    {
//        if (arr[i] - arr[i + 1] >= 0)
//            cnt1++;//�������
//        else if (arr[i] - arr[i + 1] <= 0)
//            cnt2++;//�������
//    }
//    if (cnt1 == n - 1 || cnt2 == n - 1)//һ��n��������������ĵ�n-1�����
//        printf("sorted");
//    else
//        printf("unsorted");
//}



//��ӡ����ͼ��
//���룺2
//���
//    *
//  **
//***
//  **
//    *
//int main() {
//    int n = 0;
//    int i = 0;
//    while (~scanf("%d", &n)) {
//        //�ϰ벿��
//        for (i = 0; i <= n; i++)
//        {
//            int j = 0;
//            //��ӡ�ո�
//            for (j = 0; j < n - i; j++)
//            {
//                printf("  ");
//            }
//            //��ӡ*
//            for (j = 0; j <= i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        //�°벿��
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            //��ӡ�ո�
//            for (j = 0; j <= i; j++)
//            {
//                printf("  ");
//            }
//            //��ӡ*
//            for (j = 0; j < n - i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//�ϲ���������


//�ⷨһ��
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr1[1000] = { 0 };
//    int arr2[1000] = { 0 };
//    //����n��m
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int j = 0;
//    //����������������
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    //�ϲ��������в����
//    i = 0; j = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//        else
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//    }
//
//    //�ж���δ������������Ƿ���Ҫ��ӡ���
//    if (i == n && j < m)
//        for (; j < m; j++)
//            printf("%d ", arr2[j]);
//    else
//        for (; i < n; i++)
//            printf("%d ", arr1[i]);
//    return 0;
//}
//



//�ⷨ����
//int main()
//{
//    int n, m;
//    scanf("%d %d\n", &n, &m);
//    int i, j, arr[2000];
//    int tmp;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    for (i = n; i < n + m; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    for (i = 0; i < n + m; i++)
//    {
//        for (j = 0; j < n + m - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < n + m; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//}

//�ⷨ��:


//#include<stdio.h>
//#include<stdlib.h>
////����������ԣ����½����������������ݣ�ԭ����ͬ
//int main() {
//    int* arr1;//����
//    int* arr2;
//    int m = 0, n = 0;//����
//    int i = 0;
//    int f1 = 0, f2 = 0;//����
//    scanf("%d %d", &m, &n);
//    arr1 = (int*)malloc(sizeof(int) * (m + 1));//����n�Ĵ�С���涨����Ĵ�С
//    arr2 = (int*)malloc(sizeof(int) * (n + 1));
//    for (i = 0; i < m; i++) {//��������
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < n; i++) {//��������
//        scanf("%d", &arr2[i]);
//    }
//    i = 0;
//    while (i < (m + n)) {
//        if (f1 == m) {//��һ�����������ᣬ�ڶ�����δ��ʱ
//    //������Բ���"&&��f2<n)",���жϵ�f1==mʱ��f2��Ȼ��С�ڵ���n�ģ�
//    //������i���Ƶģ�i���n+m�;������������ᳬ�����������ӡ����Խ��
//            printf("%d ", arr2[f2++]);//���Ŵ�ӡ�ڶ�������ʣ����
//        }
//        else if (f2 == n) {//ͬ��
//            printf("%d ", arr1[f1++]);
//        }
//        else if (arr1[f1] >= arr2[f2]) {//��ӡС��������ͬ��
//            printf("%d ", arr2[f2++]);
//        }
//        else if (arr1[f1] <= arr2[f2]) {
//            printf("%d ", arr1[f1++]);
//        }
//        i++;
//    }
//    return 0;
//}



//��ӡx��ͼ��
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 0; i < n; i++)  //��ѭ��Ϊ��
//        {
//            for (int j = 0; j < n; j++) //��ѭ��Ϊ��
//            {
//                if (i == j || i + j == n - 1)
//                    //��ؼ��ĵط�����б��Ϊ[i][i]����*�� ��б��Ϊ[i][n-1-j]����*��һ�д�ӡ1����2��*
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n"); //��ӡ��һ�У�����
//        }
//    }
//    return 0;
//}

//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	//���
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((1 == (2 == b) + (3 == a))/*A��˵*/
//							&& (1 == (2 == b) + (4 == e))/*B��˵*/
//							&& (1 == (1 == c) + (2 == d))/*C��˵*/
//							&& (1 == (5 == c) + (3 == d))/*D��˵*/
//							&& (1 == (4 == e) + (1 == a))/*E��˵*/)
//						{
//							//��������
//							if (15 == (a + b + c + d + e)&&120 == (a*b*c*d*e))
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}




//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
// 
// ����һ�����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	//���
//	for (a = 0; a <= 1; a++)
//	{
//		for (b = 0; b <= 1; b++)
//		{
//			for (c = 0; c <= 1; c++)
//			{
//				for (d = 0; d <= 1; d++)
//				{
//					if (3 == (a == 0)/*A��˵*/  + (c == 1)/*B��˵*/ + (d == 1)/*C��˵*/ + (d == 0)/*D��˵*/)
//					{
//						//��������
//						if (1 == (a + b + c + d))
//						{
//							printf("a=%d b=%d c=%d d=%d",a,b,c,d);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//������������
//int main()
//{
//	char killer = 'A';
//	for (killer = "A"; killer <= 'D'; killer++)
//	{//����������A��D�е���
//		if (3 == (killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D'))
//		{//�ж�û����˵�Ļ�����ʵ��
//			printf("%c\n",killer);
//		}
//	}
//}

//����Ļ�ϴ�ӡ������ǡ�
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d",&n); 
//	int arr[14][14];
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++) 
//		{
//			if ((i == j) || (j == 0))
//			{
//				arr[i][j] = 1;
//				printf("%d ",arr[i][j]);
//			}
//			else
//			{
//				if (i > 1)
//				{
//					arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//					printf("%d ",arr[i][j]);
//				}
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}


//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N);

int main()
{
	int arr[3][5] = {1,2,3,4,5,6,7,8,9,10};
	//int len = strlen(arr[0]);
	//printf("%d ",len);	1
	int i = 4;
	int j = 0;
	int k = 0;
	scanf("%d",&k);
	int flg = 0;
	while ((i<3)&&(j>=0))
	{
		if (arr[i][j] < k)
		{
			j--;
		}
		else if (arr[i][j] > k)
		{
			i++;
		}
		else
		{
			flg = 1;
			break;
		}
	}
	if (1 == flg)
		printf("�ҵ���\n");
	else
		printf("�Ҳ���\n");
	return 0;
}