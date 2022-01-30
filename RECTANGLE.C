#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	int gd = DETECT, gm;
	int left = 50, top = 60;
	int right = 200, bottom = 300;
	clrscr();
	initgraph(&gd, &gm, "C:\\turboc3\\bgi");
	rectangle(left, top, right, bottom);
	rectangle(300,80,600,180);
	//square using rectangle()
	rectangle(350,250,500,400);
	getch();
	closegraph();
}