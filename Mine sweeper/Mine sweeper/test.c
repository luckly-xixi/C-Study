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
	char show[ROWS][COLS] = {0};//ɨ������
	char mine[ROWS][COLS] = {0};//��������

	//��ʼ������
	init_board(show,ROWS,COLS,'#');
	//�����̺�����ȫ�����ݹ�ȥ��ͬʱ��Ϊ����һ����ʼ����������ô
	//����������Ϊ��ʼ�������ݲ�ͬ�����ǽ���ʼ��������Ҳ���ݹ�ȥ
	init_board(mine,ROWS,COLS,'0');

	//��ӡ����
	//display(board,ROW,COL);
	//display(Main,ROW,COL);

	//����
	set_mine(mine,ROW,COL);
	system("cls");//�����Ļ


	display(show, ROW, COL);
	//����
	find_mine(mine,show,ROW,COL);

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
