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
//	printf("������m��n:\n");
//	scanf("%d%d", &m, &n);
//	int z = Count_Different(m, n);
//	printf("%d��%d��%d��������λ��ͬ\n",m,n, z);
//	return 0;
//}
//int main()
//{
//	int m= 0;
//	int x = 0;
//	int count = 0;
//	printf("������һ��Ҫͳ�ƶ�������1�ĸ�����������>\n");
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
//	printf("%d�Ķ���������%d��1��\n", m,count);
//}
int main()
{
	int x=0;
	int y=0;
	printf("������һ��Ҫ����������������>\n");
	scanf("%d%d", &x, &y);	printf("����ǰ������%d,%d\n",x, y);	x ^= y;	y ^= x;	x ^= y;	printf("������������%d,%d\n",x, y);
}