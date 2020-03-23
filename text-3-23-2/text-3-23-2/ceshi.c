#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<Windows.h>
//int main()
//{
//	char arr[] = { "#################" };
//	char att[] = { "hellow  word  !!!" };
//	int left = 0;
//	int right = strlen(arr) - 1;
//	printf("%s\n", arr);
//	while (left<=right)
//	{
//		Sleep(1000);
//		arr[left] = att[left];
//		arr[right] = att[right];
//		left++;
//		right--;
//		printf("%s\n", arr);
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int i = 0;
	char password[10] = "";
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：\n");
		scanf("%s", password);
		if (strcmp(password, "199775") == 0)
			break;
		else  if (i<2)
			printf("输入错误请重新输入。\n");
	}
	if (i==3)
		printf("您已经失败三次，退出系统。\n");
	else
		printf("密码正确。\n");
		return 0;
}


