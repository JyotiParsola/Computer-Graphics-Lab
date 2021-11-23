#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void draw_line(int,int,int,int);
void main(){
	int x1,x2,y1,y2,gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	draw_line(x1,y1,x2,y2);
	getch();
	closegraph();
}
void draw_line(int x1,int y1,int x2,int y2){
	int dx,dy,steps,i,x,y;
	dx=x2-x1;
	dy=y2-y1;
	if(dx>=dy)steps=dx;
	else steps=dy;
	x=x1;
	y=y1;
	i=1;
	dx=dx/steps;
	dy=dy/steps;
	while(i<=steps){
		putpixel(x,y,WHITE);
		x=x+dx;
		y=y+dy;
		i++;

	}


}