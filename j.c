#include<stdio.h>
int main()
{
 int i=0;
 for (i=0;i<=1000;i++)
 {
  if(i%3!=0 && i%5!=0 && i%15!=0)
  printf("%d\n",i);
 }
 return 0;
}
 
 
