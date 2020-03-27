#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void split_integer(int x)
//{
//	if (x > 9)
//	{
//		split_integer(x / 10);
//	}
//	printf("%3d", x % 10);
//}
//int  main()
//{
//	int  i = 0;
//	printf("请输入一个数字：\n");
//	scanf("%d", &i);
//	split_integer(i);
//	return 0;
//}
////非递归求n的阶乘
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int mul = 1;
//	printf("请输入要求阶乘的非0数字n:\n");
//	scanf("%d", &n);
//	while (n>0)
//	{
//		mul = n*mul;
//		n--;
//	}
//	printf("%d", mul);
//	return 0;
//}
////递归求n的阶乘
//#include<stdio.h>
//int  n_factorial(int x)
//{
//	if (x <=1)
//		return 1;
//	else
//		return x*n_factorial(x - 1);
//}
//int main()
//{
//	int n = 0;
//	int mul = 0;
//	printf("请输入要求阶乘的数字n:\n");
//	scanf("%d", &n);
//	mul=n_factorial(n);
//	printf("%d\n", mul);
//	return 0;
//}
//strlen的模拟，非递归
//#include<stdio.h>
//int my_strlen(char*arr)
//{
//	int lenth = 0;
//	while (*arr!='\0')
//	{
//		lenth++;
//		arr++;
//	}
//	return lenth;
//}
//int main()
//{
//	char arr[50] = "world";
//	int lenth = my_strlen(arr);
//	printf("%d", lenth);
//	return 0;
//}
// strlen的模拟，递归
//#include<stdio.h>
//int my_strlen(char*arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr+1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[50] = "world";
//	int lenth = my_strlen(arr);
//	printf("%d", lenth);
//	return 0;
//}
//	 字符串逆序（递归实现）
//#include<stdio.h>
//int  main()
//{
//	char arr[50] = "world";
//}
//非递归计算斐波那契数列
//#include<stdio.h>
//int fib(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (x > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	printf("请输入要求第几项斐波那契数：\n");
//	scanf("%d", &n);
//	i = fib(n);
//	printf("%d\n", i);
//}
//递归计算斐波那契数列
//#include<stdio.h>
//int fib(int x)
//{
//	if (x <= 2)
//		return	 1;
//	else
//		return fib(x - 1) + fib(x - 2);
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	printf("请输入要求第几项斐波那契数：\n");
//	scanf("%d", &n);
//	i = fib(n);
//	printf("%d\n", i);
//}
//#include <stdio.h>
//int  DigitSum(int x)
//{
//	int sum = 0;
//	if (x < 9)
//	{
//		return x;
//	}
//	return(x % 10) + DigitSum(x / 10);
//}
//int  main()
//{
//	int  i = 0;
//	int  n = 0;
//	printf("请输入一个数字：\n");
//	scanf("%d", &i);
//	n=DigitSum(i);
//	printf("%d\n", n);
//	return 0;
//}	
//#include <stdio.h>
//int  n_k(int n,int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k == 1)
//		return n;
//	else
//		return n*n_k(n, k-1);
//	
//}
//int  main()
//{
//	int  n = 0;
//	int  i = 0;
//	int  k = 0;
//	printf("请输入数字n的k次方(逗号间隔)：\n");
//	scanf("%d,%d", &n,&k);
//	i = n_k(n,k);
//	printf("%d\n", i);
//	return 0;
//}
#include<stdio.h>
int my_Rever(char*arr)
{
	if (*arr != '\0')
	{
		my_Rever(arr + 1);
	}

	printf("%c ", *arr);
}
int main()
{
	char arr[50] = "world";
	my_Rever(arr);
	return 0;
}