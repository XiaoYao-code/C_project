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
		printf("�����������µ����֣�\n");
		scanf("%d", &input);
		if (input > random_num)
			printf("�´��ˣ���������һ�Σ�\n");
		else  if (input < random_num)
			printf("��С�ˣ���������һ�Σ�\n");
		else
		{
			printf("�¶��ˣ���ϲ��������\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	//	�ڵ���rand()����֮ǰ������ʹ��srand()����������������ӣ����û��������������ӣ�rand()�����ڵ���ʱ���Զ�������������Ϊ1�����������ͬ��ÿ�β����������Ҳ����ͬ��
	do
	{
		menu();
		printf("������ѡ�\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("����������������룺\n");
			break;
		}

	} while (input);
	return 0;
}