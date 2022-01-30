#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	int gd = DETECT, gm;
	clrscr();
	initgraph(&gd, &gm, "C:\\turboc3\\bgi");
	setbkcolor(15);
	setcolor(3);
	// setfillstyle(int pattern, int color)
	setfillstyle(4,2);
	fillellipse(100,100,80,45);
	setcolor(4);
	circle(300,250,70);
	setfillstyle(10,7);
	//floodfill(int x, int y, int border)
	floodfill(300,250,4);
	getch();
	closegraph();
}