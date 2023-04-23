#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//交换两个变量（不创建临时变量）

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

//统计二进制中1的个数
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

//输入两个整数，求两个整数二进制格式有多少个位不同
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

//打印整数二进制的奇数位和偶数位
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
//	printf("奇数 = %d\n",count1);
//	printf("偶数 = %d\n",count2);
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
//	printf("奇数 = %d\n",count1);
//	printf("偶数 = %d\n", count2);
//	return 0;
//}

//KiKi想知道一个n阶方矩是否为上三角矩阵，请帮他编程判定。上三角矩阵即主对角线以下的元素都为0的矩阵，主对角线为从矩阵的左上角至右下角的连线
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

//解题思路：录入元素的同时判断是否为上三角矩阵
//int main()
//{
//    int n;
//    scanf("%d", &n); //获取n
//    int arr[n][n];
//    int i, j;
//    int flag = 1;
//    for (i = 0; i < n; i++)  //输入n*n元素
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (i > j) //i>j时为下三角的元素
//            {
//                if (arr[i][j] != 0) { //下三角元素中有不是0的
//                    flag = 0; //标志不为上三角矩阵                
//                    //break 
//                }
//            }
//        }
//    }
//    printf("%s", (flag ? "YES" : "NO"));
//
//    return 0;
//}

//小乐乐在课上学习了二进制八进制与十六进制后
//对进制转换产生了浓厚的兴趣。因为他的幸运数字是6
//所以他想知道一个数表示为六进制后的结果。请你帮助他解决这个问题。
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

//有一个整数序列（可能有重复的整数）
//现删除指定的某一个整数，输出删除指定数字之后的序列
//序列中未被删除数字的前后位置没有发生改变。
//int main() {
//    int n = 0;
//    int x = 0;
//    scanf("%d", &n);//可以换为
//    //while(~scanf("%d",&n))因为scanf读取到几个数字就会返回数字的个数
//    //如果scanf读取失败会返回-1，而任何整数取反都会变为该数字+1取负数（0除外，0取反是-1）
//    //而while(scanf("%d",&n)!=EOF)当中EOF本质为-1，
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

//实验多组输入
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

//小乐乐最近在课上学习了如何求两个正整数的最大公约数与最小公倍数
//但是他竟然不会求两个正整数的最大公约数与最小公倍数之和
//请你帮助他解决这个问题。

//int main() {
//    long long a, b;//使用long long类型放置数值过大
//    scanf("%d %d", &a, &b);
//    long long max, min, tmp;
//    //辗转相除法
//    long long n, m;//采用中间变量来避免影响求最小公倍数
//    n = a;
//    m = b;
//    while (tmp = n % m)
//    {
//        n = m;
//        m = tmp;
//    }
//    max = m;
//    //最小公倍数=n*m/max
//    min = a * b / max;
//    printf("%lld", min + max);
//    return 0;
//}


//小乐乐上课需要走n阶台阶
//因为他腿比较长，所以每次可以选择走一阶或者走两阶
//那么他一共有多少种走法？


//斐波那契数列的思想
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
//int fib(int n) {//台阶为1,2时走法分别1，2种 1:(1) 2:(1,1),(2)
//                //要走完n阶时，即我第一步要么走的1阶，要么就是2阶，   eg:      上3阶 
//                //若第一步是走1阶的时候，那么还剩n-1个台阶          第一步：走1阶，剩余2阶
//                //若第一步是走2阶的时候，那么还剩n-2个台阶          第一步：走2阶，剩余1阶
//                //即转变为求我走1阶剩余台阶的走法+走2阶时剩余台阶的走法，即可递推到走最后一步的走法有多少种
//    return n <= 2 ? n : fib(n - 1) + fib(n - 2);
//}



//KiKi想获得某年某月有多少天
//请帮他编程实现。输入年份和月份
//计算这一年这个月有多少天。
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


//KiKi想判断输入的字符是不是字母，请帮他编程实现。

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
//        while (getchar() != '\n') {}//清理输入缓冲区
//    }
//    return 0;
//}





//KiKi想完成字母大小写转换，有一个字符
//判断它是否为大写字母
//如果是，将它转换成小写字母；反之则转换为大写字母

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
//KiKi非常喜欢网购，在一家店铺他看中了一件衣服，他了解到，如果今天是“双11”（11月11日）则这件衣服打7折
//“双12” （12月12日）则这件衣服打8折，如果有优惠券可以额外减50元（优惠券只能在双11或双12使用）
//求KiKi最终所花的钱数。
// （有优惠券用1表示，无优惠券用0表示）。 注：输入日期保证只有“双11”和“双12”。
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

//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//
//arr是一个整形一维数组。

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

//输出菱形

//int main()
//{
//	int i = 0;
//	int j = 0;
//	//scanf("%d", &n);
//	int n = 7;
//	//上半部分
//	for (i = 1; i <= n; i++)//控制行
//	{
//		//输出每行的空格
//		for (j=1; j<=n-i; j++)
//		{
//			printf(" ");
//		}
//		//输出*
//		for (j = 1; j <= (2*i)-1; j++)
//		{
//			printf("*");
//		}
//		for (j = 1; j <=n - i; j++)
//		{
//			printf(" ");
//		}
//		printf("\n");//换行
//	}
//	//下半部分
//	for (i = n-1; i >= 1; i--)
//	{
//		//输出空格
//		for (j = 1; j <= n-i; j++)
//		{
//			printf(" ");
//		}
//		//输出*
//		for (j = (2 * i) - 1; j >= 1; j--)
//		{
//			printf("*");
//		}
//		for (j = 1; j <= n - i; j++)
//		{
//			printf(" ");
//		}
//		printf("\n");//换行
//	}
//
//	return 0;
//}

//
//将一个字符串str的内容颠倒过来，并输出。
//1≤len(str)≤10000

//int main() {
//    char arr[10000];
//    int i = 0;
//    while (gets(arr));
//    //这里不能用scanf，记得用gets()。不然就得用scanf(“%c”)依次单个读入数据然后存到一个字符数组中，空格符才不会出问题。
//    {
//        int ret = strlen(arr);
//        //求字符串长度在输入之后
//        for (i = ret - 1; i >= 0; i--)
//        {
//            printf("%c", arr[i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//双指针
// int main()
// {
//     char str[10001] = {0};
//    // gets(str);//库函数输入遇见空格仍然继续读取
//     scanf("%[^\n]",str);//更改scanf的输入格式，可以达到gets相同效果
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


//递归
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


//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。


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
