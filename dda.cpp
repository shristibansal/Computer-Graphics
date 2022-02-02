#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>

void dda(int x0, int y0, int x1, int y1)
{
	int dx = x1 - x0;
	int dy = y1 - y0;
	int steps = 0;
	if(abs(dx) > abs(dy))
		steps = abs(dx);
	else
		steps = abs(dy);
	float xinc = dx/ (float)steps;
	float yinc = dy/ (float)steps;
	float x = x0;
	float y = y0;
	for(int i = 0; i <= steps; i++)
	{
		putpixel(round(x), round(y),WHITE);
		x += xinc;
		y += yinc;
		delay(100);
	}
}

int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\turboc3\\bgi");
	dda(40,40,80,120);
	dda(150,90,100,200);
	getch();
	closegraph();
	return 0;
}

