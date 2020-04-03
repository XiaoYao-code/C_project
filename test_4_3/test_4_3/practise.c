#define _CRT_SECURE_NO_WARNINGS 1
#include  <stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;	//每次循环赋初值，否则会累乘
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//打印菱形
int main()
{
	int n = 7;
	int i = 0;
	int j = 0;
	//打印上三角
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
			printf(" ");
		for (j = 0; j <2*i+1;j++)
			printf("*");
		printf("\n");
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < i + 1;j++)
			printf(" ");
		for (j = 0; j < 2 * (n - 1 - i) - 1;j++)
			printf("*");
		printf("\n");

	}
	//打印下三角	 
		return 0;
}
