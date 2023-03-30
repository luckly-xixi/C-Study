#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"


//函数实现

void init_board(char board[ROWS][COLS], int row, int col,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;//初始化的内容
		}
	}
}


void display(char board[ROW][COL], int row, int col)
{
	printf("---------------扫雷游戏----------------\n");
	int i = 0;
	int j = 0;
	//打印列号
	for (i=0; i<=col; i++)
	{
		printf(" %d ",i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//每行开头打印一个行号
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", board[i][j]);
			//棋盘每行的正式打印
			if (j<col)
				printf("|");
		}
		if (i<row)
		{
			printf("   ");
			for (j = 1; j <= col; j++)
			{
				print("---");
				if (j < col-1)
					printf("|");
			}
			printf("\n");
		}
	}
	printf("---------------扫雷游戏----------------\n");
}



void set_mine(char board[ROW][COL], int row, int col)
{
	int count = EASY_COUNT;
	//地雷的个数
	while (count)
	{
	
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		//在埋雷棋盘的空白处随机设置地雷
		if ('0' == board[x][y])
		{
			board[x][y] = '1';
			count--;
		}
	}
}


int get_mine_count(char mine[ROW][COL], int x, int y)
{
return (mine[x-1][y-1]+
		mine[x-1][y]+
	mine[x-1][y+1]+
	mine[x][y-1]+
	mine[x][y+1]+
	mine[x+1][y-1]+
	mine[x+1][y]+
	mine[x + 1][y + 1] - 8 * '0');
}


void explode_spread(char mine[ROW][COL], char show[ROW][COL], int row,int col,int x,int y,int win)
{
	if (x > 0 && y > 0 && x <= row && y <= col)
	{//判断坐标合法性
		if (0 == get_mine_count(mine,x,y))
		{//把附近没有地雷的展示数组变成字符空格
			show[x][y] = ' ';
			int i = 0;
			for (i = x-1; i <= x+1; i++)
			{
				int j = 0;
				for (j = y-1; j <= y+1; j++)
				{
					if ('#' == show[i][j])
					{//当展示数组垓下标未调用explode_spread函数，限制调用，防止死递归
						explode_spread(mine, show, ROW, COL, i, j,win);
						win++;
					}
				}
			}

		}
		else
		{//如果附近有，就显示地雷数量信息
			show[x][y] = get_mine_count(mine, x, y) + '0';
		}


	}
}


void show_all_mine(char mine[ROW][COL],char show[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 1; i <= row; i++)
	{
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			if ('1' == show[i][j])
			{
				mine[i][j] = '*';
			}
		}
	}
}

void find_mine(char mine[ROW][COL], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	char ch = 0;
	while (win < ROW*COL-EASY_COUNT)
	{
		printf("请输入查找的坐标:>\n");
		scanf("%d %d",&x,&y);
		if (x > 0 && y > 0 && x <= row && y <= col)
		{//判断坐标合法性
			if ('1' == mine[x][y])
			{//踩到了雷
				printf("很遗憾，你踩到雷了\n");
				break;//跳出循环
			}
			else//没有踩到雷
			{
				//炸金花式展开
				explode_spread(mine, show, row, col, x, y,win);
				system("cls");
				//打印棋盘
				display(show, ROW, COL);
				//清空缓存区
				//while ((ch == getchar()) != '\n')
			}
		}
		else 
		{
			printf("坐标不合法，请重新输入:>\n");
		}
	}
	
	//把所有mine中地雷全部显示到show上
	show_all_mine(mine, show, ROW, COL);
	system("cls");
	//打印棋盘
	display(show, ROW, COL);
	//判断是否排查成功
	if (win >= ROW * COL - EASY_COUNT)
	{
		printf("恭喜你排查出所有的地雷！！！\n");
	}
	else
	{
		printf("扫雷失败，你被炸死了！！！\n");
	}

}

