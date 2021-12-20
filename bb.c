#include<stdio.h>
#include<conio.h>
#include<graphic.h>
void main()
{
    int gmode=DETECT.gdriver;
    initgraph(&gmode,&gdriver,"c:\\tc\\bgi");
    line(50,50,300,300);
    getch(); 
}