#include<stdio.h>
void main()
{
    int h=8;
    int b=(h++,h++);
    printf("%d%d\n",b,h);
}