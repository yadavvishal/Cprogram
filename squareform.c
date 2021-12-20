#include<math.h>
#include<stdio.h>
int main()
{
 int i,p,j;
 printf("Number Square Cube:\n");
 for(i=2;i<100;i++)
 {  
   p=i*i;
   j=i*i*i;
   printf("%d\t%d\t%d\n",i,p,j);
   if(j>99999)
   break;
  
 }
  return 0;
}
