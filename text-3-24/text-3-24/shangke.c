#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[20] = "############" ;
//	char arr2[20] =  "bit" ;	 
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//int  main()
//{
//	char arr[] = "hello  bit";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//getmax(int x,int y)
//{
//	return(x > y ? x : y);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = getmax(a, b);
//	printf("%d\n", max);
//
//}
//void swap(int*x, int*y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
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
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year)==1)
//			printf("%dÊÇÈòÄê\n", year);
//	}
//	return 0;
//}
//int binary_search(int arr[], int k)
//{
//	int left = 0;
//	int right =  (sizeof(arr) / sizeof(arr[0]))-1;
//	while (left <= right)
//	{
//		int ret = (left +right) / 2;
//		if (k > arr[ret])
//			left = ret + 1;
//		else
//		{
//			if (k< arr[ret])
//				right = ret - 1;
//			else
//			{
//				return ret;
//				break;
//			}
//		}
//		if (left>right)
//			return -1;
//	}
//}	 ´íÎó´úÂë