#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int my_strlen(const char*arr)	//const 在*左侧修饰指针，则为指针指向的内容不可变，但指针变量本身可变
{	
	/*int count = 0;  //计数器方式实现
	while (*arr!='\0')
	{
		count++;
		*arr++;
	}
	return count;*/
	//if (*arr == '\0')	//递归方式实现
	//	return 0;
	//else
	//	return 1 + my_strlen(arr + 1);
	char *p = arr;	  //指针方式实现
	while (*p!='\0')
		p++;
	return p - arr;	   //指针-指针，在连续的存储空间差值为元素个数
}
int main()
{
	char arr[20] = { "0" };
	gets(arr);	  //scanf 接受空格，回车，Tab键都会默认输入结束，gets()可以接受空格
	int len=my_strlen(arr);
	printf("%d\n", len);
	return 0;
}
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char*dest,const char*src)
{
	char *ret = dest;		 //存储初始形参x的地址。
	assert(dest != NULL);		//断言
	assert(src!= NULL);		//断言，即如果传递的为空指针，则那么它先向stderr打印一条出错信息，然后通过调用 abort 来终止程序运行
	/*while (*src!='\0')	  
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;*/
	while (*dest++ = *src++)	//如果*y赋值则表达式不为0，为真继续执行，先执行后++，当*y的值为0时，'\0'的ASC||的也为0，则表达式为假，不继续执行，跳出循环。 
	{
		;
	}
	return ret;//返回目的地的地址，可以实现链式访问，且可以得到拷贝后的最终结果
}
int main()
{
	char arr1[20] = "***********";
	char arr2[20] = "abcdefgh";
	/*my_strcpy(arr1, arr2);
	printf("%s\n", arr1);*/
	printf("%s\n", my_strcpy(arr1, arr2)); //可以直接链式访问，返回值被打印
	return 0;
}

//char* my_s(char*src,int x)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		if (*src % 2)
//			;
//	}
//}
#include<stdio.h>
void swap_arr(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;
	while (left<right)
	{
		while ((left<right) && (arr[left] % 2 == 0))
		{
			left++;
		}
		while ((left<right) && (arr[right] % 2 == 1))
		{
			right--;
		}

		if (left<right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	int arr[20] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for ( i = 0; i < 20; i++)
	{
		scanf("%d", &arr[i]);
	}
	swap_arr(arr,sz);
	for (i = 0; i < 20; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}