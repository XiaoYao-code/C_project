#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("********************\n");
	printf("****   1.paly   ****\n");
	printf("********************\n");
	printf("****    0.out   ****\n");
}
void game()
{
		 //�׵���Ϣ����
	//1.���úõ��׵���Ϣ��
	char mine[ROWS][COLS] = { 0 };
	//2.�Ų�����׵���Ϣ��
	char show[ROWS][COLS] = { 0 };
	 //��ʼ����
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//��ӡ���̣�
	//DispalyBoard(mine, ROW, COL);
	//DispalyBoard(show, ROW, COL);
	//�����ף�
	SetMine(mine, ROW, COL);
	//��ӡ���úõ���
	DispalyBoard(mine, ROW, COL);
	DispalyBoard(show, ROW, COL);
	//�Ų���
	FindMine(mine,show, ROW, COL);
}
void test()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("����ݲ˵�ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��>\n");
			break;
		default: 
			printf("����������������룺>\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}