#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
//��Ϸ����

//�˵�����
void menu()
{
	printf("************************************\n");
	printf("******         1.play         ******\n");
	printf("******         0.exit         ******\n");
	printf("************************************\n");
	printf("************************************\n");
}



//��Ϸ����
void game()
{
	char board[ROWS][COLS] = {0};//ɨ������
	char Main[ROWS][COLS] = {0};//��������

	//��ʼ������
	init_board(board,ROWS,COLS,'#');
	init_board(Main,ROWS,COLS,'0');

	//��ӡ����
	//display(board,ROW,COL);
	//display(Main,ROW,COL);

	//����
	set_mine(Main,ROWS,COLS);
	display(Main, ROW, COL);
	//����
	find_mine(Main,board,ROW,COL);

}



int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();//�˵�
		printf("��ѡ��:>\n");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		
		}
	} while (input);

	return 0;
}
