#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 

	//	int x = 3;
	//	int y = 3;
	//	switch (x % 2) {
	//	case 1:
	//		switch (y)
	//		{
	//		case 0:
	//			printf("first");
	//		case 1:
	//			printf("second");
	//			break;
	//		default: printf("hello");
	//		}
	//	case 2:
	//		printf("third");
	//	}
	//	return 0;
	//}
	/*int func(int a);
	{
		int b;
		int a = 1;
		switch (a)
		{
		case 1: b = 30;
		case 2: b = 20;
		case 3: b = 16;
		default: b = 0;
		}
		return b;
	}
}*/


	//int main()
	//{
	//	/*int i = 0;
	//	for (i = 0; i<10; i++)
	//	{
	//		if (i = 5)
	//			printf("%d ", i);
	//	}
	//	return 0;*/
	//	int func(int a);
	//	{
	//		int b;
	//		switch (func(1))
	//		{
	//		case 1: b = 30;
	//		case 2: b = 20;
	//		case 3: b = 16;
	//		default: b = 0;
	//		}
	//		return b;
	//	}
	//}
//int main()
//{
//	//将三个数从大到小输出
//	double a = 0;
//	double b = 0;
//	double c = 0;
//	double max = 0;
//
//	printf("请输入三个数字:\n");
//	scanf("%lf,%lf,%lf", &a, &b, &c);
//	if (a > b)
//	{
//		if (b > c)
//			printf("%lf>%lf>%lf",a, b, c);
//		else
//		{	 
//			if (a>c)
//				printf("%lf>%lf>%lf", a, c, b);
//			else
//				printf("%lf>%lf>%lf" ,c, a, b);
//		}	
//	}
//	else
//	{
//		if (a > c)
//			printf("%lf>%lf>%lf", b, a, c);
//		else
//		{
//			if (c > b)
//				printf("%lf>%lf>%lf", c, b, a);
//			else
//				printf("%lf>%lf>%lf", b, c, a);
//		}
//
//	}
//	return 0;
//}
//int main()
//{
//	int i = 3 ;
//	while (i<100)
//	{
//		printf("%d\n", i);
//		i = i + 3;
//	}
//	return 0;
//}
//int main()
//{
//	int i ;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i;
//	for (i = 1000; i <= 2000; i = i + 4)
//		printf("%d\n", i);
//	return 0;
//}
//int main()
//{
//	int i;
//	int j;
//	for (i = 100,j=1; i <=200; i++)
//	{
//		for (j = 2; j < i;j++)
//		    if (i%j == 0)
//			printf("%d\n", i);
//	}
//
//	return 0;
//}		i
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	printf("请输入两个数字用逗号间隔：\n");
//	scanf("%d,%d", &a, &b);
//	if (a > b)
//	     i = b;
//	else
//		 i= a;
//	while (a%i != 0  || b%i != 0 )
//		i--;
//	printf("最大公约数是%d\n", i);
//	return 0;
//}
//int main()
//{
//	while (1&&1)
//		printf("hehe");
//	return 0;
//
//}
//int main()
//{
//	int i ;
//	int j ;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (i == j)
//			printf("%d\n", i);
//	}
//	return 0;
//}
int main()

{
	int i;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i%100 != 0 || i%400 == 0 )
			printf("%d\n", i);
	}
	return 0;

}