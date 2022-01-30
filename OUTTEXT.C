#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	int gd = DETECT, gm;
	int x1 = 250, y1 = 250;
	clrscr();
	initgraph(&gd, &gm, "C:\\turboc3\\bgi");
	//outtext function takes string as an arguement
	outtext("Demonstrates outtext");
	//outtextxy function takes 3 arguements- x, y and a string
	outtextxy( x1, y1, "Demonstrates outtextxy");
	getch();
	closegraph();
}