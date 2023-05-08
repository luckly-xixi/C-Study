#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<assert.h>

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


//求出0～100000之间的所有自幂数并输出。
//自幂数是指一个n位数，其各位数字的n次方之和确好等于该数本身
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个自幂数。
//
//int is_Narcissistic(int i)
//{
//	int num = 1;
//	//位数从1开始，一个数至少是一位数
//	int tmp = i;
//	while (tmp/=10)
//	{//求i的位数
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
//		{//求和
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
//	{//产生1~100000的数字
//		//判断是否是水仙花数
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
//		int n = 1;//一个数最少是1位数
//		int tmp = i;
//		int sum = 0;
//		while (tmp/=10)
//		{//求i的位数
//			n++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp%10,n);
//			//pow是库函数求次方
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
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222

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



//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//int main()
//{//错误代码，sum的初始值，因为刚开始没加上去，会导致代码问题
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
//	//sum += 1;//在上面的循环中，当瓶子变为1的时候，最后一瓶饮料因为循环没有加上去
//	printf("%d ",sum);
//	return 0;
//}

//改进
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
//	int total = 0;//总共多少瓶汽水
//	int empty = 0;//空瓶子数
//	int money = 0;//钱数
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
//变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字
//比如1461 可以拆分成（1和461）, （14和61）, （146和1),
//如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
//例如：
//655 = 6 * 55 + 65 * 5
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//求出 5位数中的所有 Lily Number。


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

//代码出现死循环的原因
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello \n");
//    }
//    //在vs的中编译器习惯于地址从高到低使用并且存放变量
//    //变量 i 先于arr数组创建，所以 i 的地址比arr数组的地址大
//    // 变量 i 和数组arr之间相隔两个int变量大小
//    //数组arr又是在内存当中由低到高连续存放的
//    //于是在越界访问的时候访问到了变量 i 将其改为了0，导致for循环出现死循环情况
//    return 0;
//}




//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
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
//	//打印数组
//	for (int i = 0; i <= (sizeof(arr) / sizeof(arr[0])) - 1; i++ )
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}



//模拟实现库函数strcpy

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest&&src);
//	char* ret = dest;//这里要记录一下目标地址，因为之后要返回
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




//模拟实现库函数strlen

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


//输入n个成绩，换行输出n个成绩中最高分数和最低分数的差。
//两行，第一行为n，表示n个成绩，不会大于10000。
//第二行为n个成绩（整数表示，范围0~100），以空格隔开。
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

//输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序(相同元素也视为有序)。
//数据范围：3≤n≤50  序列中的值都满足1≤val≤100
//第一行输入一个整数N(3≤N≤50)。
////第二行输入N个整数，用空格分隔N个整数输出为一行，如果序列有序输出sorted，否则输出unsorted。

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
//    if (flag1 && flag2) printf("unsorted\n");//只有当flag1和flag2都为1的时候序列无序
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
//            cnt1++;//降序计数
//        else if (arr[i] - arr[i + 1] <= 0)
//            cnt2++;//升序计数
//    }
//    if (cnt1 == n - 1 || cnt2 == n - 1)//一共n个数，两两相减的到n-1个结果
//        printf("sorted");
//    else
//        printf("unsorted");
//}



//打印箭型图案
//输入：2
//输出
//    *
//  **
//***
//  **
//    *
//int main() {
//    int n = 0;
//    int i = 0;
//    while (~scanf("%d", &n)) {
//        //上半部分
//        for (i = 0; i <= n; i++)
//        {
//            int j = 0;
//            //打印空格
//            for (j = 0; j < n - i; j++)
//            {
//                printf("  ");
//            }
//            //打印*
//            for (j = 0; j <= i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        //下半部分
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            //打印空格
//            for (j = 0; j <= i; j++)
//            {
//                printf("  ");
//            }
//            //打印*
//            for (j = 0; j < n - i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//合并有序数列


