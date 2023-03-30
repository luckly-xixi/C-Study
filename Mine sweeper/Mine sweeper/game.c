#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"


//函数实现

void init_board(char board[ROWS][COLS], int row, int col,char x)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = x;
		}
	}
}


void display(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i=0; i<=col; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
		
	}
}



void set_mine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
	
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if ('0' == board[x][y])
		{
			board[x][y] = '1';
			count--;
		}
	}
}


int get_mine_count(char Main[ROWS][COLS], int x, int y)
{
return (Main[x-1][y-1]+
		Main[x-1][y]+
	Main[x-1][y+1]+
	Main[x][y-1]+
	Main[x][y+1]+
	Main[x+1][y-1]+
	Main[x+1][y]+
	Main[x + 1][y + 1] - 8 * '0');
}


void find_mine(char Main[ROWS][COLS], char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win <ROW*COL-EASY_COUNT)
	{
		printf("请输入排雷的坐标:>");
		scanf("%d %d", &x, &y);
		//判断坐标合法性
		if (x >= 1 && y >= 1 && x <= row && y <= col)
		{
			if ('#' == board[x][y])
			{
				if ('1' == Main[x][y])
				{
					printf("很遗憾，你被炸死了\n");
					display(Main, ROW, COL);
					break;
				}
				else
				{
					int count = get_mine_count(Main, x, y);
					board[x][y] = count + '0';
					display(board, ROW, COL);
					//display(Main,ROW,COL);
					win++;
				}
			}
			else
			{
				printf("该坐标已经被排查过了\n");
			}
		}
		else
		{
			printf("坐标非法重新输入\n");
		}
	}
	
}
