#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int  my_strlen(char * s)
//{
//	if (*s != '\0')
//		 return 1 + my_strlen(s + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[20] = "hello";
//	int len=my_strlen(arr);
//	printf("%d",len);
//	return 0;
//}
//int m(int n)
//{
//	if (n != 1)
//		return n*m(n - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 3;
//	int mul = 0;
//	mul = m(n);
//		printf("%d", mul);
//}
int  main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	int *p = arr;
	for (i = 0; i < 10; i++)
	{
		printf("%3d", *p);
		p++;
	}
}