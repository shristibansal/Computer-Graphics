#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	int gd = DETECT, gm; 
	int a[10] = {300,200,450,200,510,300,360,300,300,200};
	int a1[8] = {250,300,250,400,365,400,365,300};
	int a2[6] = {365,400,500,370,500,300};
	initgraph(&gd, &gm, "C:\\turboc3\\bgi");

	setcolor(6);
	drawpoly(5,a);
	drawpoly(4,a1);
	drawpoly(3,a2);
	
	ellipse(80,220,162,270,45,35);
	ellipse(72,192,143,244,55,35);
	ellipse(82,178,104,198,55,40);
	
//	ellipse(86,170,65,134,55,45);
	ellipse(106,169,32,139,55,45);
	
	//ellipse(137,168,49,110,55,38);
	ellipse(152,174,337,96,45,35);	
	ellipse(168,201,287,57,45,35);
	ellipse(150,220,270,9,45,35);
	rectangle(80,242,150,350);
	
	line(300,200,247,305);
	line(302,202,250,303);
	
	// window
	circle(300,270,20);
	
	// door
	rectangle(285,335,330,400);
	
	//land
	line(0,350,250,350);
	line(500,350,700,350);
	
	//sun
	circle(360,80,30);
	line(335,47,343,56);
	line(377,56,392,38);
	line(340,104,330,114);
	line(370,107,381,122);
	
//	line(335,47,340,57);
//	line(370,60,396,40);
//	line(340,104,330,114);
//	line(387,105,398,114);
	
	setfillstyle(1,1);
	floodfill(300,201,6);
	setfillstyle(9,1);
	floodfill(305,201,6);
	setfillstyle(1,7);
	floodfill(360,350,6);
	setfillstyle(1,7);
	floodfill(370,350,6);
	setfillstyle(9,1);
	floodfill(300,340,6);
	setfillstyle(9,1);
	floodfill(300,270,6);
	setfillstyle(1,10);
	floodfill(1,380,6);
	setfillstyle(1,LIGHTBLUE);
	floodfill(10,3,6);
	setfillstyle(1,14);
	floodfill(360,80,6);
	setfillstyle(1,6);
	floodfill(90,250,6);
	setfillstyle(1,GREEN);
	floodfill(80,200,6);
	

	
	getch();
	closegraph();
}
