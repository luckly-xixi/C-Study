#define _CRT_SECURE_NO_WARNINGS 1
//����������

#include"sanzi Chess.h"


void game()
{
	char board[ROW][COL] = {0};
	printf("��Ϸ��ʼ\n");

	//��ʼ������
	Inint_board(board, ROW, COL);
	//��ӡ����
	display_board(board, ROW, COL);
	//scanf("%d %d",&x,&y);
	char ret = 0;
	while (1)
	{
		//����ƶ�
		player_move(board, ROW, COL);
		//�ж�����
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		display_board(board, ROW, COL);

		//�����ƶ�
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
		printf("ƽ��\n");
	}
	if (ret == "#")
	{
		printf("����ʤ\n");
	}
	if (ret == '*')
	{
		printf("���ʤ\n");
	}
	display_board(board, ROW, COL);

}

//�˵�
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
		menu();//�˵�����
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	
	return 0;
}