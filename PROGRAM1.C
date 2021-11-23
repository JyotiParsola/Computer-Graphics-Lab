#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
	int gd=DETECT,gm,x1,x2,y1,y2,x3,y3,x4,y4;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	printf("Enter the line coordinates");
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	line(x1,y1,x2,y2);

	printf("enter the additional coordinates");
	scanf("%d %d %d %d",&x3,&y3,&x4,&y4);

	setcolor(RED);
	line(x1+x3,y1+y3,x2+x4,y2+y4);
	getch();
	closegraph();
}