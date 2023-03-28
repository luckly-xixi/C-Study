#define _CRT_SECURE_NO_WARNINGS 1
//游戏函数的实现

#include"sanzi Chess.h"


void display_board(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if(j < col-1)
			printf("|");
		}
		printf("\n");
		if (i < row-1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if(j < col-1)
				printf("|");
			}
			printf("\n");
		}
	}
}

void Inint_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}


void player_move(char board[ROW][COL], int row, int col)
{
	printf("玩家下棋:>\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		scanf("%d %d", &x, &y);
		//判断下标合法性
		if (x > 0 && y > 0 && x <= row && y <= col)
		{
			//判断空间是否被占用
			if (' ' == board[x - 1][y - 1])
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用，请重新输入\n");
			}
		}
		else
		{
			printf("坐标非法，重新输入\n");
		}
	}
}


void computer_move(char board[ROW][COL], int row, int col)
{
	
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (' ' == board[x][y])
		{
			board[x][y] = '#';
			break;
		}
	}
}

int is_full(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (' ' == board[i][j])
			{
				return 0;
			}
		}
	}
	return 1;
}

char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i=0; i<row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	
	int ret = is_full(board,ROW,COL);
	if (1 == ret)
	{
		//判断平局
		return 'Q';
	}
	//继续
	return 'C';
}