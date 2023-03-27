#define _CRT_SECURE_NO_WARNINGS 1
//游戏的函数声明

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define ROW 3
#define COL 3

//初始化棋盘
void Inint_board(char board[ROW][COL], int row, int col);


//打印棋盘
void display_board(char board[ROW][COL], int row, int col);


//玩家移动
void player_move(char board[ROW][COL], int row, int col);


//电脑移动
void computer_move(char board[ROW][COL], int row, int col);


//判断输赢
char is_win(char board[ROW][COL], int row, int col);
