#include<graphics.h>
#include<math.h>
void main(){
	float x,y,x1,x2,y1,y2,dx,dy,steps;
	int i,gd=DETECT,gm;
	printf("Enter value of x1,y1,x2,y2= ");
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(WHITE);
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	if(dx>=dy){
		steps=dx;
	}else{
		steps=dy;
	}
	dx=dx/steps;
	dy=dy/steps;
	x=x1;
	y=y1;
	i=1;
	while(i<=steps){
		putpixel(x,y,5);
		x=x+dx;
		y=y+dy;
		i=i+1;
	}
	closegraph();
}