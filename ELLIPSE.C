#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	int gd = DETECT, gm;
	clrscr();
	initgraph(&gd, &gm, "C:\\turboc3\\bgi");
	//ellipse() can be used to make an arc
	//ellipse(int x, int y, int stangle, int endangle, int xrad, int yrad)
	ellipse(50,100,0,180,40,80);
	ellipse(250,100,0,180,70,30);
	ellipse(150,180,200,360,65,120);
	//fillellipse() is used to make a complete ellipse filled with a color
	fillellipse(150,400,105,55);
	getch();
	closegraph();
}