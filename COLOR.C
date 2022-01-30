#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	int gd = DETECT, gm;
	int c,i;
	int x=20,y=10;
	char p;
	clrscr();
	initgraph(&gd, &gm, "C:\\turboc3\\bgi");
	// setbkcolor(int) sets background color
	// getbkcolor(int) gets background color
	setbkcolor(15);
	// getmaxcolor() gets max no. of colors
	c = getmaxcolor();
	for(i = 0; i<= c; i++)
	{
		// setcolor(int) sets color
		// getcolor(int) gets color
		setcolor(i);
		outtextxy(x,y,"Hello");
		y = y + 20;
	}
	getch();
	closegraph();
}