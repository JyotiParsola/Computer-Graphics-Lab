#include <stdio.h>
#include<math.h>
#include <graphics.h>

int main(){
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "");

    int gd=DETECT, gm;
    initgraph(&gd, &gm, "");

    int x,y,x1,y1;
    x=30, y=30, x1=100, y1=100;

    outtext("  Before translation");
    rectangle(x,y,x1,y1);

    int i = 200;
    x += i,
    y += i,
    x1 += i,
    y1 += i;
    delay(1000);
    cleardevice();

    outtext("  After translation");
    rectangle(x,y,x1,y1);

    getch();
    closegraph();
    return 0;
}
