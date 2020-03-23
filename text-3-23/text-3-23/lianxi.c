#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	
//	int i = 0;
//	for (i <= 0; i < 10; i++)
//	{
//		int t = rand();
//		printf("%d\n", t);
//	}
//}
#include <stdio.h>
void menu()
{
	printf("****************************\n");
	printf("***  1.play  ****  0.out ***\n");
	printf("****************************\n");
}
void game()
{
	int random_num = rand() % 100 + 1;
	int  input = 0;
	while (1)
	{
		printf("请输入您所猜的数字：\n");
		scanf("%d", &input);
		if (input > random_num)
			printf("猜大了，请您再试一次：\n");
		else  if (input < random_num)
			printf("猜小了，请您再试一次：\n");
		else
		{
			printf("猜对了，恭喜您！！！\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	//	在调用rand()函数之前，可以使用srand()函数设置随机数种子，如果没有设置随机数种子，rand()函数在调用时，自动设计随机数种子为1。随机种子相同，每次产生的随机数也会相同。
	do
	{
		menu();
		printf("请输入选项：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入：\n");
			break;
		}

	} while (input);
	return 0;
}