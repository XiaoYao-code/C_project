#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[20] = "hello";
//	int ret = strlen(strcat(arr, "world"));
//	printf("%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int  is_prime_number(int x)
//{
//	int y = 2;
//	for (y = 2; y <=sqrt(x) ; y++)
//	{
//		if (x % y  == 0)
//			return 0;
//	}
//		return 1;
//}
//int  main()
//{
//	int i = 101;
//	int counter = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (is_prime_number(i) == 1)
//		{
//			printf("%d是素数\n", i);
//			counter++;
//		}
//	}
//		printf("一共是%d个素数。\n", counter);
//	return 0;
//}
//int is_leap_year(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 1000;
//	int counter = 0;
//	for (year = 1000; year <= 2000; year+=4)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d是闰年。\n", year);
//			counter++;
//		}
//	}
//	printf("一共有%d个闰年\n", counter);
//	return 0;
//}

/* void swap(int x, int y)
 {
	 int temporary = 0;
	 temporary = x;
	 x = y;
	 y = temporary;
 }	*/ // 错误
 // void swap(int *p1, int *p2)
 //{
 //	*p2 ^= *p1;
 //	*p1 ^= *p2;
 //	*p2 ^= *p1;
 //} 不定义第三个变量
//void swap(int *x, int *y)
//{
//	int temporary = 0;
//	temporary = *x;
//	*x = *y;
//	*y = temporary;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个要交换的整数a和b，用逗号间隔，回车结束：\n");
//	scanf("%d,%d", &a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	swap(&a,&b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
int multiplication_table(int i)
{
	int y = 0;
	int x = 0;
	int mul = 0;
	for (x = 1; x <= i; x++)
	{
		for (y = 1; y <= x; y++)
		{
			mul = y*x;
			printf("%2d*%d=%2d", y, x, mul);
		}
		printf("\n");
	}
}
int main()
{
	int i = 0;
	printf("请输入打印的范围:\n");
	scanf("%d", &i);
	multiplication_table(i);
	return 0;
}