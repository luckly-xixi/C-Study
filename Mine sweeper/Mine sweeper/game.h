#define _CRT_SECURE_NO_WARNINGS 1

//��������

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 9
#define COL 9

#define EASY_COUNT 80

#define ROWS ROW+2
#define COLS COL+2

//��ʼ������
void init_board(char board[ROWS][COLS],int row,int col,char x);

//��ӡ����
void display(char board[ROWS][COLS],int row,int col);

//����
void set_mine(char board[ROWS][COLS], int row, int col);

//����
void find_mine(char Main[ROWS][COLS], char board[ROWS][COLS], int row, int col);
