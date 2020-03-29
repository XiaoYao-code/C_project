#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Count_Different(int m, int n)
//{
//	int x = 0;
//	int y = 0;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		x = (m >> i) & 1;            
//		y = (n >> i) & 1;             
//		if (x != y)                        
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int	 count = 0;
//	printf("请输入m和n:\n");
//	scanf("%d%d", &m, &n);
//	int z = Count_Different(m, n);
//	printf("%d和%d有%d个二进制位不同\n",m,n, z);
//	return 0;
//}
//int main()
//{
//	int m= 0;
//	int x = 0;
//	int count = 0;
//	printf("请输入一个要统计二进制中1的个数的整数：>\n");
//	scanf("%d", &m);
//	int i = 0;
//	for ( i = 0; i <32; i++)
//	{
//		x = (m >> i) & 1;
//		if (x == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d的二进制中有%d个1。\n", m,count);
//}
int main()
{
	int x=0;
	int y=0;
	printf("请输入一个要交换的两个整数：>\n");
	scanf("%d%d", &x, &y);	printf("交换前两个数%d,%d\n",x, y);	x ^= y;	y ^= x;	x ^= y;	printf("交换后两个数%d,%d\n",x, y);
}