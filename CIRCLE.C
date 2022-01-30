#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	int gd = DETECT, gm;
	int x1 = 250, y1 = 250;
	int r1 = 50;
	clrscr();
	initgraph(&gd, &gm, "C:\\turboc3\\bgi");
	circle(x1,y1,r1);
	getch();
	closegraph();
}