//解法一：
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr1[1000] = { 0 };
//    int arr2[1000] = { 0 };
//    //输入n和m
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int j = 0;
//    //输入两个升序序列
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    //合并有序序列并输出
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
//    //判断尚未遍历完的数组是否需要打印输出
//    if (i == n && j < m)
//        for (; j < m; j++)
//            printf("%d ", arr2[j]);
//    else
//        for (; i < n; i++)
//            printf("%d ", arr1[i]);
//    return 0;
//}
//



//解法二：
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

//解法三:


//#include<stdio.h>
//#include<stdlib.h>
////利用输出特性，或新建第三个数组存放数据，原理相同
//int main() {
//    int* arr1;//数组
//    int* arr2;
//    int m = 0, n = 0;//个数
//    int i = 0;
//    int f1 = 0, f2 = 0;//浮标
//    scanf("%d %d", &m, &n);
//    arr1 = (int*)malloc(sizeof(int) * (m + 1));//根据n的大小来规定数组的大小
//    arr2 = (int*)malloc(sizeof(int) * (n + 1));
//    for (i = 0; i < m; i++) {//输入数组
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < n; i++) {//输入数组
//        scanf("%d", &arr2[i]);
//    }
//    i = 0;
//    while (i < (m + n)) {
//        if (f1 == m) {//第一个数组遍历完结，第二个还未完时
//    //这里可以不加"&&（f2<n)",若判断到f1==m时，f2必然是小于等于n的；
//    //这是由i控制的，i最大到n+m就决定了自增不会超过这个数即打印不会越界
//            printf("%d ", arr2[f2++]);//接着打印第二个数组剩余数
//        }
//        else if (f2 == n) {//同上
//            printf("%d ", arr1[f1++]);
//        }
//        else if (arr1[f1] >= arr2[f2]) {//打印小的数或相同数
//            printf("%d ", arr2[f2++]);
//        }
//        else if (arr1[f1] <= arr2[f2]) {
//            printf("%d ", arr1[f1++]);
//        }
//        i++;
//    }
//    return 0;
//}



//打印x型图案
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 0; i < n; i++)  //外循环为行
//        {
//            for (int j = 0; j < n; j++) //内循环为列
//            {
//                if (i == j || i + j == n - 1)
//                    //最关键的地方，正斜线为[i][i]处是*， 反斜杠为[i][n-1-j]处是*，一行打印1个或2个*
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n"); //打印完一行，换行
//        }
//    }
//    return 0;
//}

//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	//穷举
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
//						if ((1 == (2 == b) + (3 == a))/*A所说*/
//							&& (1 == (2 == b) + (4 == e))/*B所说*/
//							&& (1 == (1 == c) + (2 == d))/*C所说*/
//							&& (1 == (5 == c) + (3 == d))/*D所说*/
//							&& (1 == (4 == e) + (1 == a))/*E所说*/)
//						{
//							//过滤条件
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




//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
// 
// 方法一：穷举
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	//穷举
//	for (a = 0; a <= 1; a++)
//	{
//		for (b = 0; b <= 1; b++)
//		{
//			for (c = 0; c <= 1; c++)
//			{
//				for (d = 0; d <= 1; d++)
//				{
//					if (3 == (a == 0)/*A所说*/  + (c == 1)/*B所说*/ + (d == 1)/*C所说*/ + (d == 0)/*D所说*/)
//					{
//						//过滤条件
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

//方法二：推理
//int main()
//{
//	char killer = 'A';
//	for (killer = "A"; killer <= 'D'; killer++)
//	{//假设凶手是A—D中的人
//		if (3 == (killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D'))
//		{//判断没人所说的话的真实性
//			printf("%c\n",killer);
//		}
//	}
//}

//在屏幕上打印杨辉三角。
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


//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);

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
		printf("找到了\n");
	else
		printf("找不到\n");
	return 0;
}