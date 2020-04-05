#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>

void my_strcpy(char* dest, char* src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
}

void my_strcpy(char* dest, char* src)
{
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = *src;
}

void my_strcpy(char* dest, char* src)
{
	if ((dest != NULL) && (src != NULL))
	{
		while (*dest++ = *src++)
		{
			;
		}
	}
}

#include <assert.h>

void my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);//断言
	assert(src != NULL);//断言

	while (*dest++ = *src++)
	{
		;
	}
}

char* my_strcpy(char* dest, const char* src)
{
	char *ret = dest;
	assert(dest != NULL);//断言
	assert(src != NULL);//断言

	//把src指向的字符串拷贝到dest指向的空间中，包含'\0'
	while (*dest++ = *src++)
	{
		;
	}
	return ret;//返回目的地的起始地址
}


int main()
{
	char arr1[20] = "######";
	char arr2[] = "abcdef";

	printf("%s\n", my_strcpy(arr1, arr2));

	return 0;
}



const修饰指针
1. const 放在*的左边，修饰的是 指针指向的内容（*p），使得指针指向的内容，不能通过p来改变了 
但是指针变量（p）是可以改变的
2. const 放在*的右边，修饰的是 指针变量本身（p）,使得指针变量本身不能被修改
但是指针指向的内容（*p）可以改变

int  main()
{
	const int num = 10;//num不允许被修改
	int n = 100;

	const int * const p = &num;
	*p = 0;
	p = &n;

	printf("num = %d\n", num);
	printf("%d\n", *p);//100
	return 0;
}

