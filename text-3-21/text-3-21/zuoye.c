#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) 
//			break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//
//}
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//			sum++;
//		if (i % 10 == 9)
//			sum++;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int j = 1;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = j*((1.0)/ i) + sum; //��ע�����1.0����Ϊ1���ᵼ��ǿ������ת����������Ϊ1.000000���ײ�
//		j = -j;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int a[10] = { 0 };
//	int MAX = 0;
//	printf("������ʮ�������Իس�Ϊÿ�����ֵļ����\n");
//	for (i = 0; i < 10;i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	MAX = a[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (a[i]>MAX)
//			MAX = a[i];
//	}
//	printf("��ʮ��������������%d\n", MAX);
//	return 0;
//}
int main()
{
	int x = 1;
	int y = 1;
	int mcl = 1;
	for (x = 1; x < 10; x++)
	{ 
		for (y = 1; y <= x; y++)
		{
			mcl = x * y;
			printf("%3d * %d=%3d", x, y, mcl);
		}
		printf("\n");
	}
	return 0;
}