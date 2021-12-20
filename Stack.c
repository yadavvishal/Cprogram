#include<stdio.h>
#include<stdlib.h>
#define max 5
int stack[max],choice,top=-1,n;
void push(void);
void pop(void);
void display(void);
void main()
 
{
 printf("\n enter the size of stack:");
    scanf("%d",&n);
   while(1)
  
  {
    printf("\n\t STACK OPERATIONS ");
    printf("\n\t 1.push\n\t 2.pop\n\t 3.display\n\t      4.exit");
    printf("\n enter the choice:");
    scanf("%d",&choice);
 

 switch(choice)
 {
    case 1:
    
        push();
        break;

    
    case 2:
    
        pop();
        break;
    
    case 3:
    
        display();
        break;
    
    case 4:
    
      exit(0);
      
      default: printf("\nwrong choice!!");
    }
  }
}
 void push()
  {
   
     int item;
     if(top==max-1)
      {
        printf("\n overflow");
       }
    else
      {
        printf("\n enter element to push");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
      }
  }
 void pop()
  {
    if(top==-1)
    {
       printf("\nstack is empty");
    }
    else
    {
       printf("\ndeleted element is %d",stack[top]);
       top=top-1;
     }
   }
 void display()
 {
   int i;
   if(top==-1)
   {
     printf("\n stack is empty");
    }
   else
   {
     printf("\n stack.....\n");
     for(i=top;i>=0;--i)
      printf("%d\n ",stack[i]);
    }
  }
     
      



