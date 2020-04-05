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
	assert(dest != NULL);//����
	assert(src != NULL);//����

	while (*dest++ = *src++)
	{
		;
	}
}

char* my_strcpy(char* dest, const char* src)
{
	char *ret = dest;
	assert(dest != NULL);//����
	assert(src != NULL);//����

	//��srcָ����ַ���������destָ��Ŀռ��У�����'\0'
	while (*dest++ = *src++)
	{
		;
	}
	return ret;//����Ŀ�ĵص���ʼ��ַ
}


int main()
{
	char arr1[20] = "######";
	char arr2[] = "abcdef";

	printf("%s\n", my_strcpy(arr1, arr2));

	return 0;
}



const����ָ��
1. const ����*����ߣ����ε��� ָ��ָ������ݣ�*p����ʹ��ָ��ָ������ݣ�����ͨ��p���ı��� 
����ָ�������p���ǿ��Ըı��
2. const ����*���ұߣ����ε��� ָ���������p��,ʹ��ָ����������ܱ��޸�
����ָ��ָ������ݣ�*p�����Ըı�

int  main()
{
	const int num = 10;//num�������޸�
	int n = 100;

	const int * const p = &num;
	*p = 0;
	p = &n;

	printf("num = %d\n", num);
	printf("%d\n", *p);//100
	return 0;
}

