#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




//void/*代表函数无返回值*/ Add(void/*代表不需要参数*/)
//{}
//int main()
//{
//	int a = 10;
//	Add();
//	void* p= &a;//无类型的指针
//	//使用的时候，强转为相对应的指针类型否则会报错
//	printf("%p\n", (int*)p);
//	return 0;
//}



//浮点数存储的例子：
int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	return 0;
}