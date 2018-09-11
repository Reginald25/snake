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

void welcome(); //55��ʼ����
void Finish();  //291��������
void creatgraph();  //69Χǽ��ӡ
void gotoxy( int x, int y ); //111�����ת����ΪX 0��1��2
void gotoprint( int x, int y);//121��ת��ӡ
void gotodelete( int x, int y);//127��תɾ��
void creatfood();               //133ʳ�����
int ClickControl(); //157��ȡ�����ź�
int Judge();        //270��Ϸ�����ж�
void MovingBody(char c);    //172�ߵ��ƶ�
void Eating();          //233�߳Ե�������Ĳ������쳤��
void ChangeBody( int a, int b );//245�ߵ�����任����һ������ǰһ��STRUCT,a.bΪhead֮ǰ������

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
