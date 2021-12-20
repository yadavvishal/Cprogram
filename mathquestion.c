#include<stdio.h>
#include<string.h>
int main()

{
  float x,a,b,c;
  printf("enter the value of a,b,c:");
  scanf("%f%f%f",&a,&b,&c);
   if(a==0)
    {
      printf("\n value of x not be predicted");
    }
   else
   {
     x=-(b+c)/a;
     printf("\n solution of x=%fg",x);
   } 
   
}



