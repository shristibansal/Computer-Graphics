#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
using namespace std;
int main()
{
	int gd = DETECT, gm;	
	initgraph(&gd, &gm, "C:\\turboc3\\bgi");
	for(int i = 0; i<=500; i++)
	{
		//car body
		line(50 + i,370,90 + i,370);
		line(130 + i,370,220 + i,370);
		line(260 + i,370,300 + i,370);
		arc(110 + i,370,0,180,20);
		arc(240 + i,370,0,180,20);
		line(300 + i,370,300 + i,350);
		line(300 + i,350,240 + i,330);
		line(240 + i,330,200 + i,300);
		line(200 + i,300,110 + i,300);
		line(110 + i,300,80 + i,330);
		line(80 + i,330,50 + i,340);
		line(50 + i,340,50 + i,370);
		//window
		line(165 + i,305,165 + i,330);
		line(165 + i,330,230 + i,330);
		line(230 + i,330,195 + i,305);
		line(195 + i,305,165 + i,305);
		line(160 + i,305,160 + i,330);
		line(160 + i,330,95 + i,330);
		line(95 + i,330,120 + i,305);
		line(120 + i,305,160 + i,305);
		//wheels
		circle(110 + i,370,17);
		circle(240 + i,370,17);
		delay(10);
		cleardevice();
		//road
		line(0,390,639,390); 
	}
	getch();
	closegraph();
	return 0;
}

