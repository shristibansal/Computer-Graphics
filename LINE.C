#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	int gd = DETECT, gm;
	int x1  = 50, y1 = 300;
	int x2 = 200, y2 = 450;
	clrscr();
	initgraph(&gd, &gm, "C:\\turboc3\\bgi");
	line(50,50,250,50);
	line(300,50,300,200);
	line(x1,y1,x2,y2);
	line(250,450,400,300);
	getch();
	closegraph();
}