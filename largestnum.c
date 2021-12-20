#include<stdio.h>
int main()
{
   int num1,num2,num3;
   printf("enter the num1:");
   scanf("%d",&num1);
   printf("enter the num2:");
   scanf("%d",&num2);
   printf("enter the num3:");
   scanf("%d",&num3);
   if(num1>num2)
    {
      if(num1>num3)
        {
          printf(" the largest number is :%d",num1);
        }
       else
        {
          printf(" the largest number is:%d",num3);
        }   

    }
   else
     {
       if(num2>num3)
        {
           printf("the largest number is :%d",num2);
        }
       else
        {
          printf(" the largest number is:%d",num3);
        }
      }
}   
     
                                                                               
          

