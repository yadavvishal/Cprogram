#include<stdio.h>
#include<conio.h>
#include<graphic.h>
void main()
    {
      intgmode=DETECT,gdriver;
      initgraph(&gmode,&gdriver,"c:\\tc\\bgi");
      circle(320,240,100);
      getch();
    }
