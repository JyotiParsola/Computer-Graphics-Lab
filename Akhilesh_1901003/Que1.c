#include<graphics.h>  
#include<conio.h>  
void main()  
{  
    int gd=DETECT,gm;  
    initgraph (&gd,&gm,"c:\\tc\\bgi");  
    setcolor(2);
    printf("Before transalation\n\n\n\n\n\n");
    line(50,70,190,40);
    line(60,79,200,66);
    printf("After transalation");
    getch();
    closegraph();
}