#define _CRT_SECURE_NO_WARNINGS 1

//函数声明

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

#define ROW 9
#define COL 9

#define EASY_COUNT 80

#define ROWS ROW+2
#define COLS COL+2

//初始化棋盘
void init_board(char board[ROWS][COLS],int row,int col,char set);

//打印棋盘
void display(char board[ROW][COL],int row,int col);

//埋雷
void set_mine(char board[ROW][COL], int row, int col);

//找雷
void find_mine(char mine[ROW][COL], char show[ROWS][COLS], int row, int col);
