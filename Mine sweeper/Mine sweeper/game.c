#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"


//����ʵ��

void init_board(char board[ROWS][COLS], int row, int col,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;//��ʼ��������
		}
	}
}


void display(char board[ROW][COL], int row, int col)
{
	printf("---------------ɨ����Ϸ----------------\n");
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i=0; i<=col; i++)
	{
		printf(" %d ",i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//ÿ�п�ͷ��ӡһ���к�
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", board[i][j]);
			//����ÿ�е���ʽ��ӡ
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
	printf("---------------ɨ����Ϸ----------------\n");
}



void set_mine(char board[ROW][COL], int row, int col)
{
	int count = EASY_COUNT;
	//���׵ĸ���
	while (count)
	{
	
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		//���������̵Ŀհ״�������õ���
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
	{//�ж�����Ϸ���
		if (0 == get_mine_count(mine,x,y))
		{//�Ѹ���û�е��׵�չʾ�������ַ��ո�
			show[x][y] = ' ';
			int i = 0;
			for (i = x-1; i <= x+1; i++)
			{
				int j = 0;
				for (j = y-1; j <= y+1; j++)
				{
					if ('#' == show[i][j])
					{//��չʾ�������±�δ����explode_spread���������Ƶ��ã���ֹ���ݹ�
						explode_spread(mine, show, ROW, COL, i, j,win);
						win++;
					}
				}
			}

		}
		else
		{//��������У�����ʾ����������Ϣ
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
		printf("��������ҵ�����:>\n");
		scanf("%d %d",&x,&y);
		if (x > 0 && y > 0 && x <= row && y <= col)
		{//�ж�����Ϸ���
			if ('1' == mine[x][y])
			{//�ȵ�����
				printf("���ź�����ȵ�����\n");
				break;//����ѭ��
			}
			else//û�вȵ���
			{
				//ը��ʽչ��
				explode_spread(mine, show, row, col, x, y,win);
				system("cls");
				//��ӡ����
				display(show, ROW, COL);
				//��ջ�����
				//while ((ch == getchar()) != '\n')
			}
		}
		else 
		{
			printf("���겻�Ϸ�������������:>\n");
		}
	}
	
	//������mine�е���ȫ����ʾ��show��
	show_all_mine(mine, show, ROW, COL);
	system("cls");
	//��ӡ����
	display(show, ROW, COL);
	//�ж��Ƿ��Ų�ɹ�
	if (win >= ROW * COL - EASY_COUNT)
	{
		printf("��ϲ���Ų�����еĵ��ף�����\n");
	}
	else
	{
		printf("ɨ��ʧ�ܣ��㱻ը���ˣ�����\n");
	}

}

