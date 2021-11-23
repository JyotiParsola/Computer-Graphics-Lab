#include <stdio.h>
#include<math.h>
#include <graphics.h>

int main(){
    float dx,dy,x1,y1,x2,y2,steps,i;
    float x,y;

    x1 = 100, y1 = 100, x2 = 200, y2 = 100;
    dx = (x2 - x1);
    dy = (y2 - y1);

    int gd=DETECT, gm;
    initgraph(&gd, &gm, "");

    steps = abs(dx)>abs(dy) ? abs(dx) : abs(dy);

    dx = dx/steps;
    dy = dy/steps;
    x=x1;
    y=y1;

    for(i=0; i<=steps; i++){
        putpixel(x,y,WHITE);
        x += dx;
        y += dy;
    }

    getch();
    closegraph();
    return 0;
}
