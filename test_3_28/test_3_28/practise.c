#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void BubbleSort(int arr[], int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j <sz-i-1 ; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void PrintArr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%3d", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 8, 9, 7, 4, 5, 10, 6, 1, 2, 3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	PrintArr(arr, sz);
//	BubbleSort(arr, sz);
//	PrintArr(arr, sz);
//	return 0;
//}
//#include<stdio.h>
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void PrintArr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%3d", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < sz/2; i++)
//	{
//		tmp = arr[i];
//		arr[i] = arr[sz - i - 1];
//		arr[sz - i - 1] = tmp;
//	}
//}
//int main()
//{
//	int  arr[10] = { 1, 3, 2, 5, 4, 8, 6, 7, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	PrintArr(arr, sz);
//	Reverse(arr, sz);
//	PrintArr(arr, sz);
//	Init(arr, sz);
//	PrintArr(arr, sz);
//	return 0;
//}
#include <stdio.h>
void Exchange(int arr1[], int arr2[], int sz)
{  
	int i = 0;
	for ( i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}

}
void PrintArr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%3d", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10] = { 1, 4, 7, 2, 5, 8, 3, 6, 9, 10 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	PrintArr(arr1, sz);
	PrintArr(arr2, sz);
	Exchange(arr1, arr2, sz);
	PrintArr(arr1, sz);
	PrintArr(arr2, sz);
	return 0;
}