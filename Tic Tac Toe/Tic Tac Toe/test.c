#define _CRT_SECURE_NO_WARNINGS 1
//测试三子棋

#include"sanzi Chess.h"


void game()
{
	char board[ROW][COL] = {0};
	printf("游戏开始\n");

	//初始化棋盘
	Inint_board(board, ROW, COL);
	//打印棋盘
	display_board(board, ROW, COL);
	//scanf("%d %d",&x,&y);
	char ret = 0;
	while (1)
	{
		//玩家移动
		player_move(board, ROW, COL);
		//判断棋盘
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		display_board(board, ROW, COL);

		//电脑移动
		computer_move(board,ROW,COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		display_board(board, ROW, COL);
	}
	if (ret == 'Q')
	{
		printf("平均\n");
	}
	if (ret == "#")
	{
		printf("电脑胜\n");
	}
	if (ret == '*')
	{
		printf("玩家胜\n");
	}
	display_board(board, ROW, COL);

}

//菜单
void menu()
{
	printf("***************************************\n");
	printf("***************************************\n");
	printf("******           1.play           *****\n");
	printf("******           0.exit           *****\n");
	printf("***************************************\n");
	printf("***************************************\n");

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//菜单函数
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);
	
	return 0;
}