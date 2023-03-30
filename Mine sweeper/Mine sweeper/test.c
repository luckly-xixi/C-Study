#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
//游戏测试

//菜单函数
void menu()
{
	printf("************************************\n");
	printf("******         1.play         ******\n");
	printf("******         0.exit         ******\n");
	printf("************************************\n");
	printf("************************************\n");
}



//游戏函数
void game()
{
	char show[ROWS][COLS] = {0};//扫雷棋盘
	char mine[ROWS][COLS] = {0};//埋雷棋盘

	//初始化棋盘
	init_board(show,ROWS,COLS,'#');
	//将棋盘和行列全部传递过去，同时因为公用一个初始化函数，那么
	//两个棋盘因为初始化的内容不同，我们将初始化的内容也传递过去
	init_board(mine,ROWS,COLS,'0');

	//打印棋盘
	//display(board,ROW,COL);
	//display(Main,ROW,COL);

	//埋雷
	set_mine(mine,ROW,COL);
	system("cls");//清空屏幕


	display(show, ROW, COL);
	//找雷
	find_mine(mine,show,ROW,COL);

}



int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();//菜单
		printf("请选择:>\n");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		
		}
	} while (input);

	return 0;
}
