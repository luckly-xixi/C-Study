#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
//ÓÎÏ·²âÊÔ

//²Ëµ¥º¯Êı
void menu()
{
	printf("************************************\n");
	printf("******         1.play         ******\n");
	printf("******         0.exit         ******\n");
	printf("************************************\n");
	printf("************************************\n");
}



//ÓÎÏ·º¯Êı
void game()
{
	char board[ROWS][COLS] = {0};//É¨À×ÆåÅÌ
	char Main[ROWS][COLS] = {0};//ÂñÀ×ÆåÅÌ

	//³õÊ¼»¯ÆåÅÌ
	init_board(board,ROWS,COLS,'#');
	init_board(Main,ROWS,COLS,'0');

	//´òÓ¡ÆåÅÌ
	//display(board,ROW,COL);
	//display(Main,ROW,COL);

	//ÂñÀ×
	set_mine(Main,ROWS,COLS);
	display(Main, ROW, COL);
	//ÕÒÀ×
	find_mine(Main,board,ROW,COL);

}



int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();//²Ëµ¥
		printf("ÇëÑ¡Ôñ:>\n");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("ÍË³öÓÎÏ·\n");
			break;
		default:
			printf("ÊäÈë´íÎó£¬ÇëÖØĞÂÊäÈë\n");
			break;
		
		}
	} while (input);

	return 0;
}
