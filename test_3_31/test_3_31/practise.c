#define _CRT_SECURE_NO_WARNINGS 1
//ÍêÊý
//main()
//
//{
//
//	static int k[10];
//
//	int = i;
//	int = j;
//	int = n;
//	int = s;;
//
//	for (j = 2; j<1000; j++)
//
//	{
//
//		n = -1;
//
//		s = j;
//
//		for (i = 1; i<j; i++)
//
//		{
//			if ((j%i) == 0)
//
//			{
//				n++;
//
//				s = s - i;
//
//				k[n] = i;
//
//			}
//
//		}
//
//		if (s == 0)
//
//		{
//			printf(¡°%d is a wanshu : ¡°, j);
//
//			for (i = 0; i<n; i++)
//
//				printf(¡°%d, ¡±, k[i]);
//
//			printf(¡°%d\n¡±, k[n]);
//
//		}
//
//	}
//
//}
//Ñî»ÔÈý½Ç
main()

{
	int i, j, a[6][6];

	for (i = 0; i <= 5; i++)

	{
		a[i][i] = 1; a[i][0] = 1;
	}

	for (i = 2; i <= 5; i++)

	for (j = 1; j <= i - 1; j++)

		a[i][j] = a[i - 1][j] + a[i - 1][j - 1];

	for (i = 0; i <= 5; i++)

	{
		for (j = 0; j <= i; j++)

			printf(" % 4d", a[i][j]);

		printf("\n");
	}

}
//É¾³ý×Ö·û
#include <stdio.h>

main()

{
	char s[80], c;

	int j, k;

	printf("\nEnter a string : ");

	gets(s);

	printf("\nEnter a character : ");

	c = getchar();

	for (j = k = 0; s[j] != '\0'; j++)

	if (s[j] != c)

		s[k++] = s[j];

	s[k] = '\0';

	printf("\n%s", s);

}
