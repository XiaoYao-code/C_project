#define _CRT_SECURE_NO_WARNINGS 1
#include  <stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;	//ÿ��ѭ������ֵ��������۳�
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//��ӡ����
int main()
{
	int n = 7;
	int i = 0;
	int j = 0;
	//��ӡ������
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
	//��ӡ������	 
		return 0;
}
