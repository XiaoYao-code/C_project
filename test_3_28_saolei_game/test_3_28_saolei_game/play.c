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
		 //雷的信息储存
	//1.布置好的雷的信息：
	char mine[ROWS][COLS] = { 0 };
	//2.排查出的雷的信息：
	char show[ROWS][COLS] = { 0 };
	 //初始化：
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//打印棋盘：
	//DispalyBoard(mine, ROW, COL);
	//DispalyBoard(show, ROW, COL);
	//布置雷：
	SetMine(mine, ROW, COL);
	//打印布置好的雷
	DispalyBoard(mine, ROW, COL);
	DispalyBoard(show, ROW, COL);
	//排查雷
	FindMine(mine,show, ROW, COL);
}
void test()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请根据菜单选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏：>\n");
			break;
		default: 
			printf("输入错误，请重新输入：>\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}