#define _CRT_SECURE_NO_WARNINGS 1
//��Ϸ�ĺ�������

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define ROW 3
#define COL 3

//��ʼ������
void Inint_board(char board[ROW][COL], int row, int col);


//��ӡ����
void display_board(char board[ROW][COL], int row, int col);


//����ƶ�
void player_move(char board[ROW][COL], int row, int col);


//�����ƶ�
void computer_move(char board[ROW][COL], int row, int col);


//�ж���Ӯ
char is_win(char board[ROW][COL], int row, int col);
