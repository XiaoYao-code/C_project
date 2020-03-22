#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int  sz = (sizeof(arr) / sizeof(arr[0]));
//	int s = 7;	//要查找的数字
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == s)
//		{
//			printf("找到了，这是元素的下标是i，数字是%d\n", arr[i]);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("没找到。\n");
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = (sizeof(arr) / sizeof(arr[0]));
	int s = 1;
	int zuo = 0;
	int you = sz - 1;
	while (zuo<=you)
	{
		int zhong = (zuo + you) / 2;
		if (s > arr[zhong])
			zuo = zhong + 1;
		else
		{
			if (s < arr[zhong])
				you = zhong - 1;
			else
			{
				printf("找到了，下标为%d",zhong);
				break;
			}
		}
	}
	if (zuo>you)
		printf("没有找到");
	return 0;
}