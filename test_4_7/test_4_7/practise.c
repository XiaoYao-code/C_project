#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int my_strlen(const char*arr)	//const ��*�������ָ�룬��Ϊָ��ָ������ݲ��ɱ䣬��ָ���������ɱ�
{	
	/*int count = 0;  //��������ʽʵ��
	while (*arr!='\0')
	{
		count++;
		*arr++;
	}
	return count;*/
	//if (*arr == '\0')	//�ݹ鷽ʽʵ��
	//	return 0;
	//else
	//	return 1 + my_strlen(arr + 1);
	char *p = arr;	  //ָ�뷽ʽʵ��
	while (*p!='\0')
		p++;
	return p - arr;	   //ָ��-ָ�룬�������Ĵ洢�ռ��ֵΪԪ�ظ���
}
int main()
{
	char arr[20] = { "0" };
	gets(arr);	  //scanf ���ܿո񣬻س���Tab������Ĭ�����������gets()���Խ��ܿո�
	int len=my_strlen(arr);
	printf("%d\n", len);
	return 0;
}
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char*dest,const char*src)
{
	char *ret = dest;		 //�洢��ʼ�β�x�ĵ�ַ��
	assert(dest != NULL);		//����
	assert(src!= NULL);		//���ԣ���������ݵ�Ϊ��ָ�룬����ô������stderr��ӡһ��������Ϣ��Ȼ��ͨ������ abort ����ֹ��������
	/*while (*src!='\0')	  
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;*/
	while (*dest++ = *src++)	//���*y��ֵ����ʽ��Ϊ0��Ϊ�����ִ�У���ִ�к�++����*y��ֵΪ0ʱ��'\0'��ASC||��ҲΪ0������ʽΪ�٣�������ִ�У�����ѭ���� 
	{
		;
	}
	return ret;//����Ŀ�ĵصĵ�ַ������ʵ����ʽ���ʣ��ҿ��Եõ�����������ս��
}
int main()
{
	char arr1[20] = "***********";
	char arr2[20] = "abcdefgh";
	/*my_strcpy(arr1, arr2);
	printf("%s\n", arr1);*/
	printf("%s\n", my_strcpy(arr1, arr2)); //����ֱ����ʽ���ʣ�����ֵ����ӡ
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