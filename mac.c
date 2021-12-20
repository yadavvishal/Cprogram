#include<stdio.h>
void main()
{
  int data[10],top;
  int ch,temp;
  ch=0;
  while(ch!=10)
  {
    printf("\n STACK OPERTION");
    printf("\n 1. push ");
    
    printf("\nenter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {   
        case 1: 
        {
          printf("\n enter  data");
          scanf("%d",&temp);
        }
      
        data[++top]==temp;
        break;
        case 2:if(top!=-1)
        {
            printf("\n pop element:%d",data[top]);
            top--;
            if(top==-1)
           {
              printf("\n data is valid");
            
            }
            else 
            {
              printf("\n data is invalid");
            }
            break;
            default: printf("\n not agood choice");
            break;
        }
    }
  }
}
      
      

    

  