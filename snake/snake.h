#ifndef SNAKE_H_INCLUDED
#define SNAKE_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <time.h>
#include <conio.h>

#define up 'w'
#define down 's'
#define left 'a'
#define right 'd'
#define stop 'p'

void welcome(); //55开始界面
void Finish();  //291结束界面
void creatgraph();  //69围墙打印
void gotoxy( int x, int y ); //111光标跳转，横为X 0，1，2
void gotoprint( int x, int y);//121跳转打印
void gotodelete( int x, int y);//127跳转删除
void creatfood();               //133食物产生
int ClickControl(); //157获取键盘信号
int Judge();        //270游戏结束判断
void MovingBody(char c);    //172蛇的移动
void Eating();          //233蛇吃到东西后的操作（伸长）
void ChangeBody( int a, int b );//245蛇的坐标变换，后一个复制前一个STRUCT,a.b为head之前的坐标

typedef struct Snakes
{
    int x;
    int y;
    struct Snakes *next;
}snake;

snake *head, *tail;

struct Food
{
    int x;
    int y;
}food;

char name[20];
int score = 0;
char click = 0;
int speed;

#endif // SNAKE_H_INCLUDED
