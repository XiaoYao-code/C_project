#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}
//int sys_check()
//{
//	int num = 1;
//	char *p = (char *)&num;
//	if (*p == 1)
//		return 1;              //小端存储
//	else
//		return 0;              //大端存储
//}
//
//int main()
//{
//	int num = 1;
//	int ret = sys_check();
//	if (ret == 1)
//	{
//		printf("little\n");
//	}
//	else if (ret == 0)
//	{
//		printf("big\n");
//	}
//	system("pause");
//	return 0;
//}
//	写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。
//#include <stdio.h>
//void Print(int *p, int sz)
//{
//	int i= 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 2, 5, 3, 4, 1, 6, 7, 8, 9, 10 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(p, sz);
//}
//写一个函数可以逆序字符内容
//	#include<stdio.h>
//#include<string.h>
//void Backward(char * arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	char tmp;
//	while (left<=right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[100] = "0";
//	gets( arr);
//	int sz = strlen(arr);
//	Backward(arr, sz);
//	printf("%s",arr);
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &i);
//	int tmp_i = i;
//	int j = 0;
//	for (j = 0; j < 5; j++)
//	{
//		sum = sum + i;
//		i = i * 10 + tmp_i;
//	}
//	printf("%d", sum);
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int  i = 0;
//	for (i = 100; i < 100000; i++)
//	{
//		int a = i % 10;
//		int b = (i / 10) % 10;
//		int c = (i / 100) % 10;
//		int d = (i / 1000) % 10;
//		int e = (i / 10000) % 10;
//		int n = log10(i) + 1;
//		if (i == pow(a, n) + pow(b, n) + pow(c, n) + pow(d, n) + pow(e, n))
//			printf("%d\n", i);
//	}
//}
//#include <stdio.h>
//#include <math.h>
//
//#define MAX_N 100000
//
//int main(){
//	for (int i = 0; i <= MAX_N; i++)
//	{
//		int sum = 0, val = i, k = log10(val) + 1;
//		while (val)
//		{
//			sum += pow(val % 10, k);
//			val /= 10;
//		}
//		if (sum == i){
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	int r = 6;
	int x = 0 ;
	int y = 0;
for (y = 0; y <= 2 * r; y++)
{
	for (x = 0; x <= 2 * r; x++)
	{
		(y >= r - x && y >= x - r &&y <= x + r &&y <= -x + 3 * r) ? printf("*") : printf(" ");
	}
	printf("\n");
}
return 0;
}